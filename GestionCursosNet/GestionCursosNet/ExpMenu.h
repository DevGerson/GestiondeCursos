#pragma once
#include "ExpAlumno.h"
#include "NuevoCursos.h"
#include "ExpCatedratico.h"
#include "NuevosTipoCurso.h"
#include "NuevoCentroCosto.h"
#include "NuevoInstitucion.h"
#include "NuevoDepartamento.h"
#include "NuevosSalones.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ExpMenu
	/// </summary>
	public ref class ExpMenu : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		ExpMenu(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ExpMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnCatedratico;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnAlumno;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuElipse^  EpForm;

	private: Bunifu::Framework::UI::BunifuElipse^  EpAlumnos;
	private: Bunifu::Framework::UI::BunifuElipse^  EpCatedratico;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;






	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Label^  label9;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_tipocurso;

	private: System::Windows::Forms::Label^  label8;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_curso;
	private: Bunifu::Framework::UI::BunifuElipse^  EpCurso;
	private: Bunifu::Framework::UI::BunifuElipse^  EpTipoCurso;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_centrocosto;

	private: Bunifu::Framework::UI::BunifuElipse^  EpCentroCosto;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_departamento;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_institucion;
	private: Bunifu::Framework::UI::BunifuElipse^  EpInstitucion;
	private: Bunifu::Framework::UI::BunifuElipse^  EpDepartamento;
	private: System::Windows::Forms::Label^  label13;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_salon;
	private: Bunifu::Framework::UI::BunifuElipse^  EpSalon;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label4;



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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpMenu::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCatedratico = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAlumno = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EpForm = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->EpAlumnos = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->EpCatedratico = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_curso = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_tipocurso = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpCurso = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->EpTipoCurso = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_centrocosto = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpCentroCosto = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_institucion = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btn_departamento = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->EpInstitucion = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->EpDepartamento = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_salon = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpSalon = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_curso))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_tipocurso))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_centrocosto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_institucion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_departamento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_salon))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(285, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Catedraticos";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnCatedratico
			// 
			this->btnCatedratico->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnCatedratico->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCatedratico.Image")));
			this->btnCatedratico->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCatedratico.ImageActive")));
			this->btnCatedratico->Location = System::Drawing::Point(272, 188);
			this->btnCatedratico->Name = L"btnCatedratico";
			this->btnCatedratico->Size = System::Drawing::Size(150, 170);
			this->btnCatedratico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnCatedratico->TabIndex = 10;
			this->btnCatedratico->TabStop = false;
			this->btnCatedratico->Zoom = 5;
			this->btnCatedratico->Click += gcnew System::EventHandler(this, &ExpMenu::btnCatedratico_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(81, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Alumnos";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAlumno
			// 
			this->btnAlumno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnAlumno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.Image")));
			this->btnAlumno->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.ImageActive")));
			this->btnAlumno->Location = System::Drawing::Point(66, 188);
			this->btnAlumno->Name = L"btnAlumno";
			this->btnAlumno->Size = System::Drawing::Size(150, 170);
			this->btnAlumno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnAlumno->TabIndex = 8;
			this->btnAlumno->TabStop = false;
			this->btnAlumno->Zoom = 5;
			this->btnAlumno->Click += gcnew System::EventHandler(this, &ExpMenu::btnAlumno_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(62, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nuevos Ingresos";
			// 
			// EpForm
			// 
			this->EpForm->ElipseRadius = 5;
			this->EpForm->TargetControl = this;
			// 
			// EpAlumnos
			// 
			this->EpAlumnos->ElipseRadius = 10;
			this->EpAlumnos->TargetControl = this->btnAlumno;
			// 
			// EpCatedratico
			// 
			this->EpCatedratico->ElipseRadius = 10;
			this->EpCatedratico->TargetControl = this->btnCatedratico;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(66, 85);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(720, 16);
			this->bunifuSeparator1->TabIndex = 12;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(62, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Expediente";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(61, 654);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Localizacion";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(66, 1172);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(754, 123);
			this->panel1->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(285, 573);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 21);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Curso";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_curso
			// 
			this->btn_curso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_curso->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_curso.Image")));
			this->btn_curso->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_curso.ImageActive")));
			this->btn_curso->Location = System::Drawing::Point(272, 437);
			this->btn_curso->Name = L"btn_curso";
			this->btn_curso->Size = System::Drawing::Size(150, 170);
			this->btn_curso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_curso->TabIndex = 15;
			this->btn_curso->TabStop = false;
			this->btn_curso->Zoom = 5;
			this->btn_curso->Click += gcnew System::EventHandler(this, &ExpMenu::bunifuImageButton1_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(79, 573);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 21);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Tipo Curso";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_tipocurso
			// 
			this->btn_tipocurso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_tipocurso->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tipocurso.Image")));
			this->btn_tipocurso->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tipocurso.ImageActive")));
			this->btn_tipocurso->Location = System::Drawing::Point(66, 437);
			this->btn_tipocurso->Name = L"btn_tipocurso";
			this->btn_tipocurso->Size = System::Drawing::Size(150, 170);
			this->btn_tipocurso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_tipocurso->TabIndex = 17;
			this->btn_tipocurso->TabStop = false;
			this->btn_tipocurso->Zoom = 5;
			this->btn_tipocurso->Click += gcnew System::EventHandler(this, &ExpMenu::bunifuImageButton2_Click);
			// 
			// EpCurso
			// 
			this->EpCurso->ElipseRadius = 10;
			this->EpCurso->TargetControl = this->btn_curso;
			// 
			// EpTipoCurso
			// 
			this->EpTipoCurso->ElipseRadius = 10;
			this->EpTipoCurso->TargetControl = this->btn_tipocurso;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(79, 833);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 21);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Centro Costo";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_centrocosto
			// 
			this->btn_centrocosto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_centrocosto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_centrocosto.Image")));
			this->btn_centrocosto->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_centrocosto.ImageActive")));
			this->btn_centrocosto->Location = System::Drawing::Point(66, 697);
			this->btn_centrocosto->Name = L"btn_centrocosto";
			this->btn_centrocosto->Size = System::Drawing::Size(150, 170);
			this->btn_centrocosto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_centrocosto->TabIndex = 19;
			this->btn_centrocosto->TabStop = false;
			this->btn_centrocosto->Zoom = 5;
			this->btn_centrocosto->Click += gcnew System::EventHandler(this, &ExpMenu::bunifuImageButton1_Click_1);
			// 
			// EpCentroCosto
			// 
			this->EpCentroCosto->ElipseRadius = 10;
			this->EpCentroCosto->TargetControl = this->btn_centrocosto;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(79, 1097);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(125, 21);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Institucion";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_institucion
			// 
			this->btn_institucion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_institucion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_institucion.Image")));
			this->btn_institucion->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_institucion.ImageActive")));
			this->btn_institucion->Location = System::Drawing::Point(66, 961);
			this->btn_institucion->Name = L"btn_institucion";
			this->btn_institucion->Size = System::Drawing::Size(150, 170);
			this->btn_institucion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_institucion->TabIndex = 21;
			this->btn_institucion->TabStop = false;
			this->btn_institucion->Zoom = 5;
			this->btn_institucion->Click += gcnew System::EventHandler(this, &ExpMenu::btn_institucion_Click);
			// 
			// btn_departamento
			// 
			this->btn_departamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_departamento->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_departamento.Image")));
			this->btn_departamento->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_departamento.ImageActive")));
			this->btn_departamento->Location = System::Drawing::Point(475, 697);
			this->btn_departamento->Name = L"btn_departamento";
			this->btn_departamento->Size = System::Drawing::Size(150, 170);
			this->btn_departamento->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_departamento->TabIndex = 21;
			this->btn_departamento->TabStop = false;
			this->btn_departamento->Zoom = 5;
			this->btn_departamento->Click += gcnew System::EventHandler(this, &ExpMenu::btn_departamento_Click);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(488, 833);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 21);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Departamento";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EpInstitucion
			// 
			this->EpInstitucion->ElipseRadius = 10;
			this->EpInstitucion->TargetControl = this->btn_institucion;
			// 
			// EpDepartamento
			// 
			this->EpDepartamento->ElipseRadius = 10;
			this->EpDepartamento->TargetControl = this->btn_departamento;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(285, 833);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(125, 21);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Salon";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_salon
			// 
			this->btn_salon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_salon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_salon.Image")));
			this->btn_salon->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_salon.ImageActive")));
			this->btn_salon->Location = System::Drawing::Point(272, 697);
			this->btn_salon->Name = L"btn_salon";
			this->btn_salon->Size = System::Drawing::Size(150, 170);
			this->btn_salon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_salon->TabIndex = 23;
			this->btn_salon->TabStop = false;
			this->btn_salon->Zoom = 5;
			this->btn_salon->Click += gcnew System::EventHandler(this, &ExpMenu::btn_salon_Click);
			// 
			// EpSalon
			// 
			this->EpSalon->ElipseRadius = 10;
			this->EpSalon->TargetControl = this->btn_salon;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(61, 392);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 25);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Cursos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(61, 917);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 25);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Institucion";
			// 
			// ExpMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(913, 610);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btn_salon);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btn_departamento);
			this->Controls->Add(this->btn_institucion);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_centrocosto);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_tipocurso);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_curso);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnCatedratico);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAlumno);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ExpMenu";
			this->Text = L"ExpMenu";
			this->Load += gcnew System::EventHandler(this, &ExpMenu::ExpMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_curso))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_tipocurso))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_centrocosto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_institucion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_departamento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_salon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
		ExpAlumno^ expAlumno = gcnew ExpAlumno(cnnstring);
		expAlumno->Show();
	}
	private: System::Void ExpMenu_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void btnCatedratico_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ExpCatedratico^ expCatedratico = gcnew ExpCatedratico(cnnstring);
		expCatedratico->Show();
	}
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		NuevosTipoCurso^ TipoCurso = gcnew NuevosTipoCurso(cnnstring);
		TipoCurso->Show();
	}
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		NuevoCursos^ Curso = gcnew NuevoCursos(cnnstring);
		Curso->Show();
	}
	private: System::Void bunifuImageButton1_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		NuevoCentroCosto^ CentroCosto = gcnew NuevoCentroCosto(cnnstring);
		CentroCosto->Show();
	}
	private: System::Void btn_institucion_Click(System::Object^  sender, System::EventArgs^  e)
	{
		NuevoInstitucion^ Institucion = gcnew NuevoInstitucion(cnnstring);
		Institucion->Show();
	}
	private: System::Void btn_departamento_Click(System::Object^  sender, System::EventArgs^  e)
	{
		NuevoDepartamento^ Departamento = gcnew NuevoDepartamento(cnnstring);
		Departamento->Show();
	}
	private: System::Void btn_salon_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		NuevosSalones^ Salon = gcnew NuevosSalones(cnnstring);
		Salon->Show();
	}

};
}
