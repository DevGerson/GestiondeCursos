#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;

ref class CConexion
{
private:
	String^ conexion = "Server=localhost; Database=colegio; Uid=root; Pwd=admin;";
	String^ SQLQuery = "";
	MySqlConnection^ cnn = gcnew MySqlConnection(conexion);;
	MySqlDataAdapter^ adp;
	MySqlCommand^ cmd;
	DataSet^ ds;
	DataTable^ dt;
public:
	CConexion();
	void Conectar();
	void Desconectar();
	void IngresarQuery(String^);
	DataTable^ QueryDataTable();
	//void QueryDataSeT();
	//void QueryCommand();
};
