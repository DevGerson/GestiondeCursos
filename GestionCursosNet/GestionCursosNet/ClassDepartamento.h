#pragma once

using namespace System;
using namespace System::Data;

ref class ClassDepartamento
{
public:
	//Constructor
	ClassDepartamento(String^ cnnstring);

	//Parametros
	int cod_departamento;
	String^ departamento;

	//Metodos
	void Parametros(String^ Departamento);
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);
};

