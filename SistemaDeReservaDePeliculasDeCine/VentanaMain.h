#pragma once
#include "AgregarCliente.h"
#include "SeleccionarFuncion.h"
#include "PanelReservarAsientos.h"
#include "Butaca.h"
#include "Cine.h"
#include "Utils.h"
#include <iostream>
#include "Constantes.cpp"
#include <string>

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
	private: System::Windows::Forms::PictureBox^ iconUser;

	private: System::Windows::Forms::Button^ btnInicio;
	private: System::Windows::Forms::Panel^ panelNuevaReserva;


	private: System::Windows::Forms::Panel^ panelVerReservas;


	private: System::Windows::Forms::Panel^ panelConfiguracion;


	private: System::Windows::Forms::PictureBox^ logoInicio;
	private: System::Windows::Forms::Panel^ panelConfNuevaReserva;

	private: System::Windows::Forms::Button^ btnGuardarReserva;


	private: System::Windows::Forms::PictureBox^ seleccionarButaca;
	private: System::Windows::Forms::Button^ btnSeleccionarFuncion;

	private: System::Windows::Forms::Button^ btnAgregarCliente;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBoxClientes;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnBuscar;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::PictureBox^ imgPerfil;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ panelAgregarCliente;
private: System::Windows::Forms::Panel^ panelSeleccionarFuncion;
private: System::Windows::Forms::Panel^ panelVerEditarReserva;
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
private: System::Windows::Forms::Button^ btnFiltrar_SF;

private: System::Windows::Forms::DateTimePicker^ dateHasta_SF;

private: System::Windows::Forms::DateTimePicker^ dateDesde_SF;
private: System::Windows::Forms::ComboBox^ comboSala_SF;


private: System::Windows::Forms::ComboBox^ comboCategoria_SF;

private: System::Windows::Forms::TextBox^ textPelicula_SF;

private: System::Windows::Forms::Label^ label5_SF;

private: System::Windows::Forms::Label^ label4_SF;

private: System::Windows::Forms::Label^ label3_SF;

private: System::Windows::Forms::Label^ label2_FS;

private: System::Windows::Forms::Label^ label1_SF;
private: System::Windows::Forms::Panel^ panelPeliculas_SF;
private: System::Windows::Forms::VScrollBar^ vScrollBarPeliculas_SF;




private: System::Windows::Forms::Button^ btnSeleccionar_SF;

