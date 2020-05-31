#include "CadenaConexion.h"
#using<system.dll>

using namespace System;
using namespace System::IO;


CadenaConexion::CadenaConexion()
{
}

String^ CadenaConexion::cnnstring()
{
	String^ fileName = "cnnstring.txt";
	String^ cnnstring;

	try
	{
		StreamReader^ din = File::OpenText(fileName);
		String^ str;

		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			cnnstring = cnnstring + str;
			//Console::WriteLine("line {0}: {1}", count, str);
		}
	}
	catch (Exception^ e)
	{
		/*if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("file '{0}' not found", fileName);
		else
			Console::WriteLine("problem reading file '{0}'", fileName);*/
	}

	return cnnstring;
}