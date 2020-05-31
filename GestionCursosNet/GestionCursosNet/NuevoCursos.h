#pragma once
#include "FuncionesGenerales.h"
#include "ClassCurso.h"
#include "ClassTipoCurso.h"
#include "ClassCentroCosto.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NuevoCursos
	/// </summary>
	public ref class NuevoCursos : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		NuevoCursos(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NuevoCursos()
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
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_nombre;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo;
	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::ComboBox^  cmb_tipocurso;
	private: System::Windows::Forms::ComboBox^  cmb_centrocosto;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;

	protected:











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NuevoCursos::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_nombre = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_codigo = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmb_tipocurso = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_centrocosto = (gcnew System::Windows::Forms::ComboBox());
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(165, 88);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 31;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(122, 88);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 32;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &NuevoCursos::bunifuImageButton3_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(79, 88);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 33;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &NuevoCursos::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(38, 88);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(35, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 34;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &NuevoCursos::bunifuImageButton1_Click);
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
			this->txt_nombre->Location = System::Drawing::Point(38, 168);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(346, 25);
			this->txt_nombre->TabIndex = 30;
			this->txt_nombre->Text = L"Nombre";
			this->txt_nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_nombre->Enter += gcnew System::EventHandler(this, &NuevoCursos::txt_nombre_Enter);
			this->txt_nombre->Leave += gcnew System::EventHandler(this, &NuevoCursos::txt_nombre_Leave);
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
			this->txt_codigo->Location = System::Drawing::Point(38, 136);
			this->txt_codigo->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(346, 25);
			this->txt_codigo->TabIndex = 28;
			this->txt_codigo->Text = L"Codigo";
			this->txt_codigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_codigo->Enter += gcnew System::EventHandler(this, &NuevoCursos::txt_codigo_Enter);
			this->txt_codigo->Leave += gcnew System::EventHandler(this, &NuevoCursos::txt_codigo_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 32);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Curso";
			// 
			// cmb_tipocurso
			// 
			this->cmb_tipocurso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_tipocurso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_tipocurso->FormattingEnabled = true;
			this->cmb_tipocurso->Location = System::Drawing::Point(38, 200);
			this->cmb_tipocurso->Name = L"cmb_tipocurso";
			this->cmb_tipocurso->Size = System::Drawing::Size(346, 25);
			this->cmb_tipocurso->TabIndex = 35;
			this->cmb_tipocurso->Text = L"Tipo Curso";
			this->cmb_tipocurso->Enter += gcnew System::EventHandler(this, &NuevoCursos::cmb_tipocurso_Enter);
			this->cmb_tipocurso->Leave += gcnew System::EventHandler(this, &NuevoCursos::cmb_tipocurso_Leave);
			// 
			// cmb_centrocosto
			// 
			this->cmb_centrocosto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_centrocosto->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_centrocosto->FormattingEnabled = true;
			this->cmb_centrocosto->Location = System::Drawing::Point(38, 232);
			this->cmb_centrocosto->Name = L"cmb_centrocosto";
			this->cmb_centrocosto->Size = System::Drawing::Size(346, 25);
			this->cmb_centrocosto->TabIndex = 35;
			this->cmb_centrocosto->Text = L"Centro Costo";
			this->cmb_centrocosto->Enter += gcnew System::EventHandler(this, &NuevoCursos::cmb_centrocosto_Enter);
			this->cmb_centrocosto->Leave += gcnew System::EventHandler(this, &NuevoCursos::cmb_centrocosto_Leave);
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
			this->gv_datos->Location = System::Drawing::Point(38, 275);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->ReadOnly = true;
			this->gv_datos->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gv_datos->RowHeadersWidth = 20;
			this->gv_datos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gv_datos->ShowCellErrors = false;
			this->gv_datos->ShowCellToolTips = false;
			this->gv_datos->ShowEditingIcon = false;
			this->gv_datos->ShowRowErrors = false;
			this->gv_datos->Size = System::Drawing::Size(346, 288);
			this->gv_datos->StandardTab = true;
			this->gv_datos->TabIndex = 37;
			// 
			// NuevoCursos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(424, 590);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->cmb_centrocosto);
			this->Controls->Add(this->cmb_tipocurso);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->label1);
			this->Name = L"NuevoCursos";
			this->Text = L"NuevoCursos";
			this->Load += gcnew System::EventHandler(this, &NuevoCursos::NuevoCursos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: FuncionesGenerales^ funcionesGenerales = gcnew FuncionesGenerales();

	private: System::Void NuevoCursos_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CargarComboTipoCurso();
		CargarComboCentroCosto();
		CargarGrid();
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
	private: System::Void cmb_tipocurso_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_tipocurso, "TipoCurso");
	}
	private: System::Void cmb_tipocurso_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_tipocurso, "TipoCurso");
	}
	private: System::Void cmb_centrocosto_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_centrocosto, "Centro Costo");
	}
	private: System::Void cmb_centrocosto_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_centrocosto, "Centro Costo");
	}
	private: void CargarComboTipoCurso()
	{
		ClassTipoCurso^ TipoCurso = gcnew ClassTipoCurso(cnnstring);
		TipoCurso->cod_tipocurso = 0;

		cmb_tipocurso->DataSource = TipoCurso->Buscar();
		cmb_tipocurso->DisplayMember = "tipocurso";
		cmb_tipocurso->ValueMember = "cod_tipocurso";
	}
	private: void CargarComboCentroCosto()
	{
		ClassCentroCosto^ Centrocosto = gcnew ClassCentroCosto(cnnstring);
		Centrocosto->cod_centrocosto = 0;

		cmb_centrocosto->DataSource = Centrocosto->Buscar();
		cmb_centrocosto->DisplayMember = "centrocosto";
		cmb_centrocosto->ValueMember = "cod_centrocosto";
	}

	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassCurso^ Curso = gcnew ClassCurso(cnnstring);
		Curso->curso = txt_nombre->Text;
		Curso->cod_tipocurso = Convert::ToInt32(cmb_tipocurso->SelectedValue);
		Curso->cod_centrocosto = Convert::ToInt32(cmb_centrocosto->SelectedValue);
		if (Curso->Ingresar())
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
	private: bool busqueda;
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (busqueda)
		{
			ClassCurso^ Curso = gcnew ClassCurso(cnnstring);
			Curso->cod_curso = Convert::ToInt32(txt_codigo->Text);
			Curso->Obtener();
			txt_nombre->Text = Convert::ToString(Curso->curso);
			cmb_tipocurso->SelectedValue = Curso->cod_tipocurso;
			cmb_centrocosto->SelectedValue = Curso->cod_centrocosto;
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
	private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassCurso^ Curso = gcnew ClassCurso(cnnstring);
		Curso->cod_curso = Convert::ToInt32(txt_codigo->Text);
		if (Curso->Eliminar())
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
	private: void Limpiar()
	{
		funcionesGenerales->LimpiarTextBox(txt_codigo, "Codigo");
		funcionesGenerales->LimpiarTextBox(txt_nombre, "Nombre");
	}
	private: void CargarGrid()
	{
		ClassCurso^ Curso = gcnew ClassCurso(cnnstring);
		Curso->cod_curso = 0;
		gv_datos->DataSource = Curso->Vista();
		PersonalizacionGrid();
	}
	private: void VerificarPlaceHolder()
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_nombre, "Nombre");
	}

	private: void PersonalizacionGrid()
	{
		this->gv_datos->Columns[0]->HeaderText = "Codigo";
		this->gv_datos->Columns[0]->Width = 100;

		this->gv_datos->Columns[1]->HeaderText = "Curso";

		this->gv_datos->Columns[2]->HeaderText = "Tipo Curso";

		this->gv_datos->Columns[3]->HeaderText = "Centro Costo";
	}

	};
}
