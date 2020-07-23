#pragma once
#include "Constantes.h"

namespace WinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PanelReservarAsientos : public System::Windows::Forms::Panel
	{

	public:
		PanelReservarAsientos(void)
		{
			InitializeComponent();
		}

	protected:
		~PanelReservarAsientos()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			this->SuspendLayout();
			this->Size = System::Drawing::Size(500, 175);
			int width = 50;
			int height = 30;
			char* letras[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
			for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
			{
				for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
				{
					System::Windows::Forms::Button^ aux = (gcnew System::Windows::Forms::Button());
					aux->Location = System::Drawing::Point(width * j, height * i);
					aux->Size = System::Drawing::Size(width, height);
					aux->BackColor = System::Drawing::Color::White;
					aux->Text = String::Concat(gcnew String(letras[i]), j + 1);
					aux->Click += gcnew System::EventHandler(this, &PanelReservarAsientos::clickAsiento);
					this->Controls->Add(aux);
				}
			}
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void clickAsiento(System::Object^ sender, System::EventArgs^ e){
			System::Windows::Forms::Button^ aux = (System::Windows::Forms::Button^)sender;
			if (aux->BackColor == System::Drawing::Color::White) {
				aux->BackColor = System::Drawing::Color::Yellow;
			}
			else {
				aux->BackColor = System::Drawing::Color::White;
			}
		}

	};

}