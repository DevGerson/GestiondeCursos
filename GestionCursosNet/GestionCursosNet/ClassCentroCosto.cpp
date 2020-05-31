#include "ClassCentroCosto.h"
#include "CConexion.h"

using namespace System::Data;

ClassCentroCosto::ClassCentroCosto(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassCentroCosto::Parametros(String ^ CentroCosto)
{
	centrocosto = CentroCosto;
}

bool ClassCentroCosto::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + centrocosto + "'," + Convert::ToString(cod_departamento);
	return Trans->Proceso("CALL sp_ins_pg_centrocosto (" + parametros + ")");
}

bool ClassCentroCosto::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_centrocosto);
	return Trans->Proceso("CALL sp_del_pg_centrocosto (" + parametros + ")");
}

bool ClassCentroCosto::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_centrocosto) + ",'" + centrocosto + "'," + Convert::ToString(cod_departamento);
	return Trans->Proceso("CALL sp_upd_pg_centrocosto (" + parametros + ")");
}

DataTable^ ClassCentroCosto::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_centrocosto);
	return Trans->Consulta("CALL sp_sel_pg_centrocosto (" + parametros + ")");
}

DataTable^ ClassCentroCosto::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_centrocosto);
	return Trans->Consulta("CALL sp_v_sel_pg_centrocosto (" + parametros + ")");
}


bool ClassCentroCosto::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_centrocosto);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_centrocosto (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassCentroCosto::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		centrocosto = datos->Rows[0]["centrocosto"]->ToString();
		cod_departamento = Convert::ToInt32(datos->Rows[0]["cod_departamento"]->ToString());
	}
	else
	{
		centrocosto = "";
		cod_departamento = 0;
	}
}
