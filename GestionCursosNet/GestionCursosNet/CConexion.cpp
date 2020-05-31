#include "CConexion.h"

CConexion::CConexion(String^ cnnstring)
{
	conexion = cnnstring;
}

bool CConexion::Proceso(String^ Consulta)
{
	try {
		cnn = gcnew MySqlConnection(conexion);
		cnn->Open();
		cmd = gcnew MySqlCommand(Consulta, cnn);
		cmd->ExecuteNonQuery();
		return true;
	}
	catch (ApplicationException^ e)
	{
		cnn->Close();
		return false;
	}
	finally
	{
		cnn->Close();
	}
	
}

DataTable^ CConexion::Consulta(String^ Consulta) 
{
	try 
	{
		cnn = gcnew MySqlConnection(conexion);
		cnn->Open();
		adp = gcnew MySqlDataAdapter(Consulta, cnn);
		dt = gcnew DataTable();
		adp->Fill(dt);
		return dt;
	}
	catch (ApplicationException^ e)
	{
		cnn->Close();
		return nullptr;
	}
	finally
	{
		cnn->Close();
	}

}
