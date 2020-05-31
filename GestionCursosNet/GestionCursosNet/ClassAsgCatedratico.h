#pragma once

using namespace System;
using namespace System::Data;

ref class ClassAsgCatedratico
{
public:
	//Constructor
	ClassAsgCatedratico(String^ cnnstring);

	//Parametros
	int cod_salon_curso;
	int cod_catedratico;

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

