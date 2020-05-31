#include "ClassDepartamento.h"
#include "CConexion.h"

using namespace System::Data;

ClassDepartamento::ClassDepartamento(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassDepartamento::Parametros(String ^ Departamento)
{
	departamento = Departamento;
}

bool ClassDepartamento::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + departamento + "'";
	return Trans->Proceso("CALL sp_ins_pg_departamento (" + parametros + ")");
}

bool ClassDepartamento::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_departamento);
	return Trans->Proceso("CALL sp_del_pg_departamento (" + parametros + ")");
}

bool ClassDepartamento::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_departamento) + ",'" + departamento + "'";
	return Trans->Proceso("CALL sp_upd_pg_departamento (" + parametros + ")");
}

DataTable^ ClassDepartamento::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_departamento);
	return Trans->Consulta("CALL sp_sel_pg_departamento (" + parametros + ")");
}

bool ClassDepartamento::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_departamento);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_pg_departamento (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassDepartamento::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		departamento = datos->Rows[0]["departamento"]->ToString();
	}
	else
	{
		departamento = "";
	}
}

