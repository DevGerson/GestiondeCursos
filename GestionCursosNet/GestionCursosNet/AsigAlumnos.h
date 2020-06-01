#pragma once
#include "ClassAsgAlumno.h"
#include "ClassAsgSalon.h"
#include "ClassExpAlumno.h"


namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AsigAlumnos
	/// </summary>
	public ref class AsigAlumnos : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		AsigAlumnos(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AsigAlumnos()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^  cmb_alumno;

	protected:

	private: System::Windows::Forms::ComboBox^  cmb_salon;

	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;

	protected:

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AsigAlumnos::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->cmb_alumno = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_salon = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			this->SuspendLayout();
			// 
			// cmb_alumno
			// 
			this->cmb_alumno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_alumno->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_alumno->FormattingEnabled = true;
			this->cmb_alumno->Location = System::Drawing::Point(33, 170);
			this->cmb_alumno->Name = L"cmb_alumno";
			this->cmb_alumno->Size = System::Drawing::Size(350, 25);
			this->cmb_alumno->TabIndex = 62;
			this->cmb_alumno->Text = L"Alumno";
			// 
			// cmb_salon
			// 
			this->cmb_salon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmb_salon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_salon->FormattingEnabled = true;
			this->cmb_salon->Location = System::Drawing::Point(33, 138);
			this->cmb_salon->Name = L"cmb_salon";
			this->cmb_salon->Size = System::Drawing::Size(350, 25);
			this->cmb_salon->TabIndex = 63;
			this->cmb_salon->Text = L"Salon";
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(160, 89);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 58;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(117, 89);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 59;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(74, 89);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(37, 30);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 60;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &AsigAlumnos::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(33, 89);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(35, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 61;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &AsigAlumnos::bunifuImageButton1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 32);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Asignacion Alumno";
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
			this->gv_datos->Location = System::Drawing::Point(33, 212);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->ReadOnly = true;
			this->gv_datos->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gv_datos->RowHeadersWidth = 20;
			this->gv_datos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gv_datos->ShowCellErrors = false;
			this->gv_datos->ShowCellToolTips = false;
			this->gv_datos->ShowEditingIcon = false;
			this->gv_datos->ShowRowErrors = false;
			this->gv_datos->Size = System::Drawing::Size(350, 353);
			this->gv_datos->StandardTab = true;
			this->gv_datos->TabIndex = 64;
			// 
			// AsigAlumnos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(423, 590);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->cmb_alumno);
			this->Controls->Add(this->cmb_salon);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->label1);
			this->Name = L"AsigAlumnos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Asignacion Alumnos";
			this->Load += gcnew System::EventHandler(this, &AsigAlumnos::AsigAlumnos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AsigAlumnos_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CargarComboSalon();
		CargarComboAlumno();
		CargarGrid();
	}
	private: System::Void bunifuImageButton1_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		ClassAsgAlumno^ AsgAlumno = gcnew ClassAsgAlumno(cnnstring);
		AsgAlumno->cod_salon_curso = Convert::ToInt32(cmb_salon->SelectedValue);
		AsgAlumno->cod_alumno = Convert::ToInt32(cmb_alumno->SelectedValue);
		if (AsgAlumno->Ingresar())
		{
			MessageBox::Show("Se guardo correctamente.");
			CargarGrid();
		}
		else
		{
			MessageBox::Show("No se pudo guardar.");
		}
	}
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClassAsgAlumno^ AsgAlumno = gcnew ClassAsgAlumno(cnnstring);
		AsgAlumno->cod_salon_curso = Convert::ToInt32(cmb_salon->SelectedValue);
		AsgAlumno->cod_alumno = Convert::ToInt32(cmb_alumno->SelectedValue);
		if (AsgAlumno->Eliminar())
		{
			MessageBox::Show("Se elimino correctamente.");
			CargarGrid();
		}
		else
		{
			MessageBox::Show("No se pudo eliminar.");
		}
	}
	private: void CargarComboSalon()
	{
		ClassAsgSalon^ asgSalon = gcnew ClassAsgSalon(cnnstring);
		cmb_salon->DataSource = asgSalon->Vista();
		cmb_salon->DisplayMember = "curso";
		cmb_salon->ValueMember = "cod_salon_curso";
	}
	private: void CargarComboAlumno()
	{
		ClassExpAlumno^ ExpAlumno = gcnew ClassExpAlumno(cnnstring);
		ExpAlumno->cod_alumno = 0;

		cmb_alumno->DataSource = ExpAlumno->Buscar();
		cmb_alumno->DisplayMember = "nombre";
		cmb_alumno->ValueMember = "cod_alumno";
	}
	private: void CargarGrid()
	{
		ClassAsgAlumno^ AsgAlumno = gcnew ClassAsgAlumno(cnnstring);
		gv_datos->DataSource = AsgAlumno->VistaGrid();
		//PersonalizacionGrid();
	}
	private: void PersonalizacionGrid()
	{
		this->gv_datos->Columns[0]->HeaderText = "Salon - Curso";
		this->gv_datos->Columns[1]->HeaderText = "Alumno";
	}

	};
}
