#include "ClassAsgSalon.h"
#include "CConexion.h"

using namespace System::Data;

ClassAsgSalon::ClassAsgSalon(String^ cnnstring)
{
	CnnString = cnnstring;
}

bool ClassAsgSalon::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon) + "," + Convert::ToString(cod_curso);
	return Trans->Proceso("CALL sp_ins_asg_salon_curso (" + parametros + ")");
}

bool ClassAsgSalon::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso);
	return Trans->Proceso("CALL sp_del_asg_salon_curso (" + parametros + ")");
}

bool ClassAsgSalon::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso) + "," + Convert::ToString(cod_salon) + ", " + Convert::ToString(cod_curso);
	return Trans->Proceso("CALL sp_upd_asg_salon_curso (" + parametros + ")");
}

DataTable^ ClassAsgSalon::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso);
	return Trans->Consulta("CALL sp_sel_asg_salon_curso (" + parametros + ")");
}

DataTable^ ClassAsgSalon::Vista()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso);
	return Trans->Consulta("SELECT * FROM v_asg_salon_curso");
}

bool ClassAsgSalon::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_salon_curso);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_asg_salon_curso (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassAsgSalon::LlenarDatos(DataTable^ datos)
{
	if (datos->Rows->Count > 0)
	{
		cod_salon = Convert::ToInt32(datos->Rows[0]["cod_salon"]->ToString());
		cod_curso = Convert::ToInt32(datos->Rows[0]["cod_curso"]->ToString());
	}
	else
	{
		cod_salon = 0;
		cod_curso = 0;
	}
}
