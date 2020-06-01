#pragma once

using namespace System;
using namespace System::Data;

ref class ClassCalificacion
{
public:
	//Constructor
	ClassCalificacion(String^ cnnstring);

	//Parametros
	int cod_calificacion;
	double calificacion;
	int cod_alumno;
	int cod_salon_curso;

	//Metodos
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();
	DataTable^ Vista();
	DataTable^ Reporte();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);
};

