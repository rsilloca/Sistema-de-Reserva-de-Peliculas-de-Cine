#pragma once

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
		VerEditarReserva(void)
		{
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
	private: System::Windows::Forms::Panel^ panelVerEditarReserva;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panelVerEditarReserva = (gcnew System::Windows::Forms::Panel());

			this->panelVerEditarReserva->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAgregarCliente
			//
			this->panelVerEditarReserva->Location = System::Drawing::Point(0, 0);
			this->panelVerEditarReserva->Name = L"panelAgregarCliente";
			this->panelVerEditarReserva->Size = System::Drawing::Size(500, 285);
			this->panelVerEditarReserva->TabIndex = 14;
			//
			// Ventana Main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 500);
			this->Controls->Add(this->panelVerEditarReserva);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ModalSeleccionarFuncion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Seleccionar Función";
			this->panelVerEditarReserva->ResumeLayout(false);
			this->panelVerEditarReserva->PerformLayout();
			this->ResumeLayout(false);

		}
	};
}
