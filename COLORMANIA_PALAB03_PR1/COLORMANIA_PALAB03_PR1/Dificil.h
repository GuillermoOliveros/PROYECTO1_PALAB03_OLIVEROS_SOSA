#pragma once
#include "ListaColor.h"

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
		array<String^>^ arregloDificil;
		array<String^>^ arregloDificil2;
		array<String^>^ arregloDificil3;
		array<String^>^ arregloDificil4;
		array<String^>^ arregloMovimiento3;
		array<Int32>^ arregloInt;
		array<Int32>^ arregloInt2;
		array<Int32>^ arregloInt3;
		array<Int32>^ arregloInt4;
		ListaColor* Lista1 = new ListaColor();
		ListaColor* Lista2 = new ListaColor();
		ListaColor* Lista3 = new ListaColor();
		ListaColor* Lista4 = new ListaColor();
		bool verLista1;
		bool verLista2;
		bool verLista3;
		bool verLista4;
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ segundos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ minutos;
	private: System::Windows::Forms::Button^ btnEmpeza;
	private: System::Windows::Forms::Timer^ tiempo;
	private: System::Windows::Forms::DataGridView^ dataGridView3;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TextBox^ txtDificil;


	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnGuardarPartida;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dificil::typeid));
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->segundos = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->minutos = (gcnew System::Windows::Forms::Label());
			this->btnEmpeza = (gcnew System::Windows::Forms::Button());
			this->tiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDificil = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGuardarPartida = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 322);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar archivo de texto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dificil::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(605, 25);
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
			this->segundos->Location = System::Drawing::Point(619, 11);
			this->segundos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->segundos->Name = L"segundos";
			this->segundos->Size = System::Drawing::Size(51, 36);
			this->segundos->TabIndex = 12;
			this->segundos->Text = L"00";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(472, 1);
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
			this->minutos->Location = System::Drawing::Point(556, 11);
			this->minutos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minutos->Name = L"minutos";
			this->minutos->Size = System::Drawing::Size(51, 36);
			this->minutos->TabIndex = 10;
			this->minutos->Text = L"00";
			// 
			// btnEmpeza
			// 
			this->btnEmpeza->Location = System::Drawing::Point(195, 322);
			this->btnEmpeza->Margin = System::Windows::Forms::Padding(4);
			this->btnEmpeza->Name = L"btnEmpeza";
			this->btnEmpeza->Size = System::Drawing::Size(221, 39);
			this->btnEmpeza->TabIndex = 15;
			this->btnEmpeza->Text = L"Empieza!";
			this->btnEmpeza->UseVisualStyleBackColor = true;
			this->btnEmpeza->Click += gcnew System::EventHandler(this, &Dificil::btnEmpeza_Click);
			// 
			// tiempo
			// 
			this->tiempo->Interval = 1000;
			this->tiempo->Tick += gcnew System::EventHandler(this, &Dificil::tiempo_Tick);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView3->Location = System::Drawing::Point(44, 41);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(396, 236);
			this->dataGridView3->TabIndex = 16;
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
			// txtDificil
			// 
			this->txtDificil->Location = System::Drawing::Point(505, 286);
			this->txtDificil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDificil->Name = L"txtDificil";
			this->txtDificil->Size = System::Drawing::Size(154, 22);
			this->txtDificil->TabIndex = 17;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(553, 73);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 84);
			this->listBox1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(487, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 16);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Cantidad de movimientos:";
			// 
			// btnGuardarPartida
			// 
			this->btnGuardarPartida->Location = System::Drawing::Point(95, 283);
			this->btnGuardarPartida->Margin = System::Windows::Forms::Padding(4);
			this->btnGuardarPartida->Name = L"btnGuardarPartida";
			this->btnGuardarPartida->Size = System::Drawing::Size(256, 28);
			this->btnGuardarPartida->TabIndex = 21;
			this->btnGuardarPartida->Text = L"Guardar Partida";
			this->btnGuardarPartida->UseVisualStyleBackColor = true;
			this->btnGuardarPartida->Click += gcnew System::EventHandler(this, &Dificil::btnGuardarPartida_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(505, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 46);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Ingresar movimiento en formato cola";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dificil::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(505, 231);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 46);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Ingresar movimiento en formato pila";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dificil::button2_Click);
			// 
			// Dificil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnGuardarPartida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtDificil);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->btnEmpeza);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->segundos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->minutos);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Dificil";
			this->Text = L"Dificil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog3->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog3->FileName);

			if (InputStream != nullptr) {

				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = 'X';
					Arreglopos3 = lineOfText->Split(separador);
					for (int i = 0; i < Arreglopos3->Length; i++) {
						MessageBox::Show(Arreglopos3[i]);
						
						arregloDificil = Arreglopos3[0]->Split(',');
						arregloDificil2 = Arreglopos3[1]->Split(',');
						arregloDificil3 = Arreglopos3[2]->Split(',');
						arregloDificil4 = Arreglopos3[3]->Split(',');
					}

				}
				InputStream->Close();
				dataGridView3->Rows->Add(7);
				dataGridView3->ClearSelection();
				
			}

		}

	}
	private: System::Void btnEmpeza_Click(System::Object^ sender, System::EventArgs^ e) {
		arregloInt = gcnew array< Int32 >(arregloDificil->Length-1);
		for (int i = 0; i < arregloDificil->Length-1; i++) {
			if (arregloDificil[i] == "M") {

				arregloInt[i] = 1;
			}
			else if (arregloDificil[i] == "V") {
				arregloInt[i] = 2;
			}
			else if (arregloDificil[i] == "R") {
				arregloInt[i] = 3;
			}
			else if (arregloDificil[i] == "A") {
				arregloInt[i] = 4;
			}
		}
		arregloInt2 = gcnew array< Int32 >(arregloDificil2->Length-1);
		for (int i = 0; i < arregloDificil2->Length-1; i++) {
			if (arregloDificil2[i] == "M") {

				arregloInt2[i] = 1;
			}
			else if (arregloDificil2[i] == "V") {
				arregloInt2[i] = 2;
			}
			else if (arregloDificil2[i] == "R") {
				arregloInt2[i] = 3;
			}
			else if (arregloDificil2[i] == "A") {
				arregloInt2[i] = 4;
			}
		}
		arregloInt3 = gcnew array< Int32 >(arregloDificil3->Length-1);
		for (int i = 0; i < arregloDificil3->Length-1; i++) {
			if (arregloDificil3[i] == "M") {

				arregloInt3[i] = 1;
			}
			else if (arregloDificil3[i] == "V") {
				arregloInt3[i] = 2;
			}
			else if (arregloDificil3[i] == "R") {
				arregloInt3[i] = 3;
			}
			else if (arregloDificil3[i] == "A") {
				arregloInt3[i] = 4;
			}
		}
		arregloInt4 = gcnew array< Int32 >(arregloDificil4->Length);
		for (int i = 0; i < arregloDificil4->Length; i++) {
			if (arregloDificil4[i] == "M") {

				arregloInt4[i] = 1;
			}
			else if (arregloDificil4[i] == "V") {
				arregloInt4[i] = 2;
			}
			else if (arregloDificil4[i] == "R") {
				arregloInt4[i] = 3;
			}
			else if (arregloDificil4[i] == "A") {
				arregloInt4[i] = 4;
			}
		}
		for (int i = 0; i < arregloInt->Length / 2; i++) {
			int aux = arregloInt[i];
			arregloInt[i] = arregloInt[arregloInt->Length - 1 - i];
			arregloInt[arregloInt->Length - 1 - i] = aux;
		}
		for (int i = 0; i < arregloInt2->Length / 2; i++) {
			int aux = arregloInt2[i];
			arregloInt2[i] = arregloInt2[arregloInt2->Length - 1 - i];
			arregloInt2[arregloInt2->Length - 1 - i] = aux;
		}
		for (int i = 0; i < arregloInt3->Length / 2; i++) {
			int aux = arregloInt3[i];
			arregloInt3[i] = arregloInt3[arregloInt3->Length - 1 - i];
			arregloInt3[arregloInt3->Length - 1 - i] = aux;
		}
		for (int i = 0; i < arregloInt4->Length / 2; i++) {
			int aux = arregloInt4[i];
			arregloInt4[i] = arregloInt4[arregloInt4->Length - 1 - i];
			arregloInt4[arregloInt4->Length - 1 - i] = aux;
		}
		for (int i = 0; i < arregloInt->Length; i++) {
			Lista1->Add(arregloInt[i]);
		}
		for (int i = 0; i < arregloInt2->Length; i++) {
			Lista2->Add(arregloInt2[i]);
		}
		for (int i = 0; i < arregloInt3->Length; i++) {
			Lista3->Add(arregloInt3[i]);
		}
		for (int i = 0; i < arregloInt4->Length; i++) {
			Lista4->Add(arregloInt4[i]);
		}
		for (int i = 0; i < Lista1->Count(); i++) {

			dataGridView3->ClearSelection();
			if (Lista1->GetItem(i) == 1) {
				dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
			}
			if (Lista1->GetItem(i) == 2) {
				dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
			}
			if (Lista1->GetItem(i) == 3) {
				dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
			}
			if (Lista1->GetItem(i) == 4) {
				dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
			}


		}
		for (int i = 0; i < Lista2->Count(); i++) {

			if (Lista2->GetItem(i) == 1) {
				dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
			}
			if (Lista2->GetItem(i) == 2) {
				dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
			}
			if (Lista2->GetItem(i) == 3) {
				dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
			if (Lista2->GetItem(i) == 4) {
				dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
			}

		}
		for (int i = 0; i < Lista3->Count(); i++) {

			if (Lista3->GetItem(i) == 1) {
				dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
			}
			if (Lista3->GetItem(i) == 2) {
				dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
			}
			if (Lista3->GetItem(i) == 3) {
				dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
			}
			if (Lista3->GetItem(i) == 4) {
				dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
			}


		}
		for (int i = 0; i < Lista4->Count(); i++) {

			if (Lista4->GetItem(i) == 1) {
				dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
			}
			if (Lista4->GetItem(i) == 2) {
				dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
			}
			if (Lista4->GetItem(i) == 3) {
				dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
			}
			if (Lista4->GetItem(i) == 4) {
				dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
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

	if (min == 5)
	{
		MessageBox::Show("Has Perdido!");
	}
}
	   int contador;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	contador++;
	if (contador > 20) {
		MessageBox::Show("Ha llegado al límite de movimientos, ha perdido");
		Dificil::Close();
	}
	char separador = ',';
	String^ txt;
	txt = txtDificil->Text;
	listBox1->Items->Add(txtDificil);
	label1->Text = "Cantidad de movimientos: " + contador;
	arregloMovimiento3 = txt->Split(separador);
	listBox1->Items->Add(txtDificil->Text);
	
	try {
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P2") {
			int valor = Lista1->GetItem(0);
			Lista2->Add(valor);
			Lista1->RemoveAtFirst();

		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P3") {
			int valor = Lista1->GetItem(0);
			Lista3->Add(valor);
			Lista1->RemoveAtFirst();
			//poner metodo que quite de la pila 1 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P4") {
			int valor = Lista1->GetItem(0);
			Lista4->Add(valor);
			Lista1->RemoveAtFirst();
			//poner metodo que quite de la pila 1 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P1") {
			int valor = Lista2->GetItem(0);
			Lista1->Add(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P3") {
			int valor = Lista2->GetItem(0);
			Lista3->Add(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P4") {
			int valor = Lista2->GetItem(0);
			Lista4->Add(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P1") {
			int valor = Lista3->GetItem(0);
			Lista1->Add(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P2") {
			int valor = Lista3->GetItem(0);
			Lista2->Add(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P4") {
			int valor = Lista3->GetItem(0);
			Lista4->Add(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P1") {
			int valor = Lista4->GetItem(0);
			Lista1->Add(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P2") {
			int valor = Lista4->GetItem(0);
			Lista2->Add(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P3") {
			int valor = Lista4->GetItem(0);
			Lista3->Add(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 3
		}

	}
	catch (IO::IOException^ e) {
		MessageBox::Show("Datos ingresados no admitidos");
	}

	dataGridView3->Rows->Clear();
	dataGridView3->Rows->Add(7);
	dataGridView3->ClearSelection();
	for (int i = 0; i < Lista1->Count(); i++) {


		if (Lista1->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
		}
		if (Lista1->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
		}
		if (Lista1->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
		}
		if (Lista1->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
		}


	}
	for (int i = 0; i < Lista2->Count(); i++) {

		if (Lista2->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
		}
		if (Lista2->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
		}
		if (Lista2->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
		}
		if (Lista2->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
		}

	}
	for (int i = 0; i < Lista3->Count(); i++) {

		if (Lista3->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
		}
		if (Lista3->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
		}
		if (Lista3->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
		}
		if (Lista3->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
		}


	}
	for (int i = 0; i < Lista4->Count(); i++) {

		if (Lista4->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
		}
		if (Lista4->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
		}
		if (Lista4->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
		}
		if (Lista4->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
		}


	}
	txtDificil->Clear();
}
private: System::Void btnGuardarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
	{
		StreamWriter^ InputStream = gcnew StreamWriter(saveFileDialog1->FileName);

		if (InputStream != nullptr)
		{

			InputStream->Write(" --- PARTIDA GUARDADA CON ÉXITO --- " + "\n");
			InputStream->Write(" Dificultad: Fácil " + "\n");
			InputStream->Write("Tiempo Ocupado: " + minutos->Text + ":" + segundos->Text + "\n");
			InputStream->Write( label1 + "\n");
			InputStream->Write("Movimientos Realizados: " + listBox1->Text + "\n");
			InputStream->Write("Último Mapa: " + Convert::ToInt16(Lista1) + Convert::ToInt16(Lista2) + Convert::ToInt16(Lista3) + Convert::ToInt16(Lista4) + "\n");

			InputStream->Flush();
			InputStream->Close();

		}


	}

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	contador++;
	int temporal;
	char separador = ',';
	String^ txt;
	txt = txtDificil->Text;
	listBox1->Items->Add(txtDificil);
	label1->Text = "Cantidad de movimientos: " + contador;
	arregloMovimiento3 = txt->Split(separador);
	listBox1->Items->Add(txtDificil->Text);

	try {
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P2") {
			int valor = Lista1->GetItem(0);
			Lista2->insertAtEnd(valor);
			Lista1->RemoveAtFirst();

		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P3") {
			int valor = Lista1->GetItem(0);
			Lista3->insertAtEnd(valor);
			Lista1->RemoveAtFirst();
			//poner metodo que quite de la pila 1 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P4") {
			int valor = Lista1->GetItem(0);
			Lista4->insertAtEnd(valor);
			Lista1->RemoveAtFirst();
			//poner metodo que quite de la pila 1 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P1") {
			int valor = Lista2->GetItem(0);
			Lista1->insertAtEnd(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P3") {
			int valor = Lista2->GetItem(0);
			Lista3->insertAtEnd(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P4") {
			int valor = Lista2->GetItem(0);
			Lista4->insertAtEnd(valor);
			Lista2->RemoveAtFirst();
			//poner metodo que quite de la pila 2 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P1") {
			int valor = Lista3->GetItem(0);
			Lista1->insertAtEnd(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P2") {
			int valor = Lista3->GetItem(0);
			Lista2->insertAtEnd(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P4") {
			int valor = Lista3->GetItem(0);
			Lista4->insertAtEnd(valor);
			Lista3->RemoveAtFirst();
			//poner metodo que quite de la pila 3 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P1") {
			int valor = Lista4->GetItem(0);
			Lista1->insertAtEnd(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P2") {
			int valor = Lista4->GetItem(0);
			Lista2->insertAtEnd(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P3") {
			int valor = Lista4->GetItem(0);
			Lista3->insertAtEnd(valor);
			Lista4->RemoveAtFirst();
			//poner metodo que quite de la pila 4 y agregue en la pila 3
		}

	}
	catch (IO::IOException^ e) {
		MessageBox::Show("Datos ingresados no admitidos");
	}

	dataGridView3->Rows->Clear();
	dataGridView3->Rows->Add(7);
	dataGridView3->ClearSelection();
	for (int i = 0; i < Lista1->Count(); i++) {


		if (Lista1->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
		}
		if (Lista1->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
		}
		if (Lista1->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
		}
		if (Lista1->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
		}


	}
	for (int i = 0; i < Lista2->Count(); i++) {

		if (Lista2->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
		}
		if (Lista2->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
		}
		if (Lista2->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
		}
		if (Lista2->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
		}

	}
	for (int i = 0; i < Lista3->Count(); i++) {

		if (Lista3->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
		}
		if (Lista3->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
		}
		if (Lista3->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
		}
		if (Lista3->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
		}


	}
	for (int i = 0; i < Lista4->Count(); i++) {

		if (Lista4->GetItem(i) == 1) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
		}
		if (Lista4->GetItem(i) == 2) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
		}
		if (Lista4->GetItem(i) == 3) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
		}
		if (Lista4->GetItem(i) == 4) {
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
		}


	}

	for (int i = 0; i < Lista1->Count(); i++) {

		if (Lista1->GetItem(i) == 1)
		{
			for (int i = 0; i < Lista1->Count(); i++) {
				if (Lista1->GetItem(i) == 1)
				{
					verLista1 = true;
				}
			}

		}

		else if (Lista1->GetItem(i) == 2)
		{
			for (int i = 0; i < Lista1->Count(); i++) {
				if (Lista1->GetItem(i) == 2)
				{
					verLista1 = true;
				}
			}
		}

		else if (Lista1->GetItem(i) == 3)
		{

			for (int i = 0; i < Lista1->Count(); i++) {
				if (Lista1->GetItem(i) == 3)
				{
					verLista1 = true;
				}
			}
		}

		else if (Lista1->GetItem(i) == 4)
		{
			for (int i = 0; i < Lista1->Count(); i++) {
				if (Lista1->GetItem(i) == 4)
				{
					verLista1 = true;
				}
			}
		}
	}
	// Lista 2
	for (int i = 0; i < Lista2->Count(); i++) {

		if (Lista2->GetItem(i) == 1)
		{
			for (int i = 0; i < Lista2->Count(); i++) {
				if (Lista2->GetItem(i) == 1)
				{
					verLista2 = true;
				}
			}
		}

		else if (Lista2->GetItem(i) == 2)
		{
			for (int i = 0; i < Lista2->Count(); i++) {
				if (Lista2->GetItem(i) == 2)
				{
					verLista2 = true;
				}
			}
		}

		else if (Lista2->GetItem(i) == 3)
		{
			for (int i = 0; i < Lista2->Count(); i++) {
				if (Lista2->GetItem(i) == 3)
				{
					verLista2 = true;
				}
			}
		}

		else if (Lista2->GetItem(i) == 4)
		{
			for (int i = 0; i < Lista2->Count(); i++) {
				if (Lista2->GetItem(i) == 4)
				{
					verLista2 = true;
				}
			}
		}
	}

	//Lista 3

	for (int i = 0; i < Lista3->Count(); i++) {

		if (Lista3->GetItem(i) == 1)
		{
			for (int i = 0; i < Lista3->Count(); i++) {
				if (Lista3->GetItem(i) == 1)
				{
					verLista3 = true;
				}
			}
		}


		else if (Lista3->GetItem(i) == 2)
		{
			for (int i = 0; i < Lista3->Count(); i++) {
				if (Lista3->GetItem(i) == 2)
				{
					verLista3 = true;
				}
			}
		}

		else if (Lista3->GetItem(i) == 3)
		{
			for (int i = 0; i < Lista3->Count(); i++) {
				if (Lista3->GetItem(i) == 3)
				{
					verLista3 = true;
				}
			}
		}

		else if (Lista3->GetItem(i) == 4)
		{
			for (int i = 0; i < Lista3->Count(); i++) {
				if (Lista3->GetItem(i) == 4)
				{
					verLista3 = true;
				}
			}
		}
	}


	// Lista 4

	for (int i = 0; i < Lista4->Count(); i++) {

		if (Lista4->GetItem(i) == 1)
		{
			for (int i = 0; i < Lista4->Count(); i++) {
				if (Lista4->GetItem(i) == 1)
				{
					verLista4 = true;
				}
			}
		}

		else if (Lista4->GetItem(i) == 2)
		{
			for (int i = 0; i < Lista4->Count(); i++) {
				if (Lista4->GetItem(i) == 2)
				{
					verLista4 = true;
				}
			}
		}

		else if (Lista4->GetItem(i) == 3)
		{
			for (int i = 0; i < Lista4->Count(); i++) {
				if (Lista4->GetItem(i) == 3)
				{
					verLista4 = true;
				}
			}
		}

		else if (Lista4->GetItem(i) == 4)
		{
			for (int i = 0; i < Lista4->Count(); i++) {
				if (Lista4->GetItem(i) == 4)
				{
					verLista4 = true;
				}
			}
		}
	}
	if ((verLista1 == true) && (verLista2 == true) && (verLista3 == true) && (verLista4 == true)) {
		MessageBox::Show("Ha ganado, FELICIDADES!");
	}
	

	txtDificil->Clear();
}
};
}
