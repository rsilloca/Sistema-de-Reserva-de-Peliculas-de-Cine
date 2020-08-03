#pragma once
#include "Cine.h"
#include "Taquilla.h"
#include "FuncionDeCine.h"
#include "Pelicula.h"
#include "ViewFuncionDeCine.h"
#include "VentanaMain.h"
#include "Utils.h"
#include "Constantes.h"

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SeleccionarFuncion : public System::Windows::Forms::Form
	{
	public:
		SeleccionarFuncion(void)
		{
			InitializeComponent();
		}

	protected:
		~SeleccionarFuncion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelSeleccionarFuncion;
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

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panelSeleccionarFuncion = (gcnew System::Windows::Forms::Panel());
			this->panelPeliculas_SF = (gcnew System::Windows::Forms::Panel());
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

			this->panelSeleccionarFuncion->SuspendLayout();
			this->SuspendLayout();
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
			this->panelSeleccionarFuncion->TabIndex = 24;
			// 
			// panelPeliculas_SF
			// 
			this->panelPeliculas_SF->BackColor = System::Drawing::SystemColors::Window;
			this->panelPeliculas_SF->Location = System::Drawing::Point(20, 114);
			this->panelPeliculas_SF->Name = L"panelPeliculas_SF";
			this->panelPeliculas_SF->Size = System::Drawing::Size(660, 330);
			this->panelPeliculas_SF->AutoScroll = true;
			this->panelPeliculas_SF->TabIndex = 13;
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
			// Ventana Main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 500);
			this->Controls->Add(this->panelSeleccionarFuncion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ModalSeleccionarFuncion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Seleccionar Función";
			this->panelSeleccionarFuncion->ResumeLayout(false);
			this->panelSeleccionarFuncion->PerformLayout();
			this->ResumeLayout(false);

			//Agregar Funciones de Cine
			/*Cine* current = Cine::getInstance();
			Taquilla t = current->getTaquilla();*/
			//Cine* current = VentanaMain::cine;
			Utils u;
			Pelicula* peliculas = u.getListaPelicula();
			FuncionDeCine* funciones = u.getListaFuncionDeCine(peliculas); //current->getTaquilla().getFunciones();
			int width = 100;
			int height = 210;
			int nivel;
			for (int i = 0; i < Constantes::FUNCIONES_MAX; i++)
			{
				nivel = i / 5;
				System::Windows::Forms::Panel^ viewFuncion = gcnew PanelViewFuncionDeCine(&funciones[i]);
				int x = 30 + (width * (i%5)) + (20 * (i % 5));
				int y = 20 + (nivel * height) + (20 * nivel);
				viewFuncion->Location = System::Drawing::Point(x, y);
				viewFuncion->Click += gcnew System::EventHandler(this, &SeleccionarFuncion::clickFuncion);
				this->panelPeliculas_SF->Controls->Add(viewFuncion);
			}
		}

		void clickFuncion(System::Object^ sender, System::EventArgs^ e) {
			PanelViewFuncionDeCine^ aux = (PanelViewFuncionDeCine^)sender;
			aux->setBackColor(Color::Yellow);
			MessageBox::Show(aux->getIdFuncion() + "");
		}

	};
}
