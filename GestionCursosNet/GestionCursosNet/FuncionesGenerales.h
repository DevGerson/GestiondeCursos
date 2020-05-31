#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class FuncionesGenerales
{
public:
	FuncionesGenerales();
	void PlaceHolderTextBoxLeave(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto);
	void PlaceHolderTextBoxEnter(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto);
	void PlaceHolderComboBoxLeave(ComboBox^  ComboBoxPlaceHolder, String^ Texto);
	void PlaceHolderComboBoxEnter(ComboBox^  ComboBoxPlaceHolder, String^ Texto);
	void LimpiarTextBox(Bunifu::Framework::UI::BunifuMetroTextbox^  TextBoxPlaceHolder, String^ Texto);
};

