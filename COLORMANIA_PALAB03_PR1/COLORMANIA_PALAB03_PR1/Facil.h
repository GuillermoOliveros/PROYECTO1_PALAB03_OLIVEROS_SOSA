#pragma once
#include "color1.h"
#include <string.h>
#include <string>

namespace COLORMANIAPALAB03PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Facil
	/// </summary>
	public ref class Facil : public System::Windows::Forms::Form
	{
		array<color1^>^ posicionesArreglo;
	public:
		Facil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
		}
		array<String^>^ Arreglopos;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Facil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ListBox^ listBoxPrueba;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBoxPrueba = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(375, 202);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"besos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(361, 160);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"like your mom";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ingresar archivo de texto ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Facil::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBoxPrueba
			// 
			this->listBoxPrueba->FormattingEnabled = true;
			this->listBoxPrueba->ItemHeight = 16;
			this->listBoxPrueba->Location = System::Drawing::Point(23, 202);
			this->listBoxPrueba->Name = L"listBoxPrueba";
			this->listBoxPrueba->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba->TabIndex = 3;
			// 
			// Facil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->listBoxPrueba);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Facil";
			this->Text = L"Facil";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog1->FileName);
			
			if (InputStream != nullptr) {
				
				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = ',';
					Arreglopos = lineOfText->Split(separador);
					for (int i = 0; i < Arreglopos->Length; i++) {
						MessageBox::Show(Arreglopos[i]);
						listBoxPrueba->Items->Add(Arreglopos[i]);
					}
					
				}
				InputStream->Close();
				
				



			}
		}
	}
	};
}
