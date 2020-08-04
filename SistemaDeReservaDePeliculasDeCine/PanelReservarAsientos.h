#pragma once
#include "Constantes.h"
#include "Butaca.h"

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
		//Arreglo de Butacas
		Butaca* butacasSelccionadas = new Butaca;
		//Cantidad de Butacas llenas
		int numButacasLlenas;
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
				String^ numButaca = aux->Text;
				char* letra = new char;
				char* numero = new char;
				letra[0] = numButaca[0];
				numero[0] = numButaca[1];
				int numl, numn;
				if (letra[0].Equals("A"))
					numl = 1;
				else if (letra[0].Equals("B"))
					numl = 2;
				else if (letra[0].Equals("C"))
					numl = 3;
				else if (letra[0].Equals("D"))
					numl = 4;
				else if (letra[0].Equals("E"))
					numl = 5;
				numn = numero[0] - '0';
				Butaca butacaAux;
				butacaAux.setOcupado("true");
				butacaAux.setColumna(numl);
				butacaAux.setFila(numn);
				*(butacasSelccionadas + numButacasLlenas) = butacaAux;
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
				String^ numButaca = aux->Text;
				char* letra = new char;
				char* numero = new char;
				letra[0] = numButaca[0];
				numero[0] = numButaca[1];
				int numl, numn;
				if (letra[0].Equals("A"))
					numl = 1;
				else if (letra[0].Equals("B"))
					numl = 2;
				else if (letra[0].Equals("C"))
					numl = 3;
				else if (letra[0].Equals("D"))
					numl = 4;
				else if (letra[0].Equals("E"))
					numl = 5;
				numn = numero[0] - '0';
				Butaca butacaAux;
				butacaAux.setOcupado("true");
				butacaAux.setColumna(numl);
				butacaAux.setFila(numn);
				
				for (int i = 0; i < numButacasLlenas; i++) {
					Butaca but = *(butacasSelccionadas + i);
					if (but.getColumna() == butacaAux.getColumna()) {
						if (but.getFila() == butacaAux.getFila()) {
							if (but.getOcupado() == butacaAux.getOcupado()) {
								while (i < numButacasLlenas) {
									*(butacasSelccionadas + i) = *(butacasSelccionadas + i + 1);
								}
							}
						}
					}
				}
				numButacasLlenas--;
			}
		}

	};
}