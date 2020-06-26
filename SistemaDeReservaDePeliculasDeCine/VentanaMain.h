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
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::TextBox^ textBoxUsuario;


	private: System::Windows::Forms::Label^ labelPwd;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::TextBox^ textBoxPwd;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::PictureBox^ iconLogin;
	private: System::Windows::Forms::Panel^ panelInicio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnConfiguracion;
	private: System::Windows::Forms::Button^ btnVerReservas;
	private: System::Windows::Forms::Button^ btnNuevaReserva;
	private: System::Windows::Forms::Label^ labelNomUsuario;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnInicio;
	private: System::Windows::Forms::Panel^ panelNuevaReserva;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panelVerReservas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelConfiguracion;

	private: System::Windows::Forms::Label^ label4;

















	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->iconLogin = (gcnew System::Windows::Forms::PictureBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->labelPwd = (gcnew System::Windows::Forms::Label());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->textBoxPwd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->btnInicio = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelNomUsuario = (gcnew System::Windows::Forms::Label());
			this->btnNuevaReserva = (gcnew System::Windows::Forms::Button());
			this->btnVerReservas = (gcnew System::Windows::Forms::Button());
			this->btnConfiguracion = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInicio = (gcnew System::Windows::Forms::Panel());
			this->panelNuevaReserva = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelVerReservas = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelConfiguracion = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconLogin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelInicio->SuspendLayout();
			this->panelNuevaReserva->SuspendLayout();
			this->panelVerReservas->SuspendLayout();
			this->panelConfiguracion->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->BackColor = System::Drawing::SystemColors::Window;
			this->panelLogin->Controls->Add(this->iconLogin);
			this->panelLogin->Controls->Add(this->btnIngresar);
			this->panelLogin->Controls->Add(this->labelPwd);
			this->panelLogin->Controls->Add(this->labelUsuario);
			this->panelLogin->Controls->Add(this->textBoxPwd);
			this->panelLogin->Controls->Add(this->textBoxUsuario);
			this->panelLogin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelLogin->Location = System::Drawing::Point(0, 0);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(960, 540);
			this->panelLogin->TabIndex = 0;
			// 
			// iconLogin
			// 
			this->iconLogin->BackColor = System::Drawing::SystemColors::Info;
			this->iconLogin->Location = System::Drawing::Point(355, 90);
			this->iconLogin->Name = L"iconLogin";
			this->iconLogin->Size = System::Drawing::Size(250, 188);
			this->iconLogin->TabIndex = 6;
			this->iconLogin->TabStop = false;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(355, 420);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(250, 30);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"INGRESAR";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &VentanaMain::btnIngresar_Click);
			// 
			// labelPwd
			// 
			this->labelPwd->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPwd->Location = System::Drawing::Point(355, 355);
			this->labelPwd->Name = L"labelPwd";
			this->labelPwd->Size = System::Drawing::Size(250, 20);
			this->labelPwd->TabIndex = 4;
			this->labelPwd->Text = L"Contraseña:";
			// 
			// labelUsuario
			// 
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(355, 293);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(250, 20);
			this->labelUsuario->TabIndex = 3;
			this->labelUsuario->Text = L"Usuario:";
			// 
			// textBoxPwd
			// 
			this->textBoxPwd->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPwd->Location = System::Drawing::Point(355, 378);
			this->textBoxPwd->Name = L"textBoxPwd";
			this->textBoxPwd->Size = System::Drawing::Size(250, 26);
			this->textBoxPwd->TabIndex = 2;
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsuario->Location = System::Drawing::Point(355, 316);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(250, 26);
			this->textBoxUsuario->TabIndex = 1;
			// 
			// btnInicio
			// 
			this->btnInicio->Location = System::Drawing::Point(15, 270);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(170, 30);
			this->btnInicio->TabIndex = 0;
			this->btnInicio->Text = L"INICIO";
			this->btnInicio->UseVisualStyleBackColor = true;
			this->btnInicio->Click += gcnew System::EventHandler(this, &VentanaMain::btnInicio_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox1->Location = System::Drawing::Point(15, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 170);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// labelNomUsuario
			// 
			this->labelNomUsuario->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomUsuario->Location = System::Drawing::Point(15, 40);
			this->labelNomUsuario->Name = L"labelNomUsuario";
			this->labelNomUsuario->Size = System::Drawing::Size(170, 20);
			this->labelNomUsuario->TabIndex = 1;
			this->labelNomUsuario->Text = L"Usuario";
			this->labelNomUsuario->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnNuevaReserva
			// 
			this->btnNuevaReserva->Location = System::Drawing::Point(15, 310);
			this->btnNuevaReserva->Name = L"btnNuevaReserva";
			this->btnNuevaReserva->Size = System::Drawing::Size(170, 30);
			this->btnNuevaReserva->TabIndex = 2;
			this->btnNuevaReserva->Text = L"NUEVA RESERVA";
			this->btnNuevaReserva->UseVisualStyleBackColor = true;
			this->btnNuevaReserva->Click += gcnew System::EventHandler(this, &VentanaMain::btnNuevaReserva_Click);
			// 
			// btnVerReservas
			// 
			this->btnVerReservas->Location = System::Drawing::Point(15, 350);
			this->btnVerReservas->Name = L"btnVerReservas";
			this->btnVerReservas->Size = System::Drawing::Size(170, 30);
			this->btnVerReservas->TabIndex = 3;
			this->btnVerReservas->Text = L"VER RESERVAS";
			this->btnVerReservas->UseVisualStyleBackColor = true;
			this->btnVerReservas->Click += gcnew System::EventHandler(this, &VentanaMain::btnVerReservas_Click);
			// 
			// btnConfiguracion
			// 
			this->btnConfiguracion->Location = System::Drawing::Point(15, 390);
			this->btnConfiguracion->Name = L"btnConfiguracion";
			this->btnConfiguracion->Size = System::Drawing::Size(170, 30);
			this->btnConfiguracion->TabIndex = 4;
			this->btnConfiguracion->Text = L"CONFIGURACIÓN";
			this->btnConfiguracion->UseVisualStyleBackColor = true;
			this->btnConfiguracion->Click += gcnew System::EventHandler(this, &VentanaMain::btnConfiguracion_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(15, 430);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(170, 30);
			this->btnSalir->TabIndex = 5;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &VentanaMain::btnSalir_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->btnSalir);
			this->panelMenu->Controls->Add(this->btnConfiguracion);
			this->panelMenu->Controls->Add(this->btnVerReservas);
			this->panelMenu->Controls->Add(this->btnNuevaReserva);
			this->panelMenu->Controls->Add(this->labelNomUsuario);
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Controls->Add(this->btnInicio);
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(200, 540);
			this->panelMenu->TabIndex = 7;
			this->panelMenu->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(308, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INICIO";
			// 
			// panelInicio
			// 
			this->panelInicio->Controls->Add(this->label1);
			this->panelInicio->Location = System::Drawing::Point(200, 0);
			this->panelInicio->Name = L"panelInicio";
			this->panelInicio->Size = System::Drawing::Size(760, 540);
			this->panelInicio->TabIndex = 8;
			this->panelInicio->Visible = false;
			// 
			// panelNuevaReserva
			// 
			this->panelNuevaReserva->Controls->Add(this->label2);
			this->panelNuevaReserva->Location = System::Drawing::Point(200, 0);
			this->panelNuevaReserva->Name = L"panelNuevaReserva";
			this->panelNuevaReserva->Size = System::Drawing::Size(760, 540);
			this->panelNuevaReserva->TabIndex = 7;
			this->panelNuevaReserva->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"NUEVA RESERVA";
			// 
			// panelVerReservas
			// 
			this->panelVerReservas->Controls->Add(this->label3);
			this->panelVerReservas->Location = System::Drawing::Point(200, 0);
			this->panelVerReservas->Name = L"panelVerReservas";
			this->panelVerReservas->Size = System::Drawing::Size(760, 540);
			this->panelVerReservas->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(369, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"VER RESERVAS";
			// 
			// panelConfiguracion
			// 
			this->panelConfiguracion->Controls->Add(this->label4);
			this->panelConfiguracion->Location = System::Drawing::Point(200, 0);
			this->panelConfiguracion->Name = L"panelConfiguracion";
			this->panelConfiguracion->Size = System::Drawing::Size(760, 540);
			this->panelConfiguracion->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(253, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"CONFIGURACION";
			// 
			// VentanaMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 540);
			this->Controls->Add(this->panelLogin);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelInicio);
			this->Controls->Add(this->panelNuevaReserva);
			this->Controls->Add(this->panelVerReservas);
			this->Controls->Add(this->panelConfiguracion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"VentanaMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema de Reserva de Películas de Cine";
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconLogin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelInicio->ResumeLayout(false);
			this->panelInicio->PerformLayout();
			this->panelNuevaReserva->ResumeLayout(false);
			this->panelNuevaReserva->PerformLayout();
			this->panelVerReservas->ResumeLayout(false);
			this->panelVerReservas->PerformLayout();
			this->panelConfiguracion->ResumeLayout(false);
			this->panelConfiguracion->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		panelLogin->Visible = false;
		panelNuevaReserva->Visible = false;
		panelVerReservas->Visible = false;
		panelConfiguracion->Visible = false;
		panelInicio->Visible = true;
		panelMenu->Visible = true;
	}
	private: System::Void btnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		panelInicio->Visible = true;
		panelNuevaReserva->Visible = false;
		panelVerReservas->Visible = false;
		panelConfiguracion->Visible = false;
	}
private: System::Void btnNuevaReserva_Click(System::Object^ sender, System::EventArgs^ e) {
	panelInicio->Visible = false;
	panelNuevaReserva->Visible = true;
	panelVerReservas->Visible = false;
	panelConfiguracion->Visible = false;
}
private: System::Void btnVerReservas_Click(System::Object^ sender, System::EventArgs^ e) {
	panelInicio->Visible = false;
	panelNuevaReserva->Visible = false;
	panelVerReservas->Visible = true;
	panelConfiguracion->Visible = false;
}
private: System::Void btnConfiguracion_Click(System::Object^ sender, System::EventArgs^ e) {
	panelInicio->Visible = false;
	panelNuevaReserva->Visible = false;
	panelVerReservas->Visible = false;
	panelConfiguracion->Visible = true;
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	panelLogin->Visible = true;
	panelNuevaReserva->Visible = false;
	panelVerReservas->Visible = false;
	panelConfiguracion->Visible = false;
	panelInicio->Visible = false;
	panelMenu->Visible = false;
}
};
}
