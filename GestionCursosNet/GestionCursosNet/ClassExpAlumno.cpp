#include "ClassExpAlumno.h"
#include "CConexion.h"

using namespace System::Data;

ClassExpAlumno::ClassExpAlumno(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassExpAlumno::Parametros(String ^ Nombre, String ^ Dpi, String^ Direccion)
{
	nombre = Nombre;
	dpi = Dpi;
	direccion = Direccion;
}

bool ClassExpAlumno::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + nombre + "'," + dpi + ",'" + direccion + "'";
	return Trans->Proceso("CALL sp_ins_exp_alumno (" + parametros + ")");
}

bool ClassExpAlumno::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_alumno);
	return Trans->Proceso("CALL sp_del_exp_alumno (" + parametros + ")");
}

bool ClassExpAlumno::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_alumno) + ",'" + nombre + "'," + dpi + ",'" + direccion + "'";
	return Trans->Proceso("CALL sp_upd_exp_alumno (" + parametros + ")");
}

DataTable^ ClassExpAlumno::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_alumno);
	return Trans->Consulta("CALL sp_sel_exp_alumno (" + parametros + ")");
}

bool ClassExpAlumno::Obtener() 
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_alumno);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_exp_alumno (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassExpAlumno::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		nombre = datos->Rows[0]["nombre"]->ToString();
		dpi = datos->Rows[0]["dpi"]->ToString();
		direccion = datos->Rows[0]["direccion"]->ToString();
	}
	else
	{
		nombre = "";
		dpi = "";
		direccion = "";
	}	
}
