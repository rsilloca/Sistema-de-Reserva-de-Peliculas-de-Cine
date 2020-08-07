#pragma once
#include "Cliente.h"
#include "PanelReservarAsientos.h"
#include "Reserva.h"
#include "Pelicula.h"
#include "Butaca.h"

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class VerEditarReserva : public System::Windows::Forms::Form
	{
	public:
		VerEditarReserva(Cliente* c, Reserva* r, bool editar)
		{
			this->cliente = c;
			this->reserva = r;
			this->esEditar = editar;
			InitializeComponent();
		}

	protected:
		~VerEditarReserva()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Cliente* cliente;
	private: Reserva* reserva;
	private: bool esEditar;

	private: System::Windows::Forms::Panel^ panelVerEditarReserva;
	private: System::Windows::Forms::Panel^ panelReservarAsientos;
	private: System::Windows::Forms::Label^ vrLabel5;

	private: System::Windows::Forms::Label^ vrLabel4;


	private: System::Windows::Forms::Label^ vrLabel3;

	private: System::Windows::Forms::Label^ vrLabel2;
	private: System::Windows::Forms::PictureBox^ vrImgPelicula;


	private: System::Windows::Forms::TextBox^ vrTextButacas;


	private: System::Windows::Forms::TextBox^ vrTextSala;


	private: System::Windows::Forms::TextBox^ vrTextFecha;


	private: System::Windows::Forms::TextBox^ vrTextPelicula;


	private: System::Windows::Forms::ComboBox^ vrComboBoxCliente;


	private: System::Windows::Forms::Label^ vrLabel1;

	private: System::Windows::Forms::Button^ vrBtnGuardar;

	private: System::Windows::Forms::Button^ vrBtnCancelar;

	private: System::Windows::Forms::PictureBox^ vrImgTv;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panelVerEditarReserva = (gcnew System::Windows::Forms::Panel());
			this->vrLabel5 = (gcnew System::Windows::Forms::Label());
			this->vrLabel4 = (gcnew System::Windows::Forms::Label());
			this->vrLabel3 = (gcnew System::Windows::Forms::Label());
			this->vrLabel2 = (gcnew System::Windows::Forms::Label());
			this->vrImgPelicula = (gcnew System::Windows::Forms::PictureBox());
			this->vrTextButacas = (gcnew System::Windows::Forms::TextBox());
			this->vrTextSala = (gcnew System::Windows::Forms::TextBox());
			this->vrTextFecha = (gcnew System::Windows::Forms::TextBox());
			this->vrTextPelicula = (gcnew System::Windows::Forms::TextBox());
			this->vrComboBoxCliente = (gcnew System::Windows::Forms::ComboBox());
			this->vrLabel1 = (gcnew System::Windows::Forms::Label());
			this->vrImgTv = (gcnew System::Windows::Forms::PictureBox());
			this->vrBtnCancelar = (gcnew System::Windows::Forms::Button());
			this->vrBtnGuardar = (gcnew System::Windows::Forms::Button());

			this->panelVerEditarReserva->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vrImgPelicula))->BeginInit();
			this->SuspendLayout();
			// 
			// panelVerEditarReserva
			// 
			this->panelVerEditarReserva->Controls->Add(this->vrBtnGuardar);
			this->panelVerEditarReserva->Controls->Add(this->vrBtnCancelar);
			this->panelVerEditarReserva->Controls->Add(this->vrImgTv);
			// this->panelVerEditarReserva->Controls->Add(this->vrLabel5);
			this->panelVerEditarReserva->Controls->Add(this->vrLabel4);
			this->panelVerEditarReserva->Controls->Add(this->vrLabel3);
			this->panelVerEditarReserva->Controls->Add(this->vrLabel2);
			this->panelVerEditarReserva->Controls->Add(this->vrImgPelicula);
			// this->panelVerEditarReserva->Controls->Add(this->vrTextButacas);
			this->panelVerEditarReserva->Controls->Add(this->vrTextSala);
			this->panelVerEditarReserva->Controls->Add(this->vrTextFecha);
			this->panelVerEditarReserva->Controls->Add(this->vrTextPelicula);
			this->panelVerEditarReserva->Controls->Add(this->vrComboBoxCliente);
			this->panelVerEditarReserva->Controls->Add(this->vrLabel1);
			this->panelVerEditarReserva->Location = System::Drawing::Point(0, 0);
			this->panelVerEditarReserva->Name = L"panelVerEditarReserva";
			this->panelVerEditarReserva->Size = System::Drawing::Size(540, 520);
			this->panelVerEditarReserva->TabIndex = 3;
			// 
			// vrLabel5
			// 
			/*this->vrLabel5->AutoSize = true;
			this->vrLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vrLabel5->Location = System::Drawing::Point(20, 141);
			this->vrLabel5->Name = L"vrLabel5";
			this->vrLabel5->Size = System::Drawing::Size(60, 16);
			this->vrLabel5->TabIndex = 10;
			this->vrLabel5->Text = L"Butacas:";*/
			// 
			// vrLabel4
			// 
			this->vrLabel4->AutoSize = true;
			this->vrLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vrLabel4->Location = System::Drawing::Point(20, 141); // 112
			this->vrLabel4->Name = L"vrLabel4";
			this->vrLabel4->Size = System::Drawing::Size(39, 16);
			this->vrLabel4->TabIndex = 9;
			this->vrLabel4->Text = L"Sala:";
			// 
			// vrLabel3
			// 
			this->vrLabel3->AutoSize = true;
			this->vrLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vrLabel3->Location = System::Drawing::Point(20, 101);
			this->vrLabel3->Name = L"vrLabel3";
			this->vrLabel3->Size = System::Drawing::Size(49, 16);
			this->vrLabel3->TabIndex = 8;
			this->vrLabel3->Text = L"Fecha:";
			// 
			// vrLabel2
			// 
			this->vrLabel2->AutoSize = true;
			this->vrLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vrLabel2->Location = System::Drawing::Point(20, 61);
			this->vrLabel2->Name = L"vrLabel2";
			this->vrLabel2->Size = System::Drawing::Size(59, 16);
			this->vrLabel2->TabIndex = 7;
			this->vrLabel2->Text = L"Película:";
			// 
			// vrImgPelicula
			// 
			this->vrImgPelicula->Location = System::Drawing::Point(420, 20);
			this->vrImgPelicula->Name = L"vrImgPelicula";
			this->vrImgPelicula->Size = System::Drawing::Size(100, 140);
			this->vrImgPelicula->TabIndex = 6;
			this->vrImgPelicula->TabStop = false;
			// 
			// vrTextButacas
			// 
			/*this->vrTextButacas->Location = System::Drawing::Point(101, 140);
			this->vrTextButacas->Name = L"vrTextButacas";
			this->vrTextButacas->Size = System::Drawing::Size(301, 20);
			this->vrTextButacas->TabIndex = 5;*/
			// 
			// vrTextSala
			// 
			this->vrTextSala->Location = System::Drawing::Point(101, 140);
			this->vrTextSala->Name = L"vrTextSala";
			this->vrTextSala->Size = System::Drawing::Size(301, 20);
			this->vrTextSala->TabIndex = 4;
			// 
			// vrTextFecha
			// 
			this->vrTextFecha->Location = System::Drawing::Point(101, 100);
			this->vrTextFecha->Name = L"vrTextFecha";
			this->vrTextFecha->Size = System::Drawing::Size(301, 20);
			this->vrTextFecha->TabIndex = 3;
			// 
			// vrTextPelicula
			// 
			this->vrTextPelicula->Location = System::Drawing::Point(101, 60);
			this->vrTextPelicula->Name = L"vrTextPelicula";
			this->vrTextPelicula->Size = System::Drawing::Size(301, 20);
			this->vrTextPelicula->TabIndex = 2;
			// 
			// vrComboBoxCliente
			// 
			this->vrComboBoxCliente->FormattingEnabled = true;
			this->vrComboBoxCliente->Location = System::Drawing::Point(101, 20);
			this->vrComboBoxCliente->Name = L"vrComboBoxCliente";
			this->vrComboBoxCliente->Size = System::Drawing::Size(301, 21);
			this->vrComboBoxCliente->TabIndex = 1;
			// 
			// vrLabel1
			// 
			this->vrLabel1->AutoSize = true;
			this->vrLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vrLabel1->Location = System::Drawing::Point(20, 20);
			this->vrLabel1->Name = L"vrLabel1";
			this->vrLabel1->Size = System::Drawing::Size(52, 16);
			this->vrLabel1->TabIndex = 0;
			this->vrLabel1->Text = L"Cliente:";
			// 
			// vrImgTv
			// 
			this->vrImgTv->Location = System::Drawing::Point(20, 185);
			this->vrImgTv->Name = L"vrImgTv";
			this->vrImgTv->Size = System::Drawing::Size(500, 125);
			this->vrImgTv->TabIndex = 11;
			this->vrImgTv->TabStop = false;
			this->vrImgTv->Image = Image::FromFile(L"reserva_asientos.jpg");
			// 
			// vrBtnCancelar
			// 
			this->vrBtnCancelar->Location = System::Drawing::Point(20, 486);
			this->vrBtnCancelar->Name = L"vrBtnCancelar";
			this->vrBtnCancelar->Size = System::Drawing::Size(245, 23);
			this->vrBtnCancelar->TabIndex = 13;
			this->vrBtnCancelar->Text = L"CANCELAR";
			this->vrBtnCancelar->UseVisualStyleBackColor = true;
			// 
			// vrBtnGuardar
			// 
			this->vrBtnGuardar->Location = System::Drawing::Point(275, 486);
			this->vrBtnGuardar->Name = L"vrBtnGuardar";
			this->vrBtnGuardar->Size = System::Drawing::Size(245, 23);
			this->vrBtnGuardar->TabIndex = 14;
			this->vrBtnGuardar->Text = L"GUARDAR CAMBIOS";
			this->vrBtnGuardar->UseVisualStyleBackColor = true;
			//
			//Asientos
			//
			panelReservarAsientos = gcnew PanelReservarAsientos(this->esEditar);
			panelReservarAsientos->Location = System::Drawing::Point(20, 310);
			panelReservarAsientos->Size = System::Drawing::Size(500, 175);
			this->panelVerEditarReserva->Controls->Add(panelReservarAsientos);
			//
			// Ventana Main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 520);
			this->Controls->Add(this->panelVerEditarReserva);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ModalVerEditarReserva";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ver - Editar Reserva";
			this->panelVerEditarReserva->ResumeLayout(false);
			this->panelVerEditarReserva->PerformLayout();
			this->ResumeLayout(false);
			inicializarDatos();
			if (!this->esEditar)
			{
				bloquearControles();
			}
		}

		void inicializarDatos()
		{
			Utils u;
			Pelicula* pelis = u.getListaPelicula();
			FuncionDeCine* funciones = u.getListaFuncionDeCine(pelis);
			FuncionDeCine fun = u.getFuncionPorId(funciones, reserva->getNumeroFuncion());
			this->vrComboBoxCliente->Text = gcnew String(cliente->getNombre()) + " " + gcnew String(cliente->getApellido());
			this->vrTextPelicula->Text = gcnew String(fun.getPelicula().getNombre());
			int dia = fun.getFecha().getDia();
			int mes = fun.getFecha().getMes();
			int anio = fun.getFecha().getAnio();
			int hora = fun.getFecha().getHora().getHoras();
			int min = fun.getFecha().getHora().getMinutos();
			this->vrTextFecha->Text = gcnew String(dia + "/" + mes + "/" + anio + " " + hora + ":" + min);
			this->vrTextSala->Text = "3D";
			Butaca* butacas = reserva->getButacasReservadas();
			for (int i = 0; i < reserva->getCantidadButacas(); i++)
			{
				((PanelReservarAsientos^)this->panelReservarAsientos)->setAsientoOcupado(butacas[i].getFila(), butacas[i].getColumna());
			}
			this->vrTextButacas->Text = "numeros";
			this->vrImgPelicula->Image = Image::FromFile(gcnew String(fun.getPelicula().getNombreImg()));
		}

		void bloquearControles()
		{
			this->vrComboBoxCliente->Enabled = false;
			this->vrTextPelicula->Enabled = false;
			this->vrTextFecha->Enabled = false;
			this->vrTextSala->Enabled = false;
			// ((PanelReservarAsientos^) this->panelReservarAsientos)->inhabilitarAsientos();
		}
	};
}
