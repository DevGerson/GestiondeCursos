#include "ClassTipoCurso.h"
#include "CConexion.h"

using namespace System::Data;

ClassTipoCurso::ClassTipoCurso(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassTipoCurso::Parametros(String ^ TipoCurso)
{
	tipocurso = TipoCurso;
}

bool ClassTipoCurso::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + tipocurso + "'";
	return Trans->Proceso("CALL sp_ins_pg_tipocurso (" + parametros + ")");
}

bool ClassTipoCurso::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_tipocurso);
	return Trans->Proceso("CALL sp_del_pg_tipocurso (" + parametros + ")");
}

bool ClassTipoCurso::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_tipocurso) + ",'" + tipocurso + "'";
	return Trans->Proceso("CALL sp_upd_pg_tipocurso (" + parametros + ")");
}

DataTable^ ClassTipoCurso::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_tipocurso);
	return Trans->Consulta("CALL sp_sel_pg_tipocurso (" + parametros + ")");
}

DataTable^ ClassTipoCurso::Reporte()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = tipocurso;
	return Trans->Consulta("SELECT * FROM v_pg_tipocurso WHERE tipocurso like '%"+ parametros +"%'");
}

bool ClassTipoCurso::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_tipocurso);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_tipocurso (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassTipoCurso::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		tipocurso = datos->Rows[0]["tipocurso"]->ToString();
	}
	else
	{
		tipocurso = "";
	}
}
