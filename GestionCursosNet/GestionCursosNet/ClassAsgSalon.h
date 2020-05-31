#pragma once

using namespace System;
using namespace System::Data;

ref class ClassAsgSalon
{

public:
	//Constructor
	ClassAsgSalon(String^ cnnstring);

	//Parametros
	int cod_salon_curso;
	int cod_salon;
	int cod_curso;

	//Metodos
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();
	DataTable^ Vista();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);

};

