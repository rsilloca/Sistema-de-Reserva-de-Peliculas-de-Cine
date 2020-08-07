#pragma once
#include "Constantes.h"
#include "Butaca.h"
#include <stdlib.h>

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
		PanelReservarAsientos(bool h)
		{
			this->habilitado = h;
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
		Button^** asientosBtns;
		bool habilitado;
		System::ComponentModel::Container^ components;
		//Arreglo de Butacas
		Butaca* butacasSelccionadas = (Butaca*)malloc(50 * sizeof(Butaca));
		//Cantidad de Butacas llenas
		int numButacasLlenas;
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			this->Size = System::Drawing::Size(500, 175);
			int width = 50;
			int height = 30;
			char* letras[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
			asientosBtns = (Button^**)malloc(Constantes::BUTACAS_FILAS * sizeof(Button^*));
			for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
			{
				asientosBtns[i] = (Button^*)malloc(Constantes::BUTACAS_COLUMNAS * sizeof(Button^));
				for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
				{
					asientosBtns[i][j] = (gcnew System::Windows::Forms::Button());
					asientosBtns[i][j]->Location = System::Drawing::Point(width * j, height * i);
					asientosBtns[i][j]->Size = System::Drawing::Size(width, height);
					asientosBtns[i][j]->BackColor = System::Drawing::Color::White;
					asientosBtns[i][j]->Text = String::Concat(gcnew String(letras[i]), j + 1);
					asientosBtns[i][j]->Enabled = this->habilitado;
					asientosBtns[i][j]->Click += gcnew System::EventHandler(this, &PanelReservarAsientos::clickAsiento);
					this->Controls->Add(asientosBtns[i][j]);
				}
			}
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void clickAsiento(System::Object^ sender, System::EventArgs^ e){
			System::Windows::Forms::Button^ aux = (System::Windows::Forms::Button^)sender;
			if (aux->BackColor == System::Drawing::Color::White) {
				aux->BackColor = System::Drawing::Color::Yellow;
				Utils u;
				String^ numButaca = aux->Text;
				std::string str = u.getTextBox(numButaca);
				int numl, numn;
				if (str.substr(0, 1) == "A")
					numl = 1;
				else if (str.substr(0, 1) =="B")
					numl = 2;
				else if (str.substr(0, 1) == "C")
					numl = 3;
				else if (str.substr(0, 1) == "D")
					numl = 4;
				else if (str.substr(0, 1) == "E")
					numl = 5;
				numn = atoi(str.substr(1).c_str());
				Butaca butacaAux;
				butacaAux.setOcupado(true);
				butacaAux.setColumna(numn);
				butacaAux.setFila(numl);
				//MessageBox::Show("letra " + numl + " num " + numn);
				butacasSelccionadas[numButacasLlenas] = butacaAux;
				//Imprimir mensaje de la butaca seleccionada (No funciona bien)
				/*Butaca but = *(butacasSelccionadas + numButacasLlenas);
				String^ mensaje = "Numero de columna seleccionada: " + but.getColumna() + "Numero de fila seleccionada: " + but.getFila() + "Estado del aciento: " + but.getOcupado();
				char* men = new char;
				for (int i = 0; i < mensaje->Length; i++) {
					*(men + i) = mensaje[i];
				}
				Constantes::showMessage(men);*/
				numButacasLlenas++;
			}
			else {
				aux->BackColor = System::Drawing::Color::White;
			}
		}

	public: Butaca* getButacasSeleccionadas() {
		return this->butacasSelccionadas;
	}

	public: int getNumButacasSeleccionadas() {
		return this->numButacasLlenas;
	}

	public: void setAsientoOcupado(int fila, int columna)
	{
		this->asientosBtns[fila][columna]->BackColor = System::Drawing::Color::Yellow;
	}

	public: void clear()
	{
		for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
		{
			for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
			{
				this->asientosBtns[i][j]->BackColor = System::Drawing::Color::White;
			}
		}
	}

	public: void inhabilitarAsientos()
	{
		for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
		{
			for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
			{
				this->asientosBtns[i][j]->Enabled = false;
			}
		}
	}

	public: void habilitarAsientos()
	{
		for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
		{
			for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
			{
				this->asientosBtns[i][j]->Enabled = true;
			}
		}
	}

	};
}