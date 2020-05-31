#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Data;
using namespace System::Security;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;

ref class CConexion
{
private:
	//String^ conexion = "Server=localhost; Database=colegio; Uid=root; Pwd=admin;";
	//MySqlConnection^ cnn = gcnew MySqlConnection(conexion);
	//DataSet^ ds;
	String^ conexion;
	MySqlDataAdapter^ adp;
	MySqlConnection^ cnn;
	MySqlCommand^ cmd;
	DataTable^ dt;
public:	
	CConexion(String^ cnnstring);
	bool Proceso(String^ Consulta);
	DataTable^ Consulta(String^ Consulta);
};
