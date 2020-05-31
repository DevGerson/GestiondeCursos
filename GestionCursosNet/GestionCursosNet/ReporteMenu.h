#pragma once
#include "ReporteCurso.h"
#include "ReporteTipoCurso.h"
#include "ReporteAsgAlumno.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReporteMenu
	/// </summary>
	public ref class ReporteMenu : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		ReporteMenu(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Bunifu::Framework::UI::BunifuElipse^  EpSalon;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_salon;
	private: System::Windows::Forms::Label^  label13;
	private: Bunifu::Framework::UI::BunifuElipse^  EpDepartamento;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_departamento;


	private: System::Windows::Forms::Label^  label12;

	private: Bunifu::Framework::UI::BunifuElipse^  EpCentroCosto;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_centrocosto;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuElipse^  EpTipoCurso;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_tipocurso;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_curso;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuElipse^  EpCatedratico;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnCatedratico;
	private: Bunifu::Framework::UI::BunifuElipse^  EpAlumnos;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnAlumno;
	private: Bunifu::Framework::UI::BunifuElipse^  EpForm;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuElipse^  EpCurso;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReporteMenu::typeid));
			this->EpSalon = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btn_salon = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->EpDepartamento = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btn_departamento = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->EpCentroCosto = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btn_centrocosto = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->EpTipoCurso = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btn_tipocurso = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_curso = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->EpCatedratico = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btnCatedratico = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpAlumnos = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btnAlumno = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpForm = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EpCurso = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_salon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_departamento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_centrocosto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_tipocurso))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_curso))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->BeginInit();
			this->SuspendLayout();
			// 
			// EpSalon
			// 
			this->EpSalon->ElipseRadius = 10;
			this->EpSalon->TargetControl = this->btn_salon;
			// 
			// btn_salon
			// 
			this->btn_salon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_salon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_salon.Image")));
			this->btn_salon->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_salon.ImageActive")));
			this->btn_salon->Location = System::Drawing::Point(267, 697);
			this->btn_salon->Name = L"btn_salon";
			this->btn_salon->Size = System::Drawing::Size(150, 170);
			this->btn_salon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_salon->TabIndex = 46;
			this->btn_salon->TabStop = false;
			this->btn_salon->Zoom = 5;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(280, 833);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(125, 21);
			this->label13->TabIndex = 47;
			this->label13->Text = L"Salon";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EpDepartamento
			// 
			this->EpDepartamento->ElipseRadius = 10;
			this->EpDepartamento->TargetControl = this->btn_departamento;
			// 
			// btn_departamento
			// 
			this->btn_departamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_departamento->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_departamento.Image")));
			this->btn_departamento->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_departamento.ImageActive")));
			this->btn_departamento->Location = System::Drawing::Point(470, 697);
			this->btn_departamento->Name = L"btn_departamento";
			this->btn_departamento->Size = System::Drawing::Size(150, 170);
			this->btn_departamento->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_departamento->TabIndex = 43;
			this->btn_departamento->TabStop = false;
			this->btn_departamento->Zoom = 5;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(483, 833);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 21);
			this->label12->TabIndex = 45;
			this->label12->Text = L"Departamento";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EpCentroCosto
			// 
			this->EpCentroCosto->ElipseRadius = 10;
			this->EpCentroCosto->TargetControl = this->btn_centrocosto;
			// 
			// btn_centrocosto
			// 
			this->btn_centrocosto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_centrocosto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_centrocosto.Image")));
			this->btn_centrocosto->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_centrocosto.ImageActive")));
			this->btn_centrocosto->Location = System::Drawing::Point(61, 697);
			this->btn_centrocosto->Name = L"btn_centrocosto";
			this->btn_centrocosto->Size = System::Drawing::Size(150, 170);
			this->btn_centrocosto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_centrocosto->TabIndex = 40;
			this->btn_centrocosto->TabStop = false;
			this->btn_centrocosto->Zoom = 5;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(74, 833);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 21);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Centro Costo";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EpTipoCurso
			// 
			this->EpTipoCurso->ElipseRadius = 10;
			this->EpTipoCurso->TargetControl = this->btn_tipocurso;
			// 
			// btn_tipocurso
			// 
			this->btn_tipocurso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_tipocurso->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tipocurso.Image")));
			this->btn_tipocurso->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tipocurso.ImageActive")));
			this->btn_tipocurso->Location = System::Drawing::Point(61, 437);
			this->btn_tipocurso->Name = L"btn_tipocurso";
			this->btn_tipocurso->Size = System::Drawing::Size(150, 170);
			this->btn_tipocurso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_tipocurso->TabIndex = 38;
			this->btn_tipocurso->TabStop = false;
			this->btn_tipocurso->Zoom = 5;
			this->btn_tipocurso->Click += gcnew System::EventHandler(this, &ReporteMenu::btn_tipocurso_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(56, 392);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 25);
			this->label14->TabIndex = 48;
			this->label14->Text = L"Cursos";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(74, 573);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 21);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Tipo Curso";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(280, 573);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 21);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Curso";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_curso
			// 
			this->btn_curso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_curso->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_curso.Image")));
			this->btn_curso->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_curso.ImageActive")));
			this->btn_curso->Location = System::Drawing::Point(267, 437);
			this->btn_curso->Name = L"btn_curso";
			this->btn_curso->Size = System::Drawing::Size(150, 170);
			this->btn_curso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_curso->TabIndex = 36;
			this->btn_curso->TabStop = false;
			this->btn_curso->Zoom = 5;
			this->btn_curso->Click += gcnew System::EventHandler(this, &ReporteMenu::btn_curso_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(61, 919);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(754, 123);
			this->panel1->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(56, 654);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 25);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Localizacion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(57, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 25);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Expediente";
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(61, 85);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(516, 16);
			this->bunifuSeparator1->TabIndex = 32;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// EpCatedratico
			// 
			this->EpCatedratico->ElipseRadius = 10;
			this->EpCatedratico->TargetControl = this->btnCatedratico;
			// 
			// btnCatedratico
			// 
			this->btnCatedratico->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnCatedratico->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCatedratico.Image")));
			this->btnCatedratico->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCatedratico.ImageActive")));
			this->btnCatedratico->Location = System::Drawing::Point(267, 188);
			this->btnCatedratico->Name = L"btnCatedratico";
			this->btnCatedratico->Size = System::Drawing::Size(150, 170);
			this->btnCatedratico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnCatedratico->TabIndex = 30;
			this->btnCatedratico->TabStop = false;
			this->btnCatedratico->Zoom = 5;
			// 
			// EpAlumnos
			// 
			this->EpAlumnos->ElipseRadius = 10;
			this->EpAlumnos->TargetControl = this->btnAlumno;
			// 
			// btnAlumno
			// 
			this->btnAlumno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnAlumno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.Image")));
			this->btnAlumno->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.ImageActive")));
			this->btnAlumno->Location = System::Drawing::Point(61, 188);
			this->btnAlumno->Name = L"btnAlumno";
			this->btnAlumno->Size = System::Drawing::Size(150, 170);
			this->btnAlumno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnAlumno->TabIndex = 28;
			this->btnAlumno->TabStop = false;
			this->btnAlumno->Zoom = 5;
			this->btnAlumno->Click += gcnew System::EventHandler(this, &ReporteMenu::btnAlumno_Click);
			// 
			// EpForm
			// 
			this->EpForm->ElipseRadius = 5;
			this->EpForm->TargetControl = this;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(76, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 23);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Alumnos";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(57, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 32);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Reporte";
			// 
			// EpCurso
			// 
			this->EpCurso->ElipseRadius = 10;
			this->EpCurso->TargetControl = this->btn_curso;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(280, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 21);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Catedraticos";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(280, 324);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 21);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Catedratico";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ReporteMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(897, 571);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btn_salon);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_departamento);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_centrocosto);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_tipocurso);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_curso);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->btnCatedratico);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAlumno);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReporteMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReporteMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_salon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_departamento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_centrocosto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_tipocurso))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_curso))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_curso_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ReporteCurso^ RCurso = gcnew ReporteCurso(cnnstring);
		RCurso->Show();
	}
	private: System::Void btn_tipocurso_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ReporteTipoCurso^ RTCurso = gcnew ReporteTipoCurso(cnnstring);
		RTCurso->Show();
	}
	private: System::Void btnAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
		ReporteAsgAlumno^ RAlumno = gcnew ReporteAsgAlumno(cnnstring);
		RAlumno->Show();
	}
	};
}
