#include "FuncionesGenerales.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

FuncionesGenerales::FuncionesGenerales()
{
}

void FuncionesGenerales::PlaceHolderTextBoxLeave(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto)
{
	String^ texto = TextBoxPlaceHolder->Text;

	if (TextBoxPlaceHolder->Text == Texto)
	{
		TextBoxPlaceHolder->Text = Texto;
		TextBoxPlaceHolder->ForeColor = Color::Gray;
	}
	else
	{
		if (TextBoxPlaceHolder->Text == "")
		{
			TextBoxPlaceHolder->Text = Texto;
			TextBoxPlaceHolder->ForeColor = Color::Gray;
		}
		else
		{
			TextBoxPlaceHolder->Text = texto;
			TextBoxPlaceHolder->ForeColor = Color::Black;
		}
	}
}

void FuncionesGenerales::PlaceHolderTextBoxEnter(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto) 
{
	if (TextBoxPlaceHolder->Text == Texto )
	{
		TextBoxPlaceHolder->Text = "";
		TextBoxPlaceHolder->ForeColor = Color::Black;
	}
}

void FuncionesGenerales::PlaceHolderComboBoxLeave(ComboBox^  ComboBoxPlaceHolder, String^ Texto)
{
	String^ texto = ComboBoxPlaceHolder->Text;

	if (ComboBoxPlaceHolder->Text == Texto)
	{
		ComboBoxPlaceHolder->Text = Texto;
		ComboBoxPlaceHolder->ForeColor = Color::Gray;
	}
	else
	{
		if (ComboBoxPlaceHolder->Text == "")
		{
			ComboBoxPlaceHolder->Text = Texto;
			ComboBoxPlaceHolder->ForeColor = Color::Gray;
		}
		else
		{
			ComboBoxPlaceHolder->Text = texto;
			ComboBoxPlaceHolder->ForeColor = Color::Black;
		}
	}
}

void FuncionesGenerales::PlaceHolderComboBoxEnter(ComboBox^ ComboBoxPlaceHolder, String^ Texto)
{
	if (ComboBoxPlaceHolder->Text == Texto)
	{
		ComboBoxPlaceHolder->Text = "";
		ComboBoxPlaceHolder->ForeColor = Color::Black;
	}
}


void FuncionesGenerales::LimpiarTextBox(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto)
{
	TextBoxPlaceHolder->Text = Texto;
	TextBoxPlaceHolder->ForeColor = Color::Gray;
}
