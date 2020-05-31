#pragma once
#include "NuevosCatedraticos.h"
#include "ClassExpCatedratico.h"

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ExpCatedratico
	/// </summary>
	public ref class ExpCatedratico : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		ExpCatedratico(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ExpCatedratico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  gv_datos;
	protected:

	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_codigo_alumno;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpCatedratico::typeid));
			this->gv_datos = (gcnew System::Windows::Forms::DataGridView());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txt_codigo_alumno = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			this->SuspendLayout();
			// 
			// gv_datos
			// 
			this->gv_datos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gv_datos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gv_datos->Location = System::Drawing::Point(36, 123);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->Size = System::Drawing::Size(813, 370);
			this->gv_datos->TabIndex = 30;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.ImageActive")));
			this->bunifuImageButton1->Location = System::Drawing::Point(317, 76);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(30, 30);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 28;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &ExpCatedratico::bunifuImageButton1_Click);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(280, 76);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(30, 30);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 29;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 20;
			// 
			// txt_codigo_alumno
			// 
			this->txt_codigo_alumno->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_codigo_alumno->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_codigo_alumno->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_codigo_alumno->BorderThickness = 1;
			this->txt_codigo_alumno->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_codigo_alumno->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo_alumno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_codigo_alumno->isPassword = false;
			this->txt_codigo_alumno->Location = System::Drawing::Point(36, 79);
			this->txt_codigo_alumno->Margin = System::Windows::Forms::Padding(4);
			this->txt_codigo_alumno->Name = L"txt_codigo_alumno";
			this->txt_codigo_alumno->Size = System::Drawing::Size(233, 25);
			this->txt_codigo_alumno->TabIndex = 26;
			this->txt_codigo_alumno->Text = L"Nombre";
			this->txt_codigo_alumno->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 32);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Catedratico";
			// 
			// ExpCatedratico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(891, 531);
			this->Controls->Add(this->gv_datos);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->txt_codigo_alumno);
			this->Controls->Add(this->label1);
			this->Name = L"ExpCatedratico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Expediente Catedratico";
			this->Load += gcnew System::EventHandler(this, &ExpCatedratico::ExpCatedratico_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		NuevosCatedraticos^ NuevoCatedratico = gcnew NuevosCatedraticos(cnnstring);
		NuevoCatedratico->Show();
	}
	private: System::Void ExpCatedratico_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		ClassExpCatedratico^ ExpCatedratico = gcnew ClassExpCatedratico(cnnstring);
		ExpCatedratico->cod_catedratico = 0;
		gv_datos->DataSource = ExpCatedratico->Buscar();
	}
};
}
