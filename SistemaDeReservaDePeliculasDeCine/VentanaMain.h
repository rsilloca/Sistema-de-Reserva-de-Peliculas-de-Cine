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


	private: System::Windows::Forms::Panel^ panelVerReservas;


	private: System::Windows::Forms::Panel^ panelConfiguracion;


	private: System::Windows::Forms::PictureBox^ logoInicio;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;


















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
			this->logoInicio = (gcnew System::Windows::Forms::PictureBox());
			this->panelNuevaReserva = (gcnew System::Windows::Forms::Panel());
			this->panelVerReservas = (gcnew System::Windows::Forms::Panel());
			this->panelConfiguracion = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panelLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconLogin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelInicio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoInicio))->BeginInit();
			this->panelNuevaReserva->SuspendLayout();
			this->panelVerReservas->SuspendLayout();
			this->panelConfiguracion->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CINEMAX - CALIDAD PARA TUS OJOS";
			// 
			// panelInicio
			// 
			this->panelInicio->Controls->Add(this->logoInicio);
			this->panelInicio->Controls->Add(this->label1);
			this->panelInicio->Location = System::Drawing::Point(200, 0);
			this->panelInicio->Name = L"panelInicio";
			this->panelInicio->Size = System::Drawing::Size(760, 540);
			this->panelInicio->TabIndex = 8;
			this->panelInicio->Visible = false;
			// 
			// logoInicio
			// 
			this->logoInicio->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->logoInicio->Location = System::Drawing::Point(180, 80);
			this->logoInicio->Name = L"logoInicio";
			this->logoInicio->Size = System::Drawing::Size(400, 300);
			this->logoInicio->TabIndex = 1;
			this->logoInicio->TabStop = false;
			// 
			// panelNuevaReserva
			// 
			this->panelNuevaReserva->Controls->Add(this->panel2);
			this->panelNuevaReserva->Controls->Add(this->panel1);
			this->panelNuevaReserva->Location = System::Drawing::Point(200, 0);
			this->panelNuevaReserva->Name = L"panelNuevaReserva";
			this->panelNuevaReserva->Size = System::Drawing::Size(760, 540);
			this->panelNuevaReserva->TabIndex = 7;
			this->panelNuevaReserva->Visible = false;
			// 
			// panelVerReservas
			// 
			this->panelVerReservas->Controls->Add(this->panel4);
			this->panelVerReservas->Controls->Add(this->panel3);
			this->panelVerReservas->Location = System::Drawing::Point(200, 0);
			this->panelVerReservas->Name = L"panelVerReservas";
			this->panelVerReservas->Size = System::Drawing::Size(760, 540);
			this->panelVerReservas->TabIndex = 7;
			// 
			// panelConfiguracion
			// 
			this->panelConfiguracion->Controls->Add(this->panel6);
			this->panelConfiguracion->Controls->Add(this->panel5);
			this->panelConfiguracion->Location = System::Drawing::Point(200, 0);
			this->panelConfiguracion->Name = L"panelConfiguracion";
			this->panelConfiguracion->Size = System::Drawing::Size(760, 540);
			this->panelConfiguracion->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(20, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(720, 70);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Coral;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 70);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nueva Reserva";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(90, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Crea y Guarda una Nueva Reserva";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(20, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(720, 420);
			this->panel2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cliente:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Función:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(85, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(500, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(500, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(600, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(600, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(110, 80);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(500, 300);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(110, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(500, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"GUARDAR RESERVA";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Window;
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Location = System::Drawing::Point(20, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(720, 70);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::GreenYellow;
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(90, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ver Reservas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(90, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(192, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Vea la Lista de Reservas Activas";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->dateTimePicker2);
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(20, 100);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(720, 420);
			this->panel4->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(20, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Cliente:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(20, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Desde:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(366, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Hasta:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(366, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 16);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Función:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(440, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 20);
			this->textBox3->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(80, 50);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(250, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(440, 50);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(250, 20);
			this->dateTimePicker2->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(440, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Window;
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Location = System::Drawing::Point(20, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(720, 70);
			this->panel5->TabIndex = 0;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Gold;
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(70, 70);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(90, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Configuración";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(90, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(175, 16);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Configura tu Cuenta Personal";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Window;
			this->panel6->Location = System::Drawing::Point(20, 100);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(720, 420);
			this->panel6->TabIndex = 1;
			// 
			// VentanaMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 540);
			this->Controls->Add(this->panelLogin);
			this->Controls->Add(this->panelInicio);
			this->Controls->Add(this->panelNuevaReserva);
			this->Controls->Add(this->panelVerReservas);
			this->Controls->Add(this->panelConfiguracion);
			this->Controls->Add(this->panelMenu);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoInicio))->EndInit();
			this->panelNuevaReserva->ResumeLayout(false);
			this->panelVerReservas->ResumeLayout(false);
			this->panelConfiguracion->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
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
