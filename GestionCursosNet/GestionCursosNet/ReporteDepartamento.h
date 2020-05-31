#pragma once

namespace GestionCursosNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReporteDepartamento
	/// </summary>
	public ref class ReporteDepartamento : public System::Windows::Forms::Form
	{
	public:
		ReporteDepartamento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteDepartamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuCustomDataGrid1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(135, 217);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(240, 150);
			this->bunifuCustomDataGrid1->TabIndex = 0;
			// 
			// ReporteDepartamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->bunifuCustomDataGrid1);
			this->Name = L"ReporteDepartamento";
			this->Text = L"ReporteDepartamento";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
