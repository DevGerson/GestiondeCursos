#pragma once

using namespace System;
using namespace System::Data;

ref class ClassAsgAlumno
{

public:
	//Constructor
	ClassAsgAlumno(String^ cnnstring);

	//Parametros
	int cod_salon_curso;
	int cod_alumno;

	//Metodos
	bool Ingresar();
	bool Eliminar();
	bool Obtener();
	DataTable^ Buscar();
	DataTable^ Vista();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);

};

