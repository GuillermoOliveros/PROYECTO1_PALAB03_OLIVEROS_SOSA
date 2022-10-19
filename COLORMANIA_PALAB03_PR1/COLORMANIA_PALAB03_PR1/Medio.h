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
	/// Resumen de Medio
	/// </summary>
	public ref class Medio : public System::Windows::Forms::Form
	{
	public:
		Medio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::ListBox^ listBoxPrueba2;
	public:
		array<String^>^ Arreglopos2;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Medio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBoxPrueba2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar archivo de texto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Medio::button1_Click);
			// 
			// listBoxPrueba2
			// 
			this->listBoxPrueba2->FormattingEnabled = true;
			this->listBoxPrueba2->ItemHeight = 16;
			this->listBoxPrueba2->Location = System::Drawing::Point(53, 203);
			this->listBoxPrueba2->Name = L"listBoxPrueba2";
			this->listBoxPrueba2->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba2->TabIndex = 1;
			// 
			// Medio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->listBoxPrueba2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Medio";
			this->Text = L"Medio";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog2->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog2->FileName);

			if (InputStream != nullptr) {

				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = ',';
					Arreglopos2 = lineOfText->Split(separador);
					for (int i = 0; i < Arreglopos2->Length; i++) {
						MessageBox::Show(Arreglopos2[i]);
						listBoxPrueba2->Items->Add(Arreglopos2[i]);
					}

				}
				InputStream->Close();





			}
		}
	}
	};
}
