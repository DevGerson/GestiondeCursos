#pragma once

using namespace System;
using namespace System::Data;


ref class ClassExpCatedratico
{
public:
	ClassExpCatedratico(String^ cnnstring);

	//Parametros
	int cod_catedratico;
	String^ nombre;
	String^ dpi;
	String^ direccion;

	//Metodos
	void Parametros(String^ Nombre, String^ Dpi, String^ Direccion);
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);

};

