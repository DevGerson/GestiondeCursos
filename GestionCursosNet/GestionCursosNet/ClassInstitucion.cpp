#include "ClassInstitucion.h"
#include "CConexion.h"

using namespace System::Data;

ClassInstitucion::ClassInstitucion(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassInstitucion::Parametros(String ^ Institucion)
{
	institucion = Institucion;
}

bool ClassInstitucion::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + institucion + "'";
	return Trans->Proceso("CALL sp_ins_pg_institucion (" + parametros + ")");
}

bool ClassInstitucion::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_institucion);
	return Trans->Proceso("CALL sp_del_pg_institucion (" + parametros + ")");
}

bool ClassInstitucion::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_institucion) + ",'" + institucion + "'";
	return Trans->Proceso("CALL sp_upd_pg_institucion (" + parametros + ")");
}

DataTable^ ClassInstitucion::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_institucion);
	return Trans->Consulta("CALL sp_sel_pg_institucion (" + parametros + ")");
}

bool ClassInstitucion::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_institucion);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_institucion (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassInstitucion::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		institucion = datos->Rows[0]["institucion"]->ToString();
	}
	else
	{
		institucion = "";
	}
}
