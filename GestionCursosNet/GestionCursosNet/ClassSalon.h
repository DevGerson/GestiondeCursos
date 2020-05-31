#pragma once

using namespace System;
using namespace System::Data;

ref class ClassSalon
{
public:
	//Constructor
	ClassSalon(String^ cnnstring);

	//Parametros
	int cod_salon;
	String^ salon;
	int cod_centrocosto;

	//Metodos
	void Parametros(String^ Salon, int Cod_centrocosto);
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

