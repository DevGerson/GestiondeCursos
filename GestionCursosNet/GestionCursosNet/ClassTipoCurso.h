#pragma once

using namespace System;
using namespace System::Data;

ref class ClassTipoCurso
{
public:	
	//Constructor
	ClassTipoCurso(String^ cnnstring);

	//Parametros
	int cod_tipocurso;
	String^ tipocurso;

	//Metodos
	void Parametros(String^ tipocurso);
	bool Ingresar();
	bool Eliminar();
	bool Modificar();
	bool Obtener();
	DataTable^ Buscar();
	DataTable^ Reporte();

private:
	String^ CnnString;
	void LlenarDatos(DataTable^ datos);

};

