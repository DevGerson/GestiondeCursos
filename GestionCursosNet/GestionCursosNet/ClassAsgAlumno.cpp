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

DataTable^ ClassAsgAlumno::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_alumno);
	return Trans->Consulta("CALL sp_v_sel_asg_alumno (" + parametros + ")");
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
