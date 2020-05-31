#pragma once

using namespace System;
using namespace System::Data;

ref class ClassInstitucion
{
public:
	//Constructor
	ClassInstitucion(String^ cnnstring);

	//Parametros
	int cod_institucion;
	String^ institucion;

	//Metodos
	void Parametros(String^ Institucion);
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);
};

