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
	/// Resumen de ReporteTipoCurso
	/// </summary>
	public ref class ReporteTipoCurso : public System::Windows::Forms::Form
	{
	public: String^ cnnstring;
	public:
		ReporteTipoCurso(String^ Cnnstring)
		{
			InitializeComponent();
			cnnstring = Cnnstring;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteTipoCurso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  txt_filtro;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  gv_datos;

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
			this->txt_filtro = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gv_datos = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_filtro
			// 
			this->txt_filtro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_filtro->BorderColorFocused = System::Drawing::Color::Blue;
			this->txt_filtro->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_filtro->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txt_filtro->BorderThickness = 1;
			this->txt_filtro->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_filtro->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_filtro->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_filtro->isPassword = false;
			this->txt_filtro->Location = System::Drawing::Point(31, 67);
			this->txt_filtro->Margin = System::Windows::Forms::Padding(4);
			this->txt_filtro->Name = L"txt_filtro";
			this->txt_filtro->Size = System::Drawing::Size(728, 25);
			this->txt_filtro->TabIndex = 44;
			this->txt_filtro->Text = L"Tipo Curso";
			this->txt_filtro->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txt_filtro->Enter += gcnew System::EventHandler(this, &ReporteTipoCurso::txt_filtro_Enter);
			this->txt_filtro->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ReporteTipoCurso::txt_filtro_KeyUp);
			this->txt_filtro->Leave += gcnew System::EventHandler(this, &ReporteTipoCurso::txt_filtro_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 32);
			this->label1->TabIndex = 43;
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
			this->gv_datos->Location = System::Drawing::Point(31, 112);
			this->gv_datos->Name = L"gv_datos";
			this->gv_datos->ReadOnly = true;
			this->gv_datos->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gv_datos->RowHeadersWidth = 20;
			this->gv_datos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gv_datos->ShowCellErrors = false;
			this->gv_datos->ShowCellToolTips = false;
			this->gv_datos->ShowEditingIcon = false;
			this->gv_datos->ShowRowErrors = false;
			this->gv_datos->Size = System::Drawing::Size(728, 428);
			this->gv_datos->StandardTab = true;
			this->gv_datos->TabIndex = 42;
			// 
			// ReporteTipoCurso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->txt_filtro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gv_datos);
			this->Name = L"ReporteTipoCurso";
			this->Text = L"ReporteTipoCurso";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gv_datos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: FuncionesGenerales^ funcionesGenerales = gcnew FuncionesGenerales();
	private: System::Void txt_filtro_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (txt_filtro->Text != "Tipo Curso" || txt_filtro->Text != "")
		{
			ClassTipoCurso^ RTipoCurso = gcnew ClassTipoCurso(cnnstring);
			RTipoCurso->tipocurso = txt_filtro->Text;
			gv_datos->DataSource = RTipoCurso->Reporte();
		}
	}
	private: System::Void txt_filtro_Enter(System::Object^  sender, System::EventArgs^  e) 
	{
		funcionesGenerales->PlaceHolderTextBoxEnter(txt_filtro, "Tipo Curso");
	}
	private: System::Void txt_filtro_Leave(System::Object^  sender, System::EventArgs^  e) 
	{
		funcionesGenerales->PlaceHolderTextBoxLeave(txt_filtro, "Tipo Curso");
	}

};
}
