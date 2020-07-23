#pragma once
#include "FuncionDeCine.h"

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PanelViewFuncionDeCine : public System::Windows::Forms::Panel
	{

	public:
		PanelViewFuncionDeCine(FuncionDeCine* f)
		{
			this->funcion = f;
			InitializeComponent();
		}

	protected:
		~PanelViewFuncionDeCine()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ fechaFuncion;
	private: System::Windows::Forms::Label^ salaFuncion;
	private: System::Windows::Forms::Label^ tituloPelicula;
	private: System::Windows::Forms::PictureBox^ pictureImgPelicula;

	private:
		FuncionDeCine* funcion;
		System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			this->tituloPelicula = (gcnew System::Windows::Forms::Label());
			this->salaFuncion = (gcnew System::Windows::Forms::Label());
			this->fechaFuncion = (gcnew System::Windows::Forms::Label());
			this->pictureImgPelicula = (gcnew System::Windows::Forms::PictureBox());

			this->SuspendLayout();
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->Size = System::Drawing::Size(100, 210);
			this->BackColor = System::Drawing::Color::MistyRose;
			this->Controls->Add(this->pictureImgPelicula);
			this->Controls->Add(this->fechaFuncion);
			this->Controls->Add(this->salaFuncion);
			this->Controls->Add(this->tituloPelicula);
			this->Name = gcnew String(this->funcion->getId() + "");
			this->ResumeLayout(false);
			this->PerformLayout();

			// 
			// tituloPelicula
			// 
			this->tituloPelicula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tituloPelicula->ForeColor = System::Drawing::Color::Black;
			this->tituloPelicula->Location = System::Drawing::Point(0, 140);
			this->tituloPelicula->Name = L"tituloPelicula";
			this->tituloPelicula->Size = System::Drawing::Size(100, 40);
			this->tituloPelicula->Text = gcnew String(this->funcion->getPelicula().getNombre());
			this->tituloPelicula->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// salaFuncion
			// 
			this->salaFuncion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salaFuncion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->salaFuncion->Location = System::Drawing::Point(0, 180);
			this->salaFuncion->Name = L"salaFuncion";
			this->salaFuncion->Size = System::Drawing::Size(100, 13);
			this->salaFuncion->Text = gcnew String("Sala" + this->funcion->getNumeroSala() + "D");
			this->salaFuncion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fechaFuncion
			// 
			this->fechaFuncion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fechaFuncion->Location = System::Drawing::Point(0, 194);
			this->fechaFuncion->Name = L"fechaFuncion";
			this->fechaFuncion->Size = System::Drawing::Size(100, 13);
			int dia = this->funcion->getFecha().getDia();
			int mes = this->funcion->getFecha().getMes();
			int anio = this->funcion->getFecha().getAnio();
			int hora = this->funcion->getFecha().getHora().getHoras();
			int min = this->funcion->getFecha().getHora().getMinutos();
			this->fechaFuncion->Text = gcnew String(dia + "/" + mes + "/" + anio + " " + hora + ":" + min);
			this->fechaFuncion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureImgPelicula
			// 
			this->pictureImgPelicula->BackColor = System::Drawing::Color::Salmon;
			this->pictureImgPelicula->Location = System::Drawing::Point(0, 0);
			this->pictureImgPelicula->Name = L"pictureImgPelicula";
			this->pictureImgPelicula->Size = System::Drawing::Size(100, 140);
			this->pictureImgPelicula->TabStop = false;
			MessageBox::Show(gcnew String("" + this->funcion->getPelicula().getId()));
			//this->pictureImgPelicula->Image = Image::FromFile(gcnew String(this->funcion->getPelicula().getNombreImg()));
		}

	public: void setBackColor(System::Drawing::Color color) {
		this->BackColor = color;
	}

	public: int getIdFuncion() {
		return this->funcion->getId();
	}

	};

}
