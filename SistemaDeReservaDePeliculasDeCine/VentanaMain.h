#pragma once

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class VentanaMain : public System::Windows::Forms::Form
	{
	public:
		VentanaMain(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~VentanaMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ LoginPanel;
	private: System::Windows::Forms::TextBox^ textBoxUsuario;


	private: System::Windows::Forms::Label^ labelPwd;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::TextBox^ textBoxPwd;
	private: System::Windows::Forms::Button^ btnIngresar;






	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->textBoxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPwd = (gcnew System::Windows::Forms::TextBox());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->labelPwd = (gcnew System::Windows::Forms::Label());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->LoginPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackColor = System::Drawing::SystemColors::Window;
			this->LoginPanel->Controls->Add(this->btnIngresar);
			this->LoginPanel->Controls->Add(this->labelPwd);
			this->LoginPanel->Controls->Add(this->labelUsuario);
			this->LoginPanel->Controls->Add(this->textBoxPwd);
			this->LoginPanel->Controls->Add(this->textBoxUsuario);
			this->LoginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(824, 561);
			this->LoginPanel->TabIndex = 0;
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->Location = System::Drawing::Point(287, 303);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(250, 20);
			this->textBoxUsuario->TabIndex = 1;
			// 
			// textBoxPwd
			// 
			this->textBoxPwd->Location = System::Drawing::Point(287, 364);
			this->textBoxPwd->Name = L"textBoxPwd";
			this->textBoxPwd->Size = System::Drawing::Size(250, 20);
			this->textBoxPwd->TabIndex = 2;
			// 
			// labelUsuario
			// 
			this->labelUsuario->Location = System::Drawing::Point(284, 277);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(253, 23);
			this->labelUsuario->TabIndex = 3;
			this->labelUsuario->Text = L"Usuario:";
			// 
			// labelPwd
			// 
			this->labelPwd->Location = System::Drawing::Point(287, 338);
			this->labelPwd->Name = L"labelPwd";
			this->labelPwd->Size = System::Drawing::Size(250, 23);
			this->labelPwd->TabIndex = 4;
			this->labelPwd->Text = L"Contraseña:";
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(287, 411);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(250, 23);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"INGRESAR";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &VentanaMain::btnIngresar_Click);
			// 
			// VentanaMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 561);
			this->Controls->Add(this->LoginPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"VentanaMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema de Reserva de Películas de Cine";
			this->LoginPanel->ResumeLayout(false);
			this->LoginPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginPanel->Visible = false;
	}
};
}
