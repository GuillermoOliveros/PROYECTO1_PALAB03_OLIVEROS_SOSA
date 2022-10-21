#pragma once
#include "Medio.h"
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ segundos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ minutos;
	private: System::Windows::Forms::Button^ btnEmpeza;
	private: System::Windows::Forms::Timer^ tiempo;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	public:
		array<String^>^ Arreglopos2;
		array<String^>^ arregloMedio;
		array<String^>^ arregloMedio2;
		array<String^>^ arregloMedio3;
		array<String^>^ arregloMovimiento2;
	private: System::Windows::Forms::TextBox^ txtMedio;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
		   array<String^>^ arregloMedio4;
		
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
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Medio::typeid));
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBoxPrueba2 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->segundos = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->minutos = (gcnew System::Windows::Forms::Label());
			this->btnEmpeza = (gcnew System::Windows::Forms::Button());
			this->tiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMedio = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 327);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar archivo de texto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Medio::button1_Click);
			// 
			// listBoxPrueba2
			// 
			this->listBoxPrueba2->FormattingEnabled = true;
			this->listBoxPrueba2->ItemHeight = 16;
			this->listBoxPrueba2->Location = System::Drawing::Point(542, 76);
			this->listBoxPrueba2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBoxPrueba2->Name = L"listBoxPrueba2";
			this->listBoxPrueba2->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(597, 26);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L":";
			// 
			// segundos
			// 
			this->segundos->AutoSize = true;
			this->segundos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->segundos->Location = System::Drawing::Point(611, 12);
			this->segundos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->segundos->Name = L"segundos";
			this->segundos->Size = System::Drawing::Size(51, 36);
			this->segundos->TabIndex = 12;
			this->segundos->Text = L"00";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(464, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// minutos
			// 
			this->minutos->AutoSize = true;
			this->minutos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minutos->Location = System::Drawing::Point(548, 12);
			this->minutos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minutos->Name = L"minutos";
			this->minutos->Size = System::Drawing::Size(51, 36);
			this->minutos->TabIndex = 10;
			this->minutos->Text = L"00";
			// 
			// btnEmpeza
			// 
			this->btnEmpeza->Location = System::Drawing::Point(216, 327);
			this->btnEmpeza->Margin = System::Windows::Forms::Padding(4);
			this->btnEmpeza->Name = L"btnEmpeza";
			this->btnEmpeza->Size = System::Drawing::Size(221, 34);
			this->btnEmpeza->TabIndex = 14;
			this->btnEmpeza->Text = L"Empieza!";
			this->btnEmpeza->UseVisualStyleBackColor = true;
			this->btnEmpeza->Click += gcnew System::EventHandler(this, &Medio::btnEmpeza_Click);
			// 
			// tiempo
			// 
			this->tiempo->Interval = 1000;
			this->tiempo->Tick += gcnew System::EventHandler(this, &Medio::tiempo_Tick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView2->Location = System::Drawing::Point(41, 37);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(396, 236);
			this->dataGridView2->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Pila 1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Pila 2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Pila 3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Pila 4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// txtMedio
			// 
			this->txtMedio->Location = System::Drawing::Point(483, 303);
			this->txtMedio->Name = L"txtMedio";
			this->txtMedio->Size = System::Drawing::Size(155, 22);
			this->txtMedio->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(483, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 35);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Ingresar movimiento ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Medio::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(542, 165);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 84);
			this->listBox1->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(461, 270);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Cantidad de movimientos:";
			// 
			// Medio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Orange;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtMedio);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnEmpeza);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->segundos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->minutos);
			this->Controls->Add(this->listBoxPrueba2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Medio";
			this->Text = L"Medio";
			this->Load += gcnew System::EventHandler(this, &Medio::Medio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog2->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog2->FileName);

			if (InputStream != nullptr) {

				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = 'X';
					Arreglopos2 = lineOfText->Split(separador);
					for (int i = 0; i < Arreglopos2->Length; i++) {
						MessageBox::Show(Arreglopos2[i]);
						listBoxPrueba2->Items->Add(Arreglopos2[i]);
						arregloMedio = Arreglopos2[0]->Split(',');
						arregloMedio2 = Arreglopos2[1]->Split(',');
						arregloMedio3 = Arreglopos2[2]->Split(',');
						arregloMedio4 = Arreglopos2[3]->Split(',');
					}

				}
				InputStream->Close();


				dataGridView2->Rows->Add(7);


			}
		}
	}
	private: System::Void btnEmpeza_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < arregloMedio->Length; i++) {

			if (arregloMedio[i]) {
				if (arregloMedio[i] == "M") {
					dataGridView2->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
				}
				if (arregloMedio[i] == "V") {
					dataGridView2->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
				}
				if (arregloMedio[i] == "R") {
					dataGridView2->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
				}
				if (arregloMedio[i] == "A") {
					dataGridView2->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloMedio2->Length; i++) {
			
			if (arregloMedio2[i]) {


				if (arregloMedio2[i] == "M") {
					dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
				}
				if (arregloMedio2[i] == "V") {
					dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
				}
				if (arregloMedio2[i] == "R") {
					dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
				}
				if (arregloMedio2[i] == "A") {
					dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloMedio3->Length; i++) {
			if (arregloMedio3[i]) {
				if (arregloMedio3[i] == "M") {
					dataGridView2->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
				}
				if (arregloMedio3[i] == "V") {
					dataGridView2->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
				}
				if (arregloMedio3[i] == "R") {
					dataGridView2->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
				}
				if (arregloMedio3[i] == "A") {
					dataGridView2->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloMedio4->Length; i++) {
			if (arregloMedio4[i]) {
				if (arregloMedio4[i] == "M") {
					dataGridView2->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
				}
				if (arregloMedio4[i] == "V") {
					dataGridView2->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
				}
				if (arregloMedio4[i] == "R") {
					dataGridView2->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
				}
				if (arregloMedio4[i] == "A") {
					dataGridView2->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
				}
			}

		}
		tiempo->Start();
	}
private: System::Void tiempo_Tick(System::Object^ sender, System::EventArgs^ e) {
	int seg = Convert::ToInt16(segundos->Text);
	seg = seg + 1;
	segundos->Text = seg.ToString();
	int min = Convert::ToInt16(minutos->Text);

	if (seg == 60)
	{
		min++;
		minutos->Text = min.ToString();
		seg = 0;
		segundos->Text = seg.ToString();
	}

	if (min == 10)
	{
		MessageBox::Show("Has Perdido!");
		Form::AcceptButton;
		Form::Close();
	}
}
private: System::Void Medio_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   int contador;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	contador++;
	if (contador > 50) {
		MessageBox::Show("Ha llegado al límite de movimientos, ha perdido");
		Medio::Close();
	}
	char separador = ',';
	String^ txt;
	txt = txtMedio->Text;
	listBox1->Items->Add(txtMedio);
	label1->Text = "Cantidad de movimientos: " + contador;
	arregloMovimiento2 = txt->Split(separador);
	listBox1->Items->Add(txtMedio->Text);
	for (int i = 0; i < arregloMovimiento2->Length; i++) {
		MessageBox::Show(arregloMovimiento2[i]);

	}
	try {
		if (arregloMovimiento2[0] == "P1" && arregloMovimiento2[1] == "P2") {
			//poner metodo que quite de la pila 1 y agregue en la pila 2
		}
		if (arregloMovimiento2[0] == "P1" && arregloMovimiento2[1] == "P") {
			//poner metodo que quite de la pila 1 y agregue en la pila 3
		}
		if (arregloMovimiento2[0] == "P1" && arregloMovimiento2[1] == "P4") {
			//poner metodo que quite de la pila 1 y agregue en la pila 4
		}
		if (arregloMovimiento2[0] == "P2" && arregloMovimiento2[1] == "P1") {
			//poner metodo que quite de la pila 2 y agregue en la pila 1
		}
		if (arregloMovimiento2[0] == "P2" && arregloMovimiento2[1] == "P3") {
			//poner metodo que quite de la pila 2 y agregue en la pila 3
		}
		if (arregloMovimiento2[0] == "P2" && arregloMovimiento2[1] == "P4") {
			//poner metodo que quite de la pila 2 y agregue en la pila 4
		}
		if (arregloMovimiento2[0] == "P3" && arregloMovimiento2[1] == "P1") {
			//poner metodo que quite de la pila 3 y agregue en la pila 1
		}
		if (arregloMovimiento2[0] == "P3" && arregloMovimiento2[1] == "P2") {
			//poner metodo que quite de la pila 3 y agregue en la pila 2
		}
		if (arregloMovimiento2[0] == "P3" && arregloMovimiento2[1] == "P4") {
			//poner metodo que quite de la pila 3 y agregue en la pila 4
		}
		if (arregloMovimiento2[0] == "P4" && arregloMovimiento2[1] == "P1") {
			//poner metodo que quite de la pila 4 y agregue en la pila 1
		}
		if (arregloMovimiento2[0] == "P4" && arregloMovimiento2[1] == "P2") {
			//poner metodo que quite de la pila 4 y agregue en la pila 2
		}
		if (arregloMovimiento2[0] == "P4" && arregloMovimiento2[1] == "P3") {
			//poner metodo que quite de la pila 4 y agregue en la pila 3
		}

	}
	catch (IO::IOException^ e) {
		MessageBox::Show("Datos ingresados no admitidos");
	}
	txtMedio->Clear();
}
};
}
