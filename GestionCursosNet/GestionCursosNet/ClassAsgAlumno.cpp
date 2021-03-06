#include "ClassAsgAlumno.h"
#include "CConexion.h"

using namespace System::Data;

ClassAsgAlumno::ClassAsgAlumno(String^ cnnstring)
{
	CnnString = cnnstring;
}

bool ClassAsgAlumno::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Proceso("CALL sp_ins_asg_alumno (" + parametros + ")");
}

bool ClassAsgAlumno::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Proceso("CALL sp_del_asg_alumno (" + parametros + ")");
}

DataTable^ ClassAsgAlumno::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Consulta("CALL sp_sel_asg_alumno (" + parametros + ")");
}

DataTable^ ClassAsgAlumno::Reporte(String^ nombre)
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = nombre;
	return Trans->Consulta("SELECT * FROM v_asg_alumno WHERE nombre like '%" + parametros + "%'");
}

DataTable^ ClassAsgAlumno::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Consulta("CALL sp_v_sel_asg_alumno (" + parametros + ")");
}

DataTable^ ClassAsgAlumno::VistaAlumno()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Consulta("SELECT * FROM v_asg_alumno WHERE cod_alumno = "+ cod_alumno +"");
}

DataTable^ ClassAsgAlumno::VistaAll()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	return Trans->Consulta("SELECT * FROM v_asg_alumno");
}

DataTable^ ClassAsgAlumno::VistaGrid()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	return Trans->Consulta("select tipocurso,curso,nombre,salon from  v_asg_alumno ");
}

bool ClassAsgAlumno::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_asg_alumno (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassAsgAlumno::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		cod_salon_curso = Convert::ToInt32(datos->Rows[0]["cod_salon_curso"]->ToString());
		cod_alumno = Convert::ToInt32(datos->Rows[0]["cod_alumno"]->ToString());
	}
	else
	{
		cod_salon_curso = 0;
		cod_alumno = 0;
	}
}
