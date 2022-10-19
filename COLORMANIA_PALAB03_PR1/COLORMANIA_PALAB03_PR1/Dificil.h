#pragma once

namespace COLORMANIAPALAB03PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Dificil
	/// </summary>
	public ref class Dificil : public System::Windows::Forms::Form
	{
	public:
		Dificil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		array<String^>^ Arreglopos3;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Dificil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBoxPrueba3;

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
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBoxPrueba3 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar archivo de texto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dificil::button1_Click);
			// 
			// listBoxPrueba3
			// 
			this->listBoxPrueba3->FormattingEnabled = true;
			this->listBoxPrueba3->ItemHeight = 16;
			this->listBoxPrueba3->Location = System::Drawing::Point(68, 192);
			this->listBoxPrueba3->Name = L"listBoxPrueba3";
			this->listBoxPrueba3->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba3->TabIndex = 1;
			// 
			// Dificil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->listBoxPrueba3);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Dificil";
			this->Text = L"Dificil";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog3->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog3->FileName);

			if (InputStream != nullptr) {

				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = ',';
					Arreglopos3 = lineOfText->Split(separador);
					for (int i = 0; i < Arreglopos3->Length; i++) {
						MessageBox::Show(Arreglopos3[i]);
						listBoxPrueba3->Items->Add(Arreglopos3[i]);
					}

				}
				InputStream->Close();





			}

		}

	}
	};
}
