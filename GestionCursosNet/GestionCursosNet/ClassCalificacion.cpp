#include "ClassCalificacion.h"
#include "CConexion.h"

using namespace System::Data;

ClassCalificacion::ClassCalificacion(String^ cnnstring)
{
	CnnString = cnnstring;
}

bool ClassCalificacion::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(calificacion) + "," + Convert::ToString(cod_alumno) + "," + Convert::ToString(cod_salon_curso);
	return Trans->Proceso("CALL sp_ins_exp_calificacion (" + parametros + ")");
}

bool ClassCalificacion::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_calificacion);
	return Trans->Proceso("CALL sp_del_exp_calificacion (" + parametros + ")");
}

bool ClassCalificacion::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_calificacion) + "," + Convert::ToString(calificacion) + "," + Convert::ToString(cod_alumno) + "," + Convert::ToString(cod_salon_curso);
	return Trans->Proceso("CALL sp_upd_exp_calificacion (" + parametros + ")");
}

DataTable^ ClassCalificacion::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_calificacion);
	return Trans->Consulta("CALL sp_sel_exp_calificacion (" + parametros + ")");
}

DataTable^ ClassCalificacion::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_alumno);
	return Trans->Consulta("SELECT * FROM v_exp_calificacion WHERE cod_alumno = " + cod_alumno + "");
}

DataTable^ ClassCalificacion::Reporte()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_calificacion);
	return Trans->Consulta("select * from v_exp_calificacion where cod_calificacion = " + parametros + "");
}

bool ClassCalificacion::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_calificacion);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_exp_calificacion (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassCalificacion::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		calificacion = Convert::ToDouble(datos->Rows[0]["calificacion"]->ToString());
		cod_alumno = Convert::ToInt32(datos->Rows[0]["cod_alumno"]->ToString());
		cod_salon_curso = Convert::ToInt32(datos->Rows[0]["cod_salon_curso"]->ToString());
	}
	else
	{
		calificacion = 0;
		cod_alumno = 0;
		cod_salon_curso = 0;
	}
}
