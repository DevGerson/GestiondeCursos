#pragma once
#include "FuncionesGenerales.h"
#include "ClassCalificacion.h"
#include "ExpAlumno.h"
#include "ClassAsgSalon.h"
#include "ClassAsgAlumno.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ExpCalificacion
	/// </summary>
	public ref class ExpCalificacion : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		ExpCalificacion(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ExpCalificacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;
	private: System::Windows::Forms::ComboBox^  cmb_curso;
	protected:

	private: System::Windows::Forms::ComboBox^  cmb_alumno;

	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_valor;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo;
	private: System::Windows::Forms::Label^  label1;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpCalificacion::typeid));
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->cmb_curso = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_alumno = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_valor = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txt_codigo = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
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
			this->gv_datos->Location = System::Drawing::Point(40, 275);
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
			this->gv_datos->TabIndex = 47;
			// 
			// cmb_curso
			// 
			this->cmb_curso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_curso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_curso->FormattingEnabled = true;
			this->cmb_curso->Location = System::Drawing::Point(40, 232);
			this->cmb_curso->Name = L"cmb_curso";
			this->cmb_curso->Size = System::Drawing::Size(346, 25);
			this->cmb_curso->TabIndex = 45;
			this->cmb_curso->Text = L"Curso";
			this->cmb_curso->Enter += gcnew System::EventHandler(this, &ExpCalificacion::cmb_curso_Enter);
			this->cmb_curso->Leave += gcnew System::EventHandler(this, &ExpCalificacion::cmb_curso_Leave);
			// 
			// cmb_alumno
			// 
			this->cmb_alumno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_alumno->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_alumno->FormattingEnabled = true;
			this->cmb_alumno->Location = System::Drawing::Point(40, 200);
			this->cmb_alumno->Name = L"cmb_alumno";
			this->cmb_alumno->Size = System::Drawing::Size(346, 25);
			this->cmb_alumno->TabIndex = 46;
			this->cmb_alumno->Text = L"Alumno";
			this->cmb_alumno->SelectedIndexChanged += gcnew System::EventHandler(this, &ExpCalificacion::cmb_alumno_SelectedIndexChanged);
			this->cmb_alumno->SelectedValueChanged += gcnew System::EventHandler(this, &ExpCalificacion::cmb_alumno_SelectedValueChanged);
			this->cmb_alumno->Enter += gcnew System::EventHandler(this, &ExpCalificacion::cmb_alumno_Enter);
			this->cmb_alumno->Leave += gcnew System::EventHandler(this, &ExpCalificacion::cmb_alumno_Leave);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(167, 88);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 41;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(124, 88);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 42;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &ExpCalificacion::bunifuImageButton3_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(81, 88);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 43;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &ExpCalificacion::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(40, 88);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(35, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 44;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &ExpCalificacion::bunifuImageButton1_Click);
			// 
			// txt_valor
			// 
			this->txt_valor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_valor->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_valor->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_valor->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_valor->BorderThickness = 1;
			this->txt_valor->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_valor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_valor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_valor->isPassword = false;
			this->txt_valor->Location = System::Drawing::Point(40, 168);
			this->txt_valor->Margin = System::Windows::Forms::Padding(4);
			this->txt_valor->Name = L"txt_valor";
			this->txt_valor->Size = System::Drawing::Size(346, 25);
			this->txt_valor->TabIndex = 40;
			this->txt_valor->Text = L"Calificacion";
			this->txt_valor->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_valor->Enter += gcnew System::EventHandler(this, &ExpCalificacion::txt_valor_Enter);
			this->txt_valor->Leave += gcnew System::EventHandler(this, &ExpCalificacion::txt_valor_Leave);
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
			this->txt_codigo->Location = System::Drawing::Point(40, 136);
			this->txt_codigo->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(346, 25);
			this->txt_codigo->TabIndex = 38;
			this->txt_codigo->Text = L"Codigo";
			this->txt_codigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_codigo->Enter += gcnew System::EventHandler(this, &ExpCalificacion::txt_codigo_Enter);
			this->txt_codigo->Leave += gcnew System::EventHandler(this, &ExpCalificacion::txt_codigo_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 32);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Calificacion";
			// 
			// ExpCalificacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(424, 590);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->cmb_curso);
			this->Controls->Add(this->cmb_alumno);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->txt_valor);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->label1);
			this->Name = L"ExpCalificacion";
			this->Text = L"ExpCalificacion";
			this->Load += gcnew System::EventHandler(this, &ExpCalificacion::ExpCalificacion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
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
	private: System::Void txt_valor_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_valor, "Calificacion");
	}
	private: System::Void txt_valor_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_valor, "Calificacion");
	}
	private: System::Void cmb_alumno_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_alumno, "Alumno");
	}
	private: System::Void cmb_alumno_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_alumno, "Alumno");
	}
	private: System::Void cmb_curso_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxEnter(cmb_curso, "Curso");
	}
	private: System::Void cmb_curso_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		funcionesGenerales->PlaceHolderComboBoxLeave(cmb_curso, "Curso");
	}
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassCalificacion^ Calificacion = gcnew ClassCalificacion(cnnstring);
		Calificacion->calificacion = Convert::ToDouble(txt_valor->Text);
		Calificacion->cod_alumno = Convert::ToInt32(cmb_alumno->SelectedValue);
		Calificacion->cod_salon_curso = Convert::ToInt32(cmb_curso->SelectedValue);
		if (Calificacion->Ingresar())
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
			ClassCalificacion^ Calificacion = gcnew ClassCalificacion(cnnstring);
			Calificacion->cod_calificacion = Convert::ToInt32(txt_codigo->Text);
			Calificacion->Obtener();
			txt_valor->Text = Convert::ToString(Calificacion->calificacion);
			cmb_alumno->SelectedValue = Convert::ToString(Calificacion->cod_alumno);
			cmb_curso->SelectedValue = Convert::ToString(Calificacion->cod_salon_curso);
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
		ClassCalificacion^ Calificacion = gcnew ClassCalificacion(cnnstring);
		Calificacion->cod_calificacion = Convert::ToInt32(txt_codigo->Text);
		if (Calificacion->Eliminar())
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
		funcionesGenerales->LimpiarTextBox(txt_valor, "Calificacion");
	}
	private: void CargarGrid()
	{
		try {
			ClassCalificacion^ Calificacion = gcnew ClassCalificacion(cnnstring);
			Calificacion->cod_alumno = Convert::ToInt32(cmb_alumno->SelectedValue);
			gv_datos->DataSource = Calificacion->Vista();
		}
		catch (InvalidCastException^ e) {
			gv_datos->DataSource = nullptr;
		}

	}
	private: void VerificarPlaceHolder()
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_codigo, "Codigo");
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_valor, "Calificacion");
	}
	private: void CargarComboAlumno()
	{
		ClassExpAlumno^ expAlumno = gcnew ClassExpAlumno(cnnstring);
		expAlumno->cod_alumno = 0;

		cmb_alumno->DataSource = expAlumno->Buscar();
		cmb_alumno->DisplayMember = "nombre";
		cmb_alumno->ValueMember = "cod_alumno";
	}
	private: void CargarComboCurso()
	{
		try {
			ClassAsgAlumno^ asgSalon = gcnew ClassAsgAlumno(cnnstring);
			asgSalon->cod_alumno = Convert::ToInt32(cmb_alumno->SelectedValue);
			cmb_curso->DataSource = asgSalon->VistaAlumno();
			cmb_curso->DisplayMember = "curso";
			cmb_curso->ValueMember = "cod_salon_curso";
		}
		catch (InvalidCastException^ e) {
			cmb_curso->DataSource = nullptr;
		}
	}

	private: System::Void ExpCalificacion_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CargarComboAlumno();
		CargarGrid();
	}
	private: System::Void cmb_alumno_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		//CargarComboCurso();
	}
	private: System::Void cmb_alumno_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e)
	{
		CargarComboCurso();
		CargarGrid();
	}
	};
}
