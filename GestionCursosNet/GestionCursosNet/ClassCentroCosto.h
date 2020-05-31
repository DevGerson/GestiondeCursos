#pragma once

using namespace System;
using namespace System::Data;

ref class ClassCentroCosto
{
public:
	//Constructor
	ClassCentroCosto(String^ cnnstring);

	//Parametros
	int cod_centrocosto;
	String^ centrocosto;
	int cod_departamento;

	//Metodos
	void Parametros(String^ tipocurso);
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

