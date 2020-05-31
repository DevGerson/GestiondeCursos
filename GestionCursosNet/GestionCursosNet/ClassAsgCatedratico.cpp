#include "ClassAsgCatedratico.h"
#include "CConexion.h"

using namespace System::Data;

ClassAsgCatedratico::ClassAsgCatedratico(String^ cnnstring)
{
	CnnString = cnnstring;
}

bool ClassAsgCatedratico::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_catedratico);
	return Trans->Proceso("CALL sp_ins_asg_catedratico (" + parametros + ")");
}

bool ClassAsgCatedratico::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_catedratico);
	return Trans->Proceso("CALL sp_del_asg_catedratico (" + parametros + ")");
}

DataTable^ ClassAsgCatedratico::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_catedratico);
	return Trans->Consulta("CALL sp_sel_asg_catedratico (" + parametros + ")");
}

DataTable^ ClassAsgCatedratico::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_catedratico);
	return Trans->Consulta("CALL sp_v_sel_asg_catedratico (" + parametros + ")");
}

bool ClassAsgCatedratico::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_catedratico);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_asg_catedratico (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassAsgCatedratico::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		cod_salon_curso = Convert::ToInt32(datos->Rows[0]["cod_salon_curso"]->ToString());
		cod_catedratico = Convert::ToInt32(datos->Rows[0]["cod_catedratico"]->ToString());
	}
	else
	{
		cod_salon_curso = 0;
		cod_catedratico = 0;
	}
}