private: System::Windows::Forms::Button^ btnCancelar_SF;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Panel^ panelPeli;
private: System::Windows::Forms::Label^ fechaFunc;
private: System::Windows::Forms::Label^ salaPeli;
private: System::Windows::Forms::Label^ tituloPeli;
private: System::Windows::Forms::PictureBox^ pictureImgPeli;
private: System::Windows::Forms::DataGridView^ dataGridReservas;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ nroReserva;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ clienteReserva;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ funcionReserva;
private: System::Windows::Forms::DataGridViewButtonColumn^ accionVer;
private: System::Windows::Forms::DataGridViewButtonColumn^ accionEditar;
private: System::Windows::Forms::DataGridViewButtonColumn^ accionEliminar;































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
			this->iconUser = (gcnew System::Windows::Forms::PictureBox());
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelConfNuevaReserva = (gcnew System::Windows::Forms::Panel());
			this->btnGuardarReserva = (gcnew System::Windows::Forms::Button());
			this->seleccionarButaca = (gcnew System::Windows::Forms::PictureBox());
			this->btnSeleccionarFuncion = (gcnew System::Windows::Forms::Button());
			this->btnAgregarCliente = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxClientes = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panelVerReservas = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridReservas = (gcnew System::Windows::Forms::DataGridView());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panelConfiguracion = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->imgPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panelAgregarCliente = (gcnew System::Windows::Forms::Panel());
			this->btnGuardar_AgregarCliente = (gcnew System::Windows::Forms::Button());
			this->btnCancelar_AgregarCliente = (gcnew System::Windows::Forms::Button());
			this->comboTipoDocumento_AC = (gcnew System::Windows::Forms::ComboBox());
			this->textEmail_AC = (gcnew System::Windows::Forms::TextBox());
			this->textDireccion_AC = (gcnew System::Windows::Forms::TextBox());
			this->textApellidos_AC = (gcnew System::Windows::Forms::TextBox());
			this->textNombres_AC = (gcnew System::Windows::Forms::TextBox());
			this->textNumDocumento_AC = (gcnew System::Windows::Forms::TextBox());
			this->label6_AC = (gcnew System::Windows::Forms::Label());
			this->label5_AC = (gcnew System::Windows::Forms::Label());
			this->label4_AC = (gcnew System::Windows::Forms::Label());
			this->label3_AC = (gcnew System::Windows::Forms::Label());
			this->label2_AC = (gcnew System::Windows::Forms::Label());
			this->label1_AC = (gcnew System::Windows::Forms::Label());
			this->panelVerEditarReserva = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panelSeleccionarFuncion = (gcnew System::Windows::Forms::Panel());
			this->panelPeliculas_SF = (gcnew System::Windows::Forms::Panel());
			this->panelPeli = (gcnew System::Windows::Forms::Panel());
			this->pictureImgPeli = (gcnew System::Windows::Forms::PictureBox());
			this->fechaFunc = (gcnew System::Windows::Forms::Label());
			this->salaPeli = (gcnew System::Windows::Forms::Label());
			this->tituloPeli = (gcnew System::Windows::Forms::Label());
			this->vScrollBarPeliculas_SF = (gcnew System::Windows::Forms::VScrollBar());
			this->btnSeleccionar_SF = (gcnew System::Windows::Forms::Button());
			this->btnCancelar_SF = (gcnew System::Windows::Forms::Button());
			this->btnFiltrar_SF = (gcnew System::Windows::Forms::Button());
			this->dateHasta_SF = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateDesde_SF = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboSala_SF = (gcnew System::Windows::Forms::ComboBox());
			this->comboCategoria_SF = (gcnew System::Windows::Forms::ComboBox());
			this->textPelicula_SF = (gcnew System::Windows::Forms::TextBox());
			this->label5_SF = (gcnew System::Windows::Forms::Label());
			this->label4_SF = (gcnew System::Windows::Forms::Label());
			this->label3_SF = (gcnew System::Windows::Forms::Label());
			this->label2_FS = (gcnew System::Windows::Forms::Label());
			this->label1_SF = (gcnew System::Windows::Forms::Label());
			this->nroReserva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clienteReserva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->funcionReserva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->accionVer = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->accionEditar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->accionEliminar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panelLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconLogin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconUser))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelInicio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoInicio))->BeginInit();
			this->panelNuevaReserva->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelConfNuevaReserva->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccionarButaca))->BeginInit();
			this->panelVerReservas->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridReservas))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panelConfiguracion->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPerfil))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panelAgregarCliente->SuspendLayout();
			this->panelVerEditarReserva->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelSeleccionarFuncion->SuspendLayout();
			this->panelPeliculas_SF->SuspendLayout();
			this->panelPeli->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureImgPeli))->BeginInit();
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
			this->btnIngresar->Location = System::Drawing::Point(355, 422);
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
			// iconUser
			// 
			this->iconUser->BackColor = System::Drawing::SystemColors::Info;
			this->iconUser->Location = System::Drawing::Point(15, 70);
			this->iconUser->Name = L"iconUser";
			this->iconUser->Size = System::Drawing::Size(170, 170);
			this->iconUser->TabIndex = 0;
			this->iconUser->TabStop = false;
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
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelMenu->Controls->Add(this->btnSalir);
			this->panelMenu->Controls->Add(this->btnConfiguracion);
			this->panelMenu->Controls->Add(this->btnVerReservas);
			this->panelMenu->Controls->Add(this->btnNuevaReserva);
			this->panelMenu->Controls->Add(this->labelNomUsuario);
			this->panelMenu->Controls->Add(this->iconUser);
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
			this->panelInicio->BackColor = System::Drawing::SystemColors::Window;
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
			this->panelNuevaReserva->Controls->Add(this->panel1);
			this->panelNuevaReserva->Controls->Add(this->panelConfNuevaReserva);
			this->panelNuevaReserva->Location = System::Drawing::Point(200, 0);
			this->panelNuevaReserva->Name = L"panelNuevaReserva";
			this->panelNuevaReserva->Size = System::Drawing::Size(760, 540);
			this->panelNuevaReserva->TabIndex = 7;
			this->panelNuevaReserva->Visible = false;
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
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Coral;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 70);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panelConfNuevaReserva
			// 
			this->panelConfNuevaReserva->BackColor = System::Drawing::SystemColors::Window;
			this->panelConfNuevaReserva->Controls->Add(this->btnGuardarReserva);
			this->panelConfNuevaReserva->Controls->Add(this->seleccionarButaca);
			this->panelConfNuevaReserva->Controls->Add(this->btnSeleccionarFuncion);
			this->panelConfNuevaReserva->Controls->Add(this->btnAgregarCliente);
			this->panelConfNuevaReserva->Controls->Add(this->textBox1);
			this->panelConfNuevaReserva->Controls->Add(this->comboBoxClientes);
			this->panelConfNuevaReserva->Controls->Add(this->label7);
			this->panelConfNuevaReserva->Controls->Add(this->label6);
			this->panelConfNuevaReserva->Location = System::Drawing::Point(20, 100);
			this->panelConfNuevaReserva->Name = L"panelConfNuevaReserva";
			this->panelConfNuevaReserva->Size = System::Drawing::Size(720, 420);
			this->panelConfNuevaReserva->TabIndex = 2;
			// 
			// btnGuardarReserva
			// 
			this->btnGuardarReserva->Location = System::Drawing::Point(110, 387);
			this->btnGuardarReserva->Name = L"btnGuardarReserva";
			this->btnGuardarReserva->Size = System::Drawing::Size(500, 23);
			this->btnGuardarReserva->TabIndex = 7;
			this->btnGuardarReserva->Text = L"GUARDAR RESERVA";
			this->btnGuardarReserva->UseVisualStyleBackColor = true;
			this->btnGuardarReserva->Click += gcnew System::EventHandler(this, &VentanaMain::btnGuardarReserva_Click);
			// 
			// seleccionarButaca
			// 
			this->seleccionarButaca->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->seleccionarButaca->Location = System::Drawing::Point(110, 80);
			this->seleccionarButaca->Name = L"seleccionarButaca";
			this->seleccionarButaca->Size = System::Drawing::Size(500, 125);
			this->seleccionarButaca->TabIndex = 6;
			this->seleccionarButaca->TabStop = false;
			// 
			// btnSeleccionarFuncion
			// 
			this->btnSeleccionarFuncion->Location = System::Drawing::Point(600, 50);
			this->btnSeleccionarFuncion->Name = L"btnSeleccionarFuncion";
			this->btnSeleccionarFuncion->Size = System::Drawing::Size(95, 23);
			this->btnSeleccionarFuncion->TabIndex = 5;
			this->btnSeleccionarFuncion->Text = L"Seleccionar";
			this->btnSeleccionarFuncion->UseVisualStyleBackColor = true;
			this->btnSeleccionarFuncion->Click += gcnew System::EventHandler(this, &VentanaMain::btnSeleccionarFuncion_Click);
			// 
			// btnAgregarCliente
			// 
			this->btnAgregarCliente->Location = System::Drawing::Point(600, 20);
			this->btnAgregarCliente->Name = L"btnAgregarCliente";
			this->btnAgregarCliente->Size = System::Drawing::Size(95, 23);
			this->btnAgregarCliente->TabIndex = 4;
			this->btnAgregarCliente->Text = L"Agregar";
			this->btnAgregarCliente->UseVisualStyleBackColor = true;
			this->btnAgregarCliente->Click += gcnew System::EventHandler(this, &VentanaMain::btnAgregarCliente_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(500, 20);
			this->textBox1->TabIndex = 3;
			// 
			// comboBoxClientes
			// 
			this->comboBoxClientes->FormattingEnabled = true;
			this->comboBoxClientes->Location = System::Drawing::Point(85, 20);
			this->comboBoxClientes->Name = L"comboBoxClientes";
			this->comboBoxClientes->Size = System::Drawing::Size(500, 21);
			this->comboBoxClientes->TabIndex = 2;
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
			// panelVerReservas
			// 
			this->panelVerReservas->Controls->Add(this->panel4);
			this->panelVerReservas->Controls->Add(this->panel3);
			this->panelVerReservas->Location = System::Drawing::Point(200, 0);
			this->panelVerReservas->Name = L"panelVerReservas";
			this->panelVerReservas->Size = System::Drawing::Size(760, 540);
			this->panelVerReservas->TabIndex = 7;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Controls->Add(this->dataGridReservas);
			this->panel4->Controls->Add(this->btnBuscar);
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
			// dataGridReservas
			// 
			this->dataGridReservas->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridReservas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridReservas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->nroReserva,
					this->clienteReserva, this->funcionReserva, this->accionVer, this->accionEditar, this->accionEliminar
			});
			this->dataGridReservas->Location = System::Drawing::Point(25, 110);
			this->dataGridReservas->Name = L"dataGridReservas";
			this->dataGridReservas->RowHeadersWidth = 5;
			this->dataGridReservas->Size = System::Drawing::Size(665, 285);
			this->dataGridReservas->TabIndex = 9;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(440, 75);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(250, 23);
			this->btnBuscar->TabIndex = 8;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &VentanaMain::btnBuscar_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(440, 50);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(250, 20);
			this->dateTimePicker2->TabIndex = 7;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(80, 50);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(250, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(440, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 20);
			this->textBox2->TabIndex = 4;
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
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::GreenYellow;
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
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
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Window;
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->textBox10);
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Controls->Add(this->textBox8);
			this->panel6->Controls->Add(this->textBox7);
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->imgPerfil);
			this->panel6->Controls->Add(this->comboBox2);
			this->panel6->Controls->Add(this->label19);
			this->panel6->Controls->Add(this->label18);
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Location = System::Drawing::Point(20, 100);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(720, 420);
			this->panel6->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Habilitar Modo Edición";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(429, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Guardar Cambios";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(25, 354);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(56, 13);
			this->label23->TabIndex = 18;
			this->label23->Text = L"Password:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(25, 325);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 13);
			this->label22->TabIndex = 17;
			this->label22->Text = L"Usuario:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(248, 281);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(205, 23);
			this->label21->TabIndex = 16;
			this->label21->Text = L"DATOS DE USUARIO";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(160, 351);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(530, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(160, 322);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(530, 20);
			this->textBox9->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(160, 222);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(314, 20);
			this->textBox8->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(160, 193);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(314, 20);
			this->textBox7->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(160, 163);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(314, 20);
			this->textBox6->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(160, 134);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(314, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(160, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(314, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(243, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(210, 23);
			this->label20->TabIndex = 8;
			this->label20->Text = L"DATOS PERSONALES";
			// 
			// imgPerfil
			// 
			this->imgPerfil->Location = System::Drawing::Point(520, 70);
			this->imgPerfil->Name = L"imgPerfil";
			this->imgPerfil->Size = System::Drawing::Size(170, 170);
			this->imgPerfil->TabIndex = 7;
			this->imgPerfil->TabStop = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(160, 70);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(314, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(25, 229);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Email:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(25, 200);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(55, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Dirección:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 170);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Apellidos:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(25, 137);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Nombres:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(25, 107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Número de documento:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(25, 75);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(104, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Tipo de Documento:";
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
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Gold;
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(70, 70);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
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
			this->panelAgregarCliente->TabIndex = 2;
			this->panelAgregarCliente->Visible = false;
			// 
			// btnGuardar_AgregarCliente
			// 
			this->btnGuardar_AgregarCliente->Location = System::Drawing::Point(257, 232);
			this->btnGuardar_AgregarCliente->Name = L"btnGuardar_AgregarCliente";
			this->btnGuardar_AgregarCliente->Size = System::Drawing::Size(200, 23);
			this->btnGuardar_AgregarCliente->TabIndex = 13;
			this->btnGuardar_AgregarCliente->Text = L"GUARDAR";
			this->btnGuardar_AgregarCliente->UseVisualStyleBackColor = true;
			//this->btnGuardar_AgregarCliente->Click += gcnew System::EventHandler(this, &VentanaMain::btnGuardar_AgregarCliente_Click);
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
			// textEmail_AC
			// 
			this->textEmail_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail_AC->Location = System::Drawing::Point(158, 170);
			this->textEmail_AC->Name = L"textEmail_AC";
			this->textEmail_AC->Size = System::Drawing::Size(300, 22);
			this->textEmail_AC->TabIndex = 10;
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
			// textApellidos_AC
			// 
			this->textApellidos_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textApellidos_AC->Location = System::Drawing::Point(157, 118);
			this->textApellidos_AC->Name = L"textApellidos_AC";
			this->textApellidos_AC->Size = System::Drawing::Size(300, 22);
			this->textApellidos_AC->TabIndex = 8;
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
			// textNumDocumento_AC
			// 
			this->textNumDocumento_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textNumDocumento_AC->Location = System::Drawing::Point(157, 66);
			this->textNumDocumento_AC->Name = L"textNumDocumento_AC";
			this->textNumDocumento_AC->Size = System::Drawing::Size(300, 22);
			this->textNumDocumento_AC->TabIndex = 6;
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
			// panelVerEditarReserva
			// 
			this->panelVerEditarReserva->Controls->Add(this->label28);
			this->panelVerEditarReserva->Controls->Add(this->label27);
			this->panelVerEditarReserva->Controls->Add(this->label26);
			this->panelVerEditarReserva->Controls->Add(this->label25);
			this->panelVerEditarReserva->Controls->Add(this->pictureBox1);
			this->panelVerEditarReserva->Controls->Add(this->textBox14);
			this->panelVerEditarReserva->Controls->Add(this->textBox13);
			this->panelVerEditarReserva->Controls->Add(this->textBox12);
			this->panelVerEditarReserva->Controls->Add(this->textBox11);
			this->panelVerEditarReserva->Controls->Add(this->comboBox3);
			this->panelVerEditarReserva->Controls->Add(this->label24);
			this->panelVerEditarReserva->Location = System::Drawing::Point(0, 0);
			this->panelVerEditarReserva->Name = L"panelVerEditarReserva";
			this->panelVerEditarReserva->Size = System::Drawing::Size(500, 500);
			this->panelVerEditarReserva->TabIndex = 3;
			this->panelVerEditarReserva->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(20, 124);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 16);
			this->label28->TabIndex = 10;
			this->label28->Text = L"Butacas:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(20, 100);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(39, 16);
			this->label27->TabIndex = 9;
			this->label27->Text = L"Sala:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(22, 73);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 16);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Fecha:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(22, 47);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(59, 16);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Película:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(380, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 125);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(101, 125);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(270, 20);
			this->textBox14->TabIndex = 5;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(101, 99);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(270, 20);
			this->textBox13->TabIndex = 4;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(101, 73);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(270, 20);
			this->textBox12->TabIndex = 3;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(101, 47);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(270, 20);
			this->textBox11->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(101, 20);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(270, 21);
			this->comboBox3->TabIndex = 1;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(20, 20);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(52, 16);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Cliente:";
			// 
			// panelSeleccionarFuncion
			// 
			this->panelSeleccionarFuncion->Controls->Add(this->panelPeliculas_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->btnSeleccionar_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->btnCancelar_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->btnFiltrar_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->dateHasta_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->dateDesde_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->comboSala_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->comboCategoria_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->textPelicula_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->label5_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->label4_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->label3_SF);
			this->panelSeleccionarFuncion->Controls->Add(this->label2_FS);
			this->panelSeleccionarFuncion->Controls->Add(this->label1_SF);
			this->panelSeleccionarFuncion->Location = System::Drawing::Point(0, 0);
			this->panelSeleccionarFuncion->Name = L"panelSeleccionarFuncion";
			this->panelSeleccionarFuncion->Size = System::Drawing::Size(700, 500);
			this->panelSeleccionarFuncion->TabIndex = 4;
			this->panelSeleccionarFuncion->Visible = false;
			// 
			// panelPeliculas_SF
			// 
			this->panelPeliculas_SF->BackColor = System::Drawing::SystemColors::Window;
			this->panelPeliculas_SF->Controls->Add(this->panelPeli);
			this->panelPeliculas_SF->Controls->Add(this->vScrollBarPeliculas_SF);
			this->panelPeliculas_SF->Location = System::Drawing::Point(20, 114);
			this->panelPeliculas_SF->Name = L"panelPeliculas_SF";
			this->panelPeliculas_SF->Size = System::Drawing::Size(660, 330);
			this->panelPeliculas_SF->TabIndex = 13;
			// 
			// panelPeli
			// 
			this->panelPeli->BackColor = System::Drawing::Color::MistyRose;
			this->panelPeli->Controls->Add(this->pictureImgPeli);
			this->panelPeli->Controls->Add(this->fechaFunc);
			this->panelPeli->Controls->Add(this->salaPeli);
			this->panelPeli->Controls->Add(this->tituloPeli);
			this->panelPeli->Location = System::Drawing::Point(30, 20);
			this->panelPeli->Name = L"panelPeli";
			this->panelPeli->Size = System::Drawing::Size(100, 210);
			this->panelPeli->TabIndex = 1;
			// 
			// pictureImgPeli
			// 
			this->pictureImgPeli->BackColor = System::Drawing::Color::Salmon;
			this->pictureImgPeli->Location = System::Drawing::Point(0, 0);
			this->pictureImgPeli->Name = L"pictureImgPeli";
			this->pictureImgPeli->Size = System::Drawing::Size(100, 140);
			this->pictureImgPeli->TabIndex = 4;
			this->pictureImgPeli->TabStop = false;
			// 
			// fechaFunc
			// 
			this->fechaFunc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fechaFunc->Location = System::Drawing::Point(0, 194);
			this->fechaFunc->Name = L"fechaFunc";
			this->fechaFunc->Size = System::Drawing::Size(100, 13);
			this->fechaFunc->TabIndex = 3;
			this->fechaFunc->Text = L"Dom 12/12/2020";
			this->fechaFunc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// salaPeli
			// 
			this->salaPeli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salaPeli->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->salaPeli->Location = System::Drawing::Point(0, 180);
			this->salaPeli->Name = L"salaPeli";
			this->salaPeli->Size = System::Drawing::Size(100, 13);
			this->salaPeli->TabIndex = 2;
			this->salaPeli->Text = L"Sala 2D";
			this->salaPeli->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tituloPeli
			// 
			this->tituloPeli->BackColor = System::Drawing::Color::MistyRose;
			this->tituloPeli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tituloPeli->ForeColor = System::Drawing::Color::Black;
			this->tituloPeli->Location = System::Drawing::Point(0, 140);
			this->tituloPeli->Name = L"tituloPeli";
			this->tituloPeli->Size = System::Drawing::Size(100, 40);
			this->tituloPeli->TabIndex = 1;
			this->tituloPeli->Text = L"Harry Potter y las reliquias de la muerte";
			this->tituloPeli->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vScrollBarPeliculas_SF
			// 
			this->vScrollBarPeliculas_SF->Location = System::Drawing::Point(640, 0);
			this->vScrollBarPeliculas_SF->Name = L"vScrollBarPeliculas_SF";
			this->vScrollBarPeliculas_SF->Size = System::Drawing::Size(20, 330);
			this->vScrollBarPeliculas_SF->TabIndex = 0;
			// 
			// btnSeleccionar_SF
			// 
			this->btnSeleccionar_SF->Location = System::Drawing::Point(380, 460);
			this->btnSeleccionar_SF->Name = L"btnSeleccionar_SF";
			this->btnSeleccionar_SF->Size = System::Drawing::Size(300, 23);
			this->btnSeleccionar_SF->TabIndex = 12;
			this->btnSeleccionar_SF->Text = L"SELECCIONAR";
			this->btnSeleccionar_SF->UseVisualStyleBackColor = true;
			// 
			// btnCancelar_SF
			// 
			this->btnCancelar_SF->Location = System::Drawing::Point(23, 460);
			this->btnCancelar_SF->Name = L"btnCancelar_SF";
			this->btnCancelar_SF->Size = System::Drawing::Size(317, 23);
			this->btnCancelar_SF->TabIndex = 11;
			this->btnCancelar_SF->Text = L"CANCELAR";
			this->btnCancelar_SF->UseVisualStyleBackColor = true;
			// 
			// btnFiltrar_SF
			// 
			this->btnFiltrar_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFiltrar_SF->Location = System::Drawing::Point(460, 73);
			this->btnFiltrar_SF->Name = L"btnFiltrar_SF";
			this->btnFiltrar_SF->Size = System::Drawing::Size(220, 23);
			this->btnFiltrar_SF->TabIndex = 10;
			this->btnFiltrar_SF->Text = L"FILTRAR";
			this->btnFiltrar_SF->UseVisualStyleBackColor = true;
			// 
			// dateHasta_SF
			// 
			this->dateHasta_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateHasta_SF->Location = System::Drawing::Point(460, 47);
			this->dateHasta_SF->Name = L"dateHasta_SF";
			this->dateHasta_SF->Size = System::Drawing::Size(220, 20);
			this->dateHasta_SF->TabIndex = 9;
			// 
			// dateDesde_SF
			// 
			this->dateDesde_SF->Location = System::Drawing::Point(120, 47);
			this->dateDesde_SF->Name = L"dateDesde_SF";
			this->dateDesde_SF->Size = System::Drawing::Size(220, 20);
			this->dateDesde_SF->TabIndex = 8;
			// 
			// comboSala_SF
			// 
			this->comboSala_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboSala_SF->FormattingEnabled = true;
			this->comboSala_SF->Location = System::Drawing::Point(120, 73);
			this->comboSala_SF->Name = L"comboSala_SF";
			this->comboSala_SF->Size = System::Drawing::Size(220, 24);
			this->comboSala_SF->TabIndex = 7;
			// 
			// comboCategoria_SF
			// 
			this->comboCategoria_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboCategoria_SF->FormattingEnabled = true;
			this->comboCategoria_SF->Location = System::Drawing::Point(460, 16);
			this->comboCategoria_SF->Name = L"comboCategoria_SF";
			this->comboCategoria_SF->Size = System::Drawing::Size(220, 24);
			this->comboCategoria_SF->TabIndex = 6;
			// 
			// textPelicula_SF
			// 
			this->textPelicula_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPelicula_SF->Location = System::Drawing::Point(120, 19);
			this->textPelicula_SF->Name = L"textPelicula_SF";
			this->textPelicula_SF->Size = System::Drawing::Size(220, 22);
			this->textPelicula_SF->TabIndex = 5;
			// 
			// label5_SF
			// 
			this->label5_SF->AutoSize = true;
			this->label5_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5_SF->Location = System::Drawing::Point(20, 73);
			this->label5_SF->Name = L"label5_SF";
			this->label5_SF->Size = System::Drawing::Size(39, 16);
			this->label5_SF->TabIndex = 4;
			this->label5_SF->Text = L"Sala;";
			// 
			// label4_SF
			// 
			this->label4_SF->AutoSize = true;
			this->label4_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4_SF->Location = System::Drawing::Point(379, 47);
			this->label4_SF->Name = L"label4_SF";
			this->label4_SF->Size = System::Drawing::Size(47, 16);
			this->label4_SF->TabIndex = 3;
			this->label4_SF->Text = L"Hasta:";
			// 
			// label3_SF
			// 
			this->label3_SF->AutoSize = true;
			this->label3_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3_SF->Location = System::Drawing::Point(20, 47);
			this->label3_SF->Name = L"label3_SF";
			this->label3_SF->Size = System::Drawing::Size(52, 16);
			this->label3_SF->TabIndex = 2;
			this->label3_SF->Text = L"Desde:";
			// 
			// label2_FS
			// 
			this->label2_FS->AutoSize = true;
			this->label2_FS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_FS->Location = System::Drawing::Point(377, 19);
			this->label2_FS->Name = L"label2_FS";
			this->label2_FS->Size = System::Drawing::Size(70, 16);
			this->label2_FS->TabIndex = 1;
			this->label2_FS->Text = L"Categoría:";
			// 
			// label1_SF
			// 
			this->label1_SF->AutoSize = true;
			this->label1_SF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1_SF->Location = System::Drawing::Point(20, 20);
			this->label1_SF->Name = L"label1_SF";
			this->label1_SF->Size = System::Drawing::Size(59, 16);
			this->label1_SF->TabIndex = 0;
			this->label1_SF->Text = L"Película:";
			// 
			// nroReserva
			// 
			this->nroReserva->HeaderText = L"Nro";
			this->nroReserva->Name = L"nroReserva";
			this->nroReserva->ReadOnly = true;
			this->nroReserva->Width = 165;
			// 
			// clienteReserva
			// 
			this->clienteReserva->HeaderText = L"Cliente";
			this->clienteReserva->Name = L"clienteReserva";
			this->clienteReserva->ReadOnly = true;
			this->clienteReserva->Width = 165;
			// 
			// funcionReserva
			// 
			this->funcionReserva->HeaderText = L"Función";
			this->funcionReserva->Name = L"funcionReserva";
			this->funcionReserva->ReadOnly = true;
			this->funcionReserva->Width = 165;
			// 
			// accionVer
			// 
			this->accionVer->HeaderText = L"Ver";
			this->accionVer->Name = L"accionVer";
			this->accionVer->ReadOnly = true;
			this->accionVer->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->accionVer->Width = 55;
			// 
			// accionEditar
			// 
			this->accionEditar->HeaderText = L"Editar";
			this->accionEditar->Name = L"accionEditar";
			this->accionEditar->ReadOnly = true;
			this->accionEditar->Width = 55;
			// 
			// accionEliminar
			// 
			this->accionEliminar->HeaderText = L"Eliminar";
			this->accionEliminar->Name = L"accionEliminar";
			this->accionEliminar->ReadOnly = true;
			this->accionEliminar->Width = 55;
			// 
			// VentanaMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 540);
			this->Controls->Add(this->panelLogin);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelVerEditarReserva);
			this->Controls->Add(this->panelInicio);
			this->Controls->Add(this->panelSeleccionarFuncion);
			this->Controls->Add(this->panelAgregarCliente);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconUser))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelInicio->ResumeLayout(false);
			this->panelInicio->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoInicio))->EndInit();
			this->panelNuevaReserva->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelConfNuevaReserva->ResumeLayout(false);
			this->panelConfNuevaReserva->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seleccionarButaca))->EndInit();
			this->panelVerReservas->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridReservas))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panelConfiguracion->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPerfil))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panelAgregarCliente->ResumeLayout(false);
			this->panelAgregarCliente->PerformLayout();
			this->panelVerEditarReserva->ResumeLayout(false);
			this->panelVerEditarReserva->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelSeleccionarFuncion->ResumeLayout(false);
			this->panelSeleccionarFuncion->PerformLayout();
			this->panelPeliculas_SF->ResumeLayout(false);
			this->panelPeli->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureImgPeli))->EndInit();
			this->ResumeLayout(false);
			inicializarSistema();
		}

