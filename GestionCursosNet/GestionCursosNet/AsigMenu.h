#pragma once

#include "AsigAlumnos.h"
#include "AsigCatedraticos.h"
#include "AsigSalones.h"
#include "ExpCalificacion.h"

namespace GestionCursosNet
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de AsigMenu
	/// </summary>
	public ref class AsigMenu : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		AsigMenu(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AsigMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^  EpForm;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;

	private: Bunifu::Framework::UI::BunifuElipse^  EpCatedratico;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnAlumno;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnCatedratico;
	private: Bunifu::Framework::UI::BunifuElipse^  EpAlumno;
	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuImageButton^  btnSalon;
	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;
	private: System::Windows::Forms::Label^  label5;
	private: Bunifu::Framework::UI::BunifuImageButton^  btn_calificacion;
	private: Bunifu::Framework::UI::BunifuElipse^  EpCalificaion;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AsigMenu::typeid));
			this->EpForm = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EpCatedratico = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->btnCatedratico = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnAlumno = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EpAlumno = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnSalon = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_calificacion = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->EpCalificaion = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSalon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_calificacion))->BeginInit();
			this->SuspendLayout();
			// 
			// EpForm
			// 
			this->EpForm->ElipseRadius = 1;
			this->EpForm->TargetControl = this;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(66, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Asignaciones";
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
			this->btnCatedratico->Location = System::Drawing::Point(276, 140);
			this->btnCatedratico->Name = L"btnCatedratico";
			this->btnCatedratico->Size = System::Drawing::Size(150, 170);
			this->btnCatedratico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnCatedratico->TabIndex = 3;
			this->btnCatedratico->TabStop = false;
			this->btnCatedratico->Zoom = 5;
			this->btnCatedratico->Click += gcnew System::EventHandler(this, &AsigMenu::btnCatedratico_Click);
			// 
			// btnAlumno
			// 
			this->btnAlumno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnAlumno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.Image")));
			this->btnAlumno->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAlumno.ImageActive")));
			this->btnAlumno->Location = System::Drawing::Point(70, 140);
			this->btnAlumno->Name = L"btnAlumno";
			this->btnAlumno->Size = System::Drawing::Size(150, 170);
			this->btnAlumno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnAlumno->TabIndex = 1;
			this->btnAlumno->TabStop = false;
			this->btnAlumno->Zoom = 5;
			this->btnAlumno->Click += gcnew System::EventHandler(this, &AsigMenu::btnAlumno_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(85, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Alumnos";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(289, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Catedraticos";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EpAlumno
			// 
			this->EpAlumno->ElipseRadius = 10;
			this->EpAlumno->TargetControl = this->btnAlumno;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(497, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Salones";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSalon
			// 
			this->btnSalon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btnSalon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalon.Image")));
			this->btnSalon->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalon.ImageActive")));
			this->btnSalon->Location = System::Drawing::Point(484, 140);
			this->btnSalon->Name = L"btnSalon";
			this->btnSalon->Size = System::Drawing::Size(150, 170);
			this->btnSalon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btnSalon->TabIndex = 5;
			this->btnSalon->TabStop = false;
			this->btnSalon->Zoom = 5;
			this->btnSalon->Click += gcnew System::EventHandler(this, &AsigMenu::btnSalon_Click);
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 10;
			this->bunifuElipse1->TargetControl = this->btnSalon;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(697, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Calificacion";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_calificacion
			// 
			this->btn_calificacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->btn_calificacion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_calificacion.Image")));
			this->btn_calificacion->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_calificacion.ImageActive")));
			this->btn_calificacion->Location = System::Drawing::Point(684, 140);
			this->btn_calificacion->Name = L"btn_calificacion";
			this->btn_calificacion->Size = System::Drawing::Size(150, 170);
			this->btn_calificacion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->btn_calificacion->TabIndex = 7;
			this->btn_calificacion->TabStop = false;
			this->btn_calificacion->Zoom = 5;
			this->btn_calificacion->Click += gcnew System::EventHandler(this, &AsigMenu::btn_calificacion_Click);
			// 
			// EpCalificaion
			// 
			this->EpCalificaion->ElipseRadius = 10;
			this->EpCalificaion->TargetControl = this->btn_calificacion;
			// 
			// AsigMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1154, 641);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_calificacion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnSalon);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnCatedratico);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAlumno);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AsigMenu";
			this->Text = L"AsigMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCatedratico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAlumno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSalon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_calificacion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Botones


	private: System::Void btnAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
		AsigAlumnos^ asigAlumno = gcnew AsigAlumnos(cnnstring);
		asigAlumno->Show();
	}
	private: System::Void btnCatedratico_Click(System::Object^  sender, System::EventArgs^  e) {
		AsigCatedraticos^ asigCatedratico = gcnew AsigCatedraticos(cnnstring);
		asigCatedratico->Show();
	}
	private: System::Void btnSalon_Click(System::Object^  sender, System::EventArgs^  e) {
		AsigSalones^ asigSalon = gcnew AsigSalones(cnnstring);
		asigSalon->Show();
	}
	private: System::Void btn_calificacion_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExpCalificacion^ expCalificacion = gcnew ExpCalificacion(cnnstring);
		expCalificacion->Show();
	}
#pragma endregion





	};
}
