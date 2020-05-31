#pragma once

using namespace System;
using namespace System::Data;

ref class ClassCurso
{
public:
	//Constructor
	ClassCurso(String^ cnnstring);

	//Parametros
	int cod_curso;
	String^ curso;
	int cod_tipocurso;
	int cod_centrocosto;

	//Metodos
	void Parametros(String^ Curso);
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

