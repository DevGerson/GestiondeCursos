#include "ClassSalon.h"
#include "CConexion.h"

using namespace System::Data;

ClassSalon::ClassSalon(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassSalon::Parametros(String^ Salon, int Cod_centrocosto)
{
	salon = Salon;
	cod_centrocosto = Cod_centrocosto;
}

bool ClassSalon::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + salon + "'," + Convert::ToString(cod_centrocosto);
	return Trans->Proceso("CALL sp_ins_pg_salon (" + parametros + ")");
}

bool ClassSalon::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon);
	return Trans->Proceso("CALL sp_del_pg_salon (" + parametros + ")");
}

bool ClassSalon::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon) + ",'" + salon + "', " + Convert::ToString(cod_centrocosto);
	return Trans->Proceso("CALL sp_upd_pg_salon (" + parametros + ")");
}

DataTable^ ClassSalon::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon);
	return Trans->Consulta("CALL sp_sel_pg_salon (" + parametros + ")");
}

DataTable^ ClassSalon::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon);
	return Trans->Consulta("CALL sp_v_sel_pg_salon (" + parametros + ")");
}

bool ClassSalon::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_salon (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassSalon::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		salon = datos->Rows[0]["salon"]->ToString();
		cod_centrocosto = Convert::ToInt32(datos->Rows[0]["cod_centrocosto"]->ToString());
	}
	else
	{
		salon = "";
		cod_centrocosto = 0;
	}
}