#pragma once

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AgregarCliente : public System::Windows::Forms::Form
	{
	public:
		AgregarCliente(void)
		{
			InitializeComponent();
		}

	protected:
		~AgregarCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelAgregarCliente;
	private: System::Windows::Forms::Button^ btnGuardar_AgregarCliente;

	private: System::Windows::Forms::Button^ btnCancelar_AgregarCliente;
	private: System::Windows::Forms::ComboBox^ comboTipoDocumento_AC;
	private: System::Windows::Forms::TextBox^ textEmail_AC;




	private: System::Windows::Forms::TextBox^ textDireccion_AC;

	private: System::Windows::Forms::TextBox^ textApellidos_AC;

	private: System::Windows::Forms::TextBox^ textNombres_AC;

	private: System::Windows::Forms::TextBox^ textNumDocumento_AC;
	private: System::Windows::Forms::Label^ label6_AC;


	private: System::Windows::Forms::Label^ label5_AC;

	private: System::Windows::Forms::Label^ label4_AC;

	private: System::Windows::Forms::Label^ label3_AC;

	private: System::Windows::Forms::Label^ label2_AC;

	private: System::Windows::Forms::Label^ label1_AC;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panelAgregarCliente = (gcnew System::Windows::Forms::Panel());
			this->label1_AC = (gcnew System::Windows::Forms::Label());
			this->label2_AC = (gcnew System::Windows::Forms::Label());
			this->label3_AC = (gcnew System::Windows::Forms::Label());
			this->label4_AC = (gcnew System::Windows::Forms::Label());
			this->label5_AC = (gcnew System::Windows::Forms::Label());
			this->label6_AC = (gcnew System::Windows::Forms::Label());
			this->textNumDocumento_AC = (gcnew System::Windows::Forms::TextBox());
			this->textNombres_AC = (gcnew System::Windows::Forms::TextBox());
			this->textApellidos_AC = (gcnew System::Windows::Forms::TextBox());
			this->textDireccion_AC = (gcnew System::Windows::Forms::TextBox());
			this->textEmail_AC = (gcnew System::Windows::Forms::TextBox());
			this->comboTipoDocumento_AC = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancelar_AgregarCliente = (gcnew System::Windows::Forms::Button());
			this->btnGuardar_AgregarCliente = (gcnew System::Windows::Forms::Button());
			
			this->panelAgregarCliente->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAgregarCliente
			// 
			this->panelAgregarCliente->Controls->Add(this->btnGuardar_AgregarCliente);
			this->panelAgregarCliente->Controls->Add(this->btnCancelar_AgregarCliente);
			this->panelAgregarCliente->Controls->Add(this->comboTipoDocumento_AC);
			this->panelAgregarCliente->Controls->Add(this->textEmail_AC);
			this->panelAgregarCliente->Controls->Add(this->textDireccion_AC);
			this->panelAgregarCliente->Controls->Add(this->textApellidos_AC);
			this->panelAgregarCliente->Controls->Add(this->textNombres_AC);
			this->panelAgregarCliente->Controls->Add(this->textNumDocumento_AC);
			this->panelAgregarCliente->Controls->Add(this->label6_AC);
			this->panelAgregarCliente->Controls->Add(this->label5_AC);
			this->panelAgregarCliente->Controls->Add(this->label4_AC);
			this->panelAgregarCliente->Controls->Add(this->label3_AC);
			this->panelAgregarCliente->Controls->Add(this->label2_AC);
			this->panelAgregarCliente->Controls->Add(this->label1_AC);
			this->panelAgregarCliente->Location = System::Drawing::Point(0, 0);
			this->panelAgregarCliente->Name = L"panelAgregarCliente";
			this->panelAgregarCliente->Size = System::Drawing::Size(500, 285);
			this->panelAgregarCliente->TabIndex = 14;
			// 
			// label1_AC
			// 
			this->label1_AC->AutoSize = true;
			this->label1_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1_AC->Location = System::Drawing::Point(37, 39);
			this->label1_AC->Name = L"label1_AC";
			this->label1_AC->Size = System::Drawing::Size(109, 16);
			this->label1_AC->TabIndex = 0;
			this->label1_AC->Text = L"Tipo documento:";
			// 
			// label2_AC
			// 
			this->label2_AC->AutoSize = true;
			this->label2_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_AC->Location = System::Drawing::Point(37, 66);
			this->label2_AC->Name = L"label2_AC";
			this->label2_AC->Size = System::Drawing::Size(95, 16);
			this->label2_AC->TabIndex = 1;
			this->label2_AC->Text = L"N° documento:";
			// 
			// label3_AC
			// 
			this->label3_AC->AutoSize = true;
			this->label3_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3_AC->Location = System::Drawing::Point(37, 92);
			this->label3_AC->Name = L"label3_AC";
			this->label3_AC->Size = System::Drawing::Size(67, 16);
			this->label3_AC->TabIndex = 2;
			this->label3_AC->Text = L"Nombres:";
			// 
			// label4_AC
			// 
			this->label4_AC->AutoSize = true;
			this->label4_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4_AC->Location = System::Drawing::Point(37, 119);
			this->label4_AC->Name = L"label4_AC";
			this->label4_AC->Size = System::Drawing::Size(68, 16);
			this->label4_AC->TabIndex = 3;
			this->label4_AC->Text = L"Apellidos:";
			// 
			// label5_AC
			// 
			this->label5_AC->AutoSize = true;
			this->label5_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5_AC->Location = System::Drawing::Point(37, 143);
			this->label5_AC->Name = L"label5_AC";
			this->label5_AC->Size = System::Drawing::Size(68, 16);
			this->label5_AC->TabIndex = 4;
			this->label5_AC->Text = L"Dirección:";
			// 
			// label6_AC
			// 
			this->label6_AC->AutoSize = true;
			this->label6_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6_AC->Location = System::Drawing::Point(37, 169);
			this->label6_AC->Name = L"label6_AC";
			this->label6_AC->Size = System::Drawing::Size(45, 16);
			this->label6_AC->TabIndex = 5;
			this->label6_AC->Text = L"Email:";
			// 
			// textNumDocumento_AC
			// 
			this->textNumDocumento_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textNumDocumento_AC->Location = System::Drawing::Point(157, 66);
			this->textNumDocumento_AC->Name = L"textNumDocumento_AC";
			this->textNumDocumento_AC->Size = System::Drawing::Size(300, 22);
			this->textNumDocumento_AC->TabIndex = 6;
			// 
			// textNombres_AC
			// 
			this->textNombres_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNombres_AC->Location = System::Drawing::Point(157, 92);
			this->textNombres_AC->Name = L"textNombres_AC";
			this->textNombres_AC->Size = System::Drawing::Size(300, 22);
			this->textNombres_AC->TabIndex = 7;
			// 
			// textApellidos_AC
			// 
			this->textApellidos_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textApellidos_AC->Location = System::Drawing::Point(157, 118);
			this->textApellidos_AC->Name = L"textApellidos_AC";
			this->textApellidos_AC->Size = System::Drawing::Size(300, 22);
			this->textApellidos_AC->TabIndex = 8;
			// 
			// textDireccion_AC
			// 
			this->textDireccion_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textDireccion_AC->Location = System::Drawing::Point(158, 144);
			this->textDireccion_AC->Name = L"textDireccion_AC";
			this->textDireccion_AC->Size = System::Drawing::Size(300, 22);
			this->textDireccion_AC->TabIndex = 9;
			// 
			// textEmail_AC
			// 
			this->textEmail_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail_AC->Location = System::Drawing::Point(158, 170);
			this->textEmail_AC->Name = L"textEmail_AC";
			this->textEmail_AC->Size = System::Drawing::Size(300, 22);
			this->textEmail_AC->TabIndex = 10;
			// 
			// comboTipoDocumento_AC
			// 
			this->comboTipoDocumento_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboTipoDocumento_AC->FormattingEnabled = true;
			this->comboTipoDocumento_AC->Location = System::Drawing::Point(157, 39);
			this->comboTipoDocumento_AC->Name = L"comboTipoDocumento_AC";
			this->comboTipoDocumento_AC->Size = System::Drawing::Size(300, 24);
			this->comboTipoDocumento_AC->TabIndex = 11;
			// 
			// btnCancelar_AgregarCliente
			// 
			this->btnCancelar_AgregarCliente->Location = System::Drawing::Point(40, 232);
			this->btnCancelar_AgregarCliente->Name = L"btnCancelar_AgregarCliente";
			this->btnCancelar_AgregarCliente->Size = System::Drawing::Size(200, 23);
			this->btnCancelar_AgregarCliente->TabIndex = 12;
			this->btnCancelar_AgregarCliente->Text = L"CANCELAR";
			this->btnCancelar_AgregarCliente->UseVisualStyleBackColor = true;
			// 
			// btnGuardar_AgregarCliente
			// 
			this->btnGuardar_AgregarCliente->Location = System::Drawing::Point(257, 232);
			this->btnGuardar_AgregarCliente->Name = L"btnGuardar_AgregarCliente";
			this->btnGuardar_AgregarCliente->Size = System::Drawing::Size(200, 23);
			this->btnGuardar_AgregarCliente->TabIndex = 13;
			this->btnGuardar_AgregarCliente->Text = L"GUARDAR";
			this->btnGuardar_AgregarCliente->UseVisualStyleBackColor = true;
			//
			// Ventana Main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 285);
			this->Controls->Add(this->panelAgregarCliente);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ModalAgregarCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agregar Cliente";
			this->panelAgregarCliente->ResumeLayout(false);
			this->panelAgregarCliente->PerformLayout();
			this->ResumeLayout(false);

		}
	};
}
