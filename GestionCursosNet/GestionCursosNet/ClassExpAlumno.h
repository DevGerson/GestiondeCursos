#pragma once

using namespace System;
using namespace System::Data;

ref class ClassExpAlumno
{
public:
	//Constructor
	ClassExpAlumno(String^ cnnstring);

	//Parametros
	int cod_alumno;
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

