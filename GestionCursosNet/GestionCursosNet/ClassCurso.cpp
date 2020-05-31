#include "ClassCurso.h"
#include "CConexion.h"

using namespace System::Data;

ClassCurso::ClassCurso(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassCurso::Parametros(String ^ Curso)
{
	curso = Curso;
}

bool ClassCurso::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + curso + "'," + Convert::ToString(cod_tipocurso) + "," + Convert::ToString(cod_centrocosto);
	return Trans->Proceso("CALL sp_ins_pg_curso (" + parametros + ")");
}

bool ClassCurso::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_curso);
	return Trans->Proceso("CALL sp_del_pg_curso (" + parametros + ")");
}

bool ClassCurso::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_curso) + ",'" + curso + "', " + Convert::ToString(cod_tipocurso) + ", " + Convert::ToString(cod_centrocosto);
	return Trans->Proceso("CALL sp_upd_pg_curso (" + parametros + ")");
}

DataTable^ ClassCurso::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_curso);
	return Trans->Consulta("CALL sp_sel_pg_curso (" + parametros + ")");
}

DataTable^ ClassCurso::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_curso);
	return Trans->Consulta("CALL sp_v_sel_pg_curso (" + parametros + ")");
}

DataTable^ ClassCurso::Reporte()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = curso;
	return Trans->Consulta("select * from v_pg_curso where curso like '%"+ parametros +"%'");
}

bool ClassCurso::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_curso);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_curso (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassCurso::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		curso = datos->Rows[0]["curso"]->ToString();
		cod_tipocurso = Convert::ToInt32(datos->Rows[0]["cod_tipocurso"]->ToString());
		cod_centrocosto = Convert::ToInt32(datos->Rows[0]["cod_centrocosto"]->ToString());
	}
	else
	{
		curso = "";
		cod_tipocurso = 0;
		cod_centrocosto = 0;
	}
}
