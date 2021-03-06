#pragma once
#include "ClassExpCatedratico.h"
#include "FuncionesGenerales.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NuevosCatedraticos
	/// </summary>
	public ref class NuevosCatedraticos : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		NuevosCatedraticos(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~NuevosCatedraticos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_eliminar;

	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_direccion;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_nombre;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_dpi;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo;
	private: System::Windows::Forms::Label^  label1;

	protected:









	protected:





















	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NuevosCatedraticos::typeid));
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_eliminar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_direccion = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_nombre = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_dpi = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_codigo = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_eliminar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(441, 221);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 24;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(441, 183);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 25;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &NuevosCatedraticos::bunifuImageButton3_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::Transparent;
			this->btn_eliminar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_eliminar.Image")));
			this->btn_eliminar->ImageActive = nullptr;
			this->btn_eliminar->Location = System::Drawing::Point(441, 145);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(37, 30);
			this->btn_eliminar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_eliminar->TabIndex = 26;
			this->btn_eliminar->TabStop = false;
			this->btn_eliminar->Zoom = 10;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &NuevosCatedraticos::btn_eliminar_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(441, 107);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(35, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 27;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &NuevosCatedraticos::bunifuImageButton1_Click);
			// 
			// txt_direccion
			// 
			this->txt_direccion->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_direccion->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_direccion->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_direccion->BorderThickness = 1;
			this->txt_direccion->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_direccion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_direccion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_direccion->isPassword = false;
			this->txt_direccion->Location = System::Drawing::Point(66, 221);
			this->txt_direccion->Margin = System::Windows::Forms::Padding(4);
			this->txt_direccion->Name = L"txt_direccion";
			this->txt_direccion->Size = System::Drawing::Size(350, 25);
			this->txt_direccion->TabIndex = 23;
			this->txt_direccion->Text = L"Direccion";
			this->txt_direccion->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_direccion->Enter += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_direccion_Enter);
			this->txt_direccion->Leave += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_direccion_Leave);
			// 
			// txt_nombre
			// 
			this->txt_nombre->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_nombre->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nombre->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_nombre->BorderThickness = 1;
			this->txt_nombre->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nombre->isPassword = false;
			this->txt_nombre->Location = System::Drawing::Point(66, 145);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(350, 25);
			this->txt_nombre->TabIndex = 21;
			this->txt_nombre->Text = L"Nombre";
			this->txt_nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_nombre->Enter += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_nombre_Enter);
			this->txt_nombre->Leave += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_nombre_Leave);
			// 
			// txt_dpi
			// 
			this->txt_dpi->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_dpi->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_dpi->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_dpi->BorderThickness = 1;
			this->txt_dpi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_dpi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dpi->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_dpi->isPassword = false;
			this->txt_dpi->Location = System::Drawing::Point(66, 183);
			this->txt_dpi->Margin = System::Windows::Forms::Padding(4);
			this->txt_dpi->Name = L"txt_dpi";
			this->txt_dpi->Size = System::Drawing::Size(350, 25);
			this->txt_dpi->TabIndex = 22;
			this->txt_dpi->Text = L"DPI";
			this->txt_dpi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_dpi->Enter += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_dpi_Enter);
			this->txt_dpi->Leave += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_dpi_Leave);
			// 
			// txt_codigo
			// 
			this->txt_codigo->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_codigo->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_codigo->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_codigo->BorderThickness = 1;
			this->txt_codigo->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_codigo->Enabled = false;
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_codigo->isPassword = false;
			this->txt_codigo->Location = System::Drawing::Point(66, 107);
			this->txt_codigo->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(350, 25);
			this->txt_codigo->TabIndex = 19;
			this->txt_codigo->Text = L"Codigo";
			this->txt_codigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_codigo->Enter += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_codigo_Enter);
			this->txt_codigo->Leave += gcnew System::EventHandler(this, &NuevosCatedraticos::txt_codigo_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 32);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Catedratico";
			// 
			// NuevosCatedraticos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(539, 302);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->txt_direccion);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_dpi);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->label1);
			this->Name = L"NuevosCatedraticos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NuevosCatedraticos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_eliminar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Variables Globales
		FuncionesGenerales^ funcionesGenerales = gcnew FuncionesGenerales();

	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassExpCatedratico^ ExpCatedratico = gcnew ClassExpCatedratico(cnnstring);
		ExpCatedratico->Parametros(txt_nombre->Text, txt_dpi->Text, txt_direccion->Text);
		if (ExpCatedratico->Ingresar())
		{
			MessageBox::Show("Se guardo correctamente.");
			Limpiar();
		}
		else
		{
			MessageBox::Show("No se pudo guardar.");
		}
	}

	private: void Limpiar()
	{
		funcionesGenerales->LimpiarTextBox(txt_codigo, "Codigo");
		funcionesGenerales->LimpiarTextBox(txt_nombre, "Nombre");
		funcionesGenerales->LimpiarTextBox(txt_direccion, "Direccion");
		funcionesGenerales->LimpiarTextBox(txt_dpi, "DPI");
		txt_nombre->Focus();
	}
	private: System::Void txt_codigo_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_codigo, "Codigo");
	}
	private: System::Void txt_codigo_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
	}
	private: System::Void txt_nombre_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_nombre, "Nombre");
	}
	private: System::Void txt_nombre_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_nombre, "Nombre");
	}
	private: System::Void txt_dpi_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_dpi, "DPI");
	}
	private: System::Void txt_dpi_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_dpi, "DPI");
	}
	private: System::Void txt_direccion_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_direccion, "Direccion");
	}
	private: System::Void txt_direccion_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_direccion, "Direccion");
	}

	private: bool busqueda;

	private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (busqueda)
		{
			ClassExpCatedratico^ ExpCatedratico = gcnew ClassExpCatedratico(cnnstring);
			ExpCatedratico->cod_catedratico = Convert::ToInt32(txt_codigo->Text);
			ExpCatedratico->Obtener();
			txt_nombre->Text = ExpCatedratico->nombre;
			txt_direccion->Text = ExpCatedratico->direccion;
			txt_dpi->Text = ExpCatedratico->dpi;
			VerificarPlaceHolder();
		}
		else
		{
			txt_codigo->Enabled = true;
			busqueda = true;
			txt_codigo->Focus();
		}
	}

	private: void VerificarPlaceHolder()
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_nombre, "Nombre");
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_dpi, "DPI");
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_direccion, "Direccion");
	}

	private: System::Void btn_eliminar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ClassExpCatedratico^ ExpCatedratico = gcnew ClassExpCatedratico(cnnstring);
		ExpCatedratico->cod_catedratico = Convert::ToInt32(txt_codigo->Text);
		if (ExpCatedratico->Eliminar())
		{
			MessageBox::Show("Se elimino correctamente.");
			Limpiar();
		}
		else 
		{
			MessageBox::Show("No se pudo eliminar.");
		}

	}
};
}
