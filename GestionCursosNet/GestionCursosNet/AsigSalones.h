#pragma once
#include "FuncionesGenerales.h"
#include "ClassAsgSalon.h"
#include "ClassSalon.h"
#include "ClassCurso.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AsigSalones
	/// </summary>
	public ref class AsigSalones : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		AsigSalones(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AsigSalones()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^  cmb_curso;
	private: System::Windows::Forms::ComboBox^  cmb_salon;
	protected:


	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AsigSalones::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->cmb_curso = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_salon = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_codigo = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			this->SuspendLayout();
			// 
			// cmb_curso
			// 
			this->cmb_curso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_curso->FormattingEnabled = true;
			this->cmb_curso->Location = System::Drawing::Point(36, 201);
			this->cmb_curso->Name = L"cmb_curso";
			this->cmb_curso->Size = System::Drawing::Size(350, 25);
			this->cmb_curso->TabIndex = 44;
			this->cmb_curso->Text = L"Curso";
			this->cmb_curso->Enter += gcnew System::EventHandler(this, &AsigSalones::cmb_centrocosto_Enter);
			this->cmb_curso->Leave += gcnew System::EventHandler(this, &AsigSalones::cmb_centrocosto_Leave);
			// 
			// cmb_salon
			// 
			this->cmb_salon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_salon->FormattingEnabled = true;
			this->cmb_salon->Location = System::Drawing::Point(36, 169);
			this->cmb_salon->Name = L"cmb_salon";
			this->cmb_salon->Size = System::Drawing::Size(350, 25);
			this->cmb_salon->TabIndex = 45;
			this->cmb_salon->Text = L"Salon";
			this->cmb_salon->Enter += gcnew System::EventHandler(this, &AsigSalones::cmb_tipocurso_Enter);
			this->cmb_salon->Leave += gcnew System::EventHandler(this, &AsigSalones::cmb_tipocurso_Leave);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(163, 88);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 40;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(120, 88);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 41;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &AsigSalones::bunifuImageButton3_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(77, 88);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 42;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &AsigSalones::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(36, 88);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(35, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 43;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &AsigSalones::bunifuImageButton1_Click);
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
			this->txt_codigo->Location = System::Drawing::Point(36, 136);
			this->txt_codigo->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(350, 25);
			this->txt_codigo->TabIndex = 37;
			this->txt_codigo->Text = L"Codigo";
			this->txt_codigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_codigo->Enter += gcnew System::EventHandler(this, &AsigSalones::txt_codigo_Enter);
			this->txt_codigo->Leave += gcnew System::EventHandler(this, &AsigSalones::txt_codigo_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 32);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Asignacion Salon";
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
			this->gv_datos->Location = System::Drawing::Point(36, 242);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->ReadOnly = true;
			this->gv_datos->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gv_datos->RowHeadersWidth = 20;
			this->gv_datos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gv_datos->ShowCellErrors = false;
			this->gv_datos->ShowCellToolTips = false;
			this->gv_datos->ShowEditingIcon = false;
			this->gv_datos->ShowRowErrors = false;
			this->gv_datos->Size = System::Drawing::Size(350, 320);
			this->gv_datos->StandardTab = true;
			this->gv_datos->TabIndex = 56;
			// 
			// AsigSalones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(425, 593);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->cmb_curso);
			this->Controls->Add(this->cmb_salon);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->label1);
			this->Name = L"AsigSalones";
			this->Text = L"AsigSalones";
			this->Load += gcnew System::EventHandler(this, &AsigSalones::AsigSalones_Load);
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

	private: System::Void txt_codigo_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_codigo, "Codigo");
	}
	private: System::Void txt_codigo_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
	}
	private: System::Void cmb_tipocurso_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_salon, "Salon");
	}
	private: System::Void cmb_tipocurso_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_salon, "Salon");
	}
	private: System::Void cmb_centrocosto_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_curso, "Curso");
	}
	private: System::Void cmb_centrocosto_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_curso, "Curso");
	}
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassAsgSalon^ AsgSalon = gcnew ClassAsgSalon(cnnstring);
		AsgSalon->cod_salon = Convert::ToInt32(cmb_salon->SelectedValue);
		AsgSalon->cod_curso = Convert::ToInt32(cmb_curso->SelectedValue);
		if (AsgSalon->Ingresar())
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
			ClassAsgSalon^ AsgSalon = gcnew ClassAsgSalon(cnnstring);
			AsgSalon->cod_salon_curso = Convert::ToInt32(txt_codigo->Text);
			AsgSalon->Obtener();
			cmb_salon->SelectedValue = AsgSalon->cod_salon;
			cmb_curso->SelectedValue = AsgSalon->cod_curso;
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
		ClassAsgSalon^ AsgSalon = gcnew ClassAsgSalon(cnnstring);
		AsgSalon->cod_salon_curso = Convert::ToInt32(txt_codigo->Text);
		if (AsgSalon->Eliminar())
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
	}
	private: void CargarGrid()
	{
		ClassAsgSalon^ AsgSalon = gcnew ClassAsgSalon(cnnstring);
		AsgSalon->cod_salon_curso = 0;
		gv_datos->DataSource = AsgSalon->Vista();
	}
	private: void VerificarPlaceHolder()
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
	}
	private: void CargarComboSalon()
	{
		ClassSalon^ Salon = gcnew ClassSalon(cnnstring);
		Salon->cod_salon = 0;

		cmb_salon->DataSource = Salon->Buscar();
		cmb_salon->DisplayMember = "salon";
		cmb_salon->ValueMember = "cod_salon";
	}
	private: void CargarComboCurso()
	{
		ClassCurso^ Curso = gcnew ClassCurso(cnnstring);
		Curso->cod_curso = 0;

		cmb_curso->DataSource = Curso->Buscar();
		cmb_curso->DisplayMember = "curso";
		cmb_curso->ValueMember = "cod_curso";
	}


	private: System::Void AsigSalones_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CargarGrid();
		CargarComboCurso();
		CargarComboSalon();
	}
	private: void PersonalizacionGrid()
	{
		this->gv_datos->Columns[0]->HeaderText = "Codigo";
		this->gv_datos->Columns[1]->HeaderText = "Salon";
		this->gv_datos->Columns[2]->HeaderText = "Curso";
	}
	};
}
