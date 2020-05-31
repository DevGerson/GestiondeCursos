#pragma once
#include "FuncionesGenerales.h"
#include "ClassTipoCurso.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NuevosTipoCurso
	/// </summary>
	public ref class NuevosTipoCurso : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		NuevosTipoCurso(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NuevosTipoCurso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_guardar;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_nombre;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;



	protected:








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NuevosTipoCurso::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_guardar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_nombre = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_codigo = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_guardar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(159, 87);
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
			this->bunifuImageButton3->Location = System::Drawing::Point(73, 87);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 25;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &NuevosTipoCurso::bunifuImageButton3_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(115, 87);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 26;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &NuevosTipoCurso::bunifuImageButton2_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::Transparent;
			this->btn_guardar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_guardar.Image")));
			this->btn_guardar->ImageActive = nullptr;
			this->btn_guardar->Location = System::Drawing::Point(32, 87);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(35, 30);
			this->btn_guardar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_guardar->TabIndex = 27;
			this->btn_guardar->TabStop = false;
			this->btn_guardar->Zoom = 10;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &NuevosTipoCurso::bunifuImageButton1_Click);
			// 
			// txt_nombre
			// 
			this->txt_nombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->txt_nombre->Location = System::Drawing::Point(32, 168);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(360, 25);
			this->txt_nombre->TabIndex = 21;
			this->txt_nombre->Text = L"Nombre";
			this->txt_nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_nombre->Enter += gcnew System::EventHandler(this, &NuevosTipoCurso::txt_nombre_Enter);
			this->txt_nombre->Leave += gcnew System::EventHandler(this, &NuevosTipoCurso::txt_nombre_Leave);
			// 
			// txt_codigo
			// 
			this->txt_codigo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->txt_codigo->Location = System::Drawing::Point(32, 135);
			this->txt_codigo->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(360, 25);
			this->txt_codigo->TabIndex = 19;
			this->txt_codigo->Text = L"Codigo";
			this->txt_codigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_codigo->Enter += gcnew System::EventHandler(this, &NuevosTipoCurso::txt_codigo_Enter);
			this->txt_codigo->Leave += gcnew System::EventHandler(this, &NuevosTipoCurso::txt_codigo_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 32);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Tipo Curso";
			// 
			// gv_datos
			// 
			this->gv_datos->AllowUserToAddRows = false;
			this->gv_datos->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->gv_datos->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->gv_datos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gv_datos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->gv_datos->BackgroundColor = System::Drawing::Color::White;
			this->gv_datos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gv_datos->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->gv_datos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->gv_datos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gv_datos->DoubleBuffered = true;
			this->gv_datos->EnableHeadersVisualStyles = false;
			this->gv_datos->HeaderBgColor = System::Drawing::Color::Gray;
			this->gv_datos->HeaderForeColor = System::Drawing::Color::White;
			this->gv_datos->Location = System::Drawing::Point(32, 210);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->ReadOnly = true;
			this->gv_datos->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gv_datos->RowHeadersWidth = 20;
			this->gv_datos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gv_datos->ShowCellErrors = false;
			this->gv_datos->ShowCellToolTips = false;
			this->gv_datos->ShowEditingIcon = false;
			this->gv_datos->ShowRowErrors = false;
			this->gv_datos->Size = System::Drawing::Size(360, 345);
			this->gv_datos->StandardTab = true;
			this->gv_datos->TabIndex = 38;
			// 
			// NuevosTipoCurso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(424, 583);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->label1);
			this->Name = L"NuevosTipoCurso";
			this->Text = L"NuevosTipoCurso";
			this->Load += gcnew System::EventHandler(this, &NuevosTipoCurso::NuevosTipoCurso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_guardar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: FuncionesGenerales^ funcionesGenerales = gcnew FuncionesGenerales();

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
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassTipoCurso^ TipoCurso = gcnew ClassTipoCurso(cnnstring);
		TipoCurso->tipocurso = txt_nombre->Text;
		if (TipoCurso->Ingresar())
		{
			MessageBox::Show("Se guardo correctamente.");
			Limpiar();
			CargarGrid();
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
	}
	private: void CargarGrid()
	{
		ClassTipoCurso^ TipoCurso = gcnew ClassTipoCurso(cnnstring);
		TipoCurso->cod_tipocurso = 0;
		gv_datos->DataSource = TipoCurso->Buscar();
		PersonalizacionGrid();
	}

	private: System::Void NuevosTipoCurso_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CargarGrid();
	}

	private: bool busqueda;

	private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (busqueda)
		{
			ClassTipoCurso^ TipoCurso = gcnew ClassTipoCurso(cnnstring);
			TipoCurso->cod_tipocurso = Convert::ToInt32(txt_codigo->Text);
			TipoCurso->Obtener();
			txt_nombre->Text = TipoCurso->tipocurso;
			VerificarPlaceHolder();
			busqueda = false;
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
	}
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassTipoCurso^ TipoCurso = gcnew ClassTipoCurso(cnnstring);
		TipoCurso->cod_tipocurso = Convert::ToInt32(txt_codigo->Text);
		if (TipoCurso->Eliminar())
		{
			MessageBox::Show("Se elimino correctamente.");
			Limpiar();
			CargarGrid();
		}
		else
		{
			MessageBox::Show("No se pudo eliminar.");
		}
	}
	private: void PersonalizacionGrid()
	{
		this->gv_datos->Columns[0]->HeaderText = "Codigo";
		this->gv_datos->Columns[0]->Width = 50;

		this->gv_datos->Columns[1]->HeaderText = "Tipo Curso";

	}

	};
}
