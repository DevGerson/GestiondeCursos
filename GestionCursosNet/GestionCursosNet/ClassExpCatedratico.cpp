#include "ClassExpCatedratico.h"
#include "CConexion.h"

ClassExpCatedratico::ClassExpCatedratico(String^ cnnstring)
{
	CnnString = cnnstring;
}

void ClassExpCatedratico::Parametros(String ^ Nombre, String ^ Dpi, String^ Direccion)
{
	nombre = Nombre;
	dpi = Dpi;
	direccion = Direccion;
}

bool ClassExpCatedratico::Ingresar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = "'" + nombre + "'," + dpi + ",'" + direccion + "'";
	return Trans->Proceso("CALL sp_ins_exp_catedratico (" + parametros + ")");
}

bool ClassExpCatedratico::Eliminar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_catedratico);
	return Trans->Proceso("CALL sp_del_exp_catedratico (" + parametros + ")");
}

bool ClassExpCatedratico::Modificar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_catedratico) + ",'" + nombre + "'," + dpi + ",'" + direccion + "'";
	return Trans->Proceso("CALL sp_upd_exp_catedratico (" + parametros + ")");
}

DataTable^ ClassExpCatedratico::Buscar()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_catedratico);
	return Trans->Consulta("CALL sp_sel_exp_catedratico (" + parametros + ")");
}

bool ClassExpCatedratico::Obtener()
{
	CConexion^ Trans = gcnew CConexion(CnnString);
	String^ parametros = Convert::ToString(cod_catedratico);
	DataTable^ dt = gcnew DataTable();
	dt = Trans->Consulta("CALL sp_sel_exp_catedratico (" + parametros + ")");
	LlenarDatos(dt);
	return true;
}

void ClassExpCatedratico::LlenarDatos(DataTable^ datos)
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