#pragma endregion

		public: static Cine* cine;
		private: Taquillero* usuario;

		private: System::Void inicializarSistema() {
			
			this->cine = Cine::getInstance();
			
			System::Windows::Forms::Panel^ panelReservarAsientos = gcnew PanelReservarAsientos();
			panelReservarAsientos->Location = System::Drawing::Point(110, 225);
			panelReservarAsientos->Size = System::Drawing::Size(500, 175);
			this->panelConfNuevaReserva->Controls->Add(panelReservarAsientos);
			this->inicializarImagenes();
			this->inicializarComboBoxClientes();
			this->inicializarTablaReservas();
		}
		private: System::Void inicializarTablaReservas() {
			Utils u;
			Cliente* clientes = this->cine->getTaquilla().getClientes();
			FuncionDeCine* funciones = this->cine->getTaquilla().getFunciones();
			for (int i = 0; i < Constantes::CLIENTES_MAX; i++)
			{
				Reserva* clienteReservas = clientes[i].getReservas();
				FuncionDeCine funcionAux;
				for (int j = 0; j < clientes[i].getNumReservas(); j++)
				{
					DataGridViewRow^ row = gcnew DataGridViewRow();
					DataGridViewCell^ celId = gcnew DataGridViewTextBoxCell();
					celId->Value = gcnew String(clienteReservas[j].getId().ToString());
					row->Cells->Add(celId);
					DataGridViewCell^ celCliente = gcnew DataGridViewTextBoxCell();
					celCliente->Value = gcnew String(clientes[i].getNombre()) + " " + gcnew String(clientes[i].getApellido());
					row->Cells->Add(celCliente);
					DataGridViewCell^ celPelicula = gcnew DataGridViewTextBoxCell();
					funcionAux = u.getFuncionPorId(funciones, clienteReservas[j].getNumeroFuncion());
					celPelicula->Value = gcnew String(funcionAux.getPelicula().getNombre());
					row->Cells->Add(celPelicula);
					DataGridViewCell^ celVer = gcnew DataGridViewButtonCell();
					celVer->Value = "Ver";
					row->Cells->Add(celVer);
					DataGridViewCell^ celEditar = gcnew DataGridViewButtonCell();
					celEditar->Value = "Editar";
					row->Cells->Add(celEditar);
					DataGridViewCell^ celEliminar = gcnew DataGridViewButtonCell();
					celEliminar->Value = "Eliminar";
					row->Cells->Add(celEliminar);
					this->dataGridReservas->Rows->Add(row);
				}
			}
		}
		private: System::Void inicializarComboBoxClientes() {
			Cliente* clientes = this->cine->getTaquilla().getClientes();
			Utils util;
			int can = util.cantidadClientes();
			for (int i = 0; i < can; i++)
			{
				this->comboBoxClientes->Items->Add(gcnew String(clientes[i].getNombre()) + " "
					+ gcnew String(clientes[i].getApellido()) + " - "
					+ gcnew String(clientes[i].getNumeroDocumento()));
			}
		}
		private: System::Void inicializarImagenes() {
			this->iconLogin->Image = Image::FromFile(L"icon.jpg");
			this->logoInicio->Image = Image::FromFile(L"logo.jpg");
			// this->iconUser->Image = Image::FromFile(L"icon_user.png");
			this->seleccionarButaca->Image = Image::FromFile(L"reserva_asientos.jpg");
			// this->imgPerfil->Image = Image::FromFile(L"icon_user.png");
		}
		private: System::Void inicializarInfoUsuario() {
			this->iconUser->Image = Image::FromFile(gcnew String(this->usuario->getRutaImg()));
			this->imgPerfil->Image = Image::FromFile(gcnew String(this->usuario->getRutaImg()));
			this->labelNomUsuario->Text = gcnew String(this->usuario->getNombre());
		}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		Taquillero* t = this->cine->getTaquilla().getTaquilleros();
		bool found = false;
		for (int i = 0; i < Constantes::TAQUILLEROS_MAX; i++)
		{
			if (this->textBoxUsuario->Text == gcnew String(t[i].getUsuario()) &&
				this->textBoxPwd->Text == gcnew String(t[i].getPassword()))
			{
				found = true;
				this->usuario = &t[i];
				inicializarInfoUsuario();
				break;
			}
		}
		if (found) {
			this->textBoxUsuario->Text = "";
			this->textBoxPwd->Text = "";
			this->panelLogin->Visible = false;
			this->panelNuevaReserva->Visible = false;
			this->panelVerReservas->Visible = false;
			this->panelConfiguracion->Visible = false;
			this->panelInicio->Visible = true;
			this->panelMenu->Visible = true;
		}
		else
		{
			Constantes::showMessage("Usuario no autorizado.");
		}
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
private: System::Void btnAgregarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarCliente ^ viewlog = gcnew AgregarCliente();
	viewlog->ShowDialog();
	//MessageBox::Show("Agregar cliente");
}
private: System::Void btnSeleccionarFuncion_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFuncion ^ modal = gcnew SeleccionarFuncion();
	modal->ShowDialog();
	//MessageBox::Show("Seleccionar función");
}
private: System::Void btnGuardarReserva_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Reserva guardada.");
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
MessageBox::Show("Buscando");
}
private: System::Void btnGuardar_AgregarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Hola mundo...");
	/*Utils util;
	int tipoDoc = 1;
	String^ nroDocAux = textNumDocumento_AC->Text;
	std::string nroDoc = util.getTextBox(nroDocAux);
	String^ nombresAux = textNumDocumento_AC->Text;
	std::string nombres = util.getTextBox(nombresAux);
	String^ apellidosAux = textNumDocumento_AC->Text;
	std::string apellidos = util.getTextBox(apellidosAux);
	String^ direccionAux = textNumDocumento_AC->Text;
	std::string direccion = util.getTextBox(direccionAux);
	String^ emailAux = textNumDocumento_AC->Text;
	std::string email = util.getTextBox(emailAux);
	
	util.agregarCliente(tipoDoc, nroDoc, nombres, apellidos, direccion, email, 0);*/
}
};
}
