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
		array<String^>^ arregloDificil;
		array<String^>^ arregloDificil2;
		array<String^>^ arregloDificil3;
		array<String^>^ arregloDificil4;
		array<String^>^ arregloMovimiento3;
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

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnGuardarPartida;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			this->listBoxPrueba3 = (gcnew System::Windows::Forms::ListBox());
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGuardarPartida = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
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
			this->button1->Location = System::Drawing::Point(9, 262);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar archivo de texto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dificil::button1_Click);
			// 
			// listBoxPrueba3
			// 
			this->listBoxPrueba3->FormattingEnabled = true;
			this->listBoxPrueba3->Location = System::Drawing::Point(415, 61);
			this->listBoxPrueba3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBoxPrueba3->Name = L"listBoxPrueba3";
			this->listBoxPrueba3->Size = System::Drawing::Size(91, 69);
			this->listBoxPrueba3->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(454, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L":";
			// 
			// segundos
			// 
			this->segundos->AutoSize = true;
			this->segundos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->segundos->Location = System::Drawing::Point(464, 9);
			this->segundos->Name = L"segundos";
			this->segundos->Size = System::Drawing::Size(41, 29);
			this->segundos->TabIndex = 12;
			this->segundos->Text = L"00";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(354, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(57, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// minutos
			// 
			this->minutos->AutoSize = true;
			this->minutos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minutos->Location = System::Drawing::Point(417, 9);
			this->minutos->Name = L"minutos";
			this->minutos->Size = System::Drawing::Size(41, 29);
			this->minutos->TabIndex = 10;
			this->minutos->Text = L"00";
			// 
			// btnEmpeza
			// 
			this->btnEmpeza->Location = System::Drawing::Point(146, 262);
			this->btnEmpeza->Name = L"btnEmpeza";
			this->btnEmpeza->Size = System::Drawing::Size(166, 32);
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
			this->dataGridView3->Location = System::Drawing::Point(33, 33);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(297, 192);
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
			this->txtDificil->Location = System::Drawing::Point(379, 240);
			this->txtDificil->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDificil->Name = L"txtDificil";
			this->txtDificil->Size = System::Drawing::Size(109, 20);
			this->txtDificil->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(379, 262);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 32);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Ingresar movimiento ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dificil::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(415, 133);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(91, 69);
			this->listBox1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(352, 212);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Cantidad de movimientos:";
			// 
			// btnGuardarPartida
			// 
			this->btnGuardarPartida->Location = System::Drawing::Point(71, 230);
			this->btnGuardarPartida->Name = L"btnGuardarPartida";
			this->btnGuardarPartida->Size = System::Drawing::Size(192, 23);
			this->btnGuardarPartida->TabIndex = 21;
			this->btnGuardarPartida->Text = L"Guardar Partida";
			this->btnGuardarPartida->UseVisualStyleBackColor = true;
			this->btnGuardarPartida->Click += gcnew System::EventHandler(this, &Dificil::btnGuardarPartida_Click);
			// 
			// Dificil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(514, 304);
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
			this->Controls->Add(this->listBoxPrueba3);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
						listBoxPrueba3->Items->Add(Arreglopos3[i]);
						arregloDificil = Arreglopos3[0]->Split(',');
						arregloDificil2 = Arreglopos3[1]->Split(',');
						arregloDificil3 = Arreglopos3[2]->Split(',');
						arregloDificil4 = Arreglopos3[3]->Split(',');
					}

				}
				InputStream->Close();




				dataGridView3->Rows->Add(7);
			}

		}

	}
	private: System::Void btnEmpeza_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < arregloDificil->Length; i++) {

			if (arregloDificil[i]) {
				if (arregloDificil[i] == "M") {
					dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
				}
				if (arregloDificil[i] == "V") {
					dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
				}
				if (arregloDificil[i] == "R") {
					dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
				}
				if (arregloDificil[i] == "A") {
					dataGridView3->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloDificil2->Length; i++) {
			
			if (arregloDificil2[i]) {


				if (arregloDificil2[i] == "M") {
					dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
				}
				if (arregloDificil2[i] == "V") {
					dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
				}
				if (arregloDificil2[i] == "R") {
					dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
				}
				if (arregloDificil2[i] == "A") {
					dataGridView3->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloDificil3->Length; i++) {
			if (arregloDificil3[i]) {
				if (arregloDificil3[i] == "M") {
					dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
				}
				if (arregloDificil3[i] == "V") {
					dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
				}
				if (arregloDificil3[i] == "R") {
					dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
				}
				if (arregloDificil3[i] == "A") {
					dataGridView3->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
				}
			}

		}
		for (int i = 0; i < arregloDificil4->Length; i++) {
			if (arregloDificil4[i]) {
				if (arregloDificil4[i] == "M") {
					dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
				}
				if (arregloDificil4[i] == "V") {
					dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
				}
				if (arregloDificil4[i] == "R") {
					dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
				}
				if (arregloDificil4[i] == "A") {
					dataGridView3->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
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
	for (int i = 0; i < arregloMovimiento3->Length; i++) {
		MessageBox::Show(arregloMovimiento3[i]);

	}
	try {
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P2") {
			//poner metodo que quite de la pila 1 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P") {
			//poner metodo que quite de la pila 1 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P1" && arregloMovimiento3[1] == "P4") {
			//poner metodo que quite de la pila 1 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P1") {
			//poner metodo que quite de la pila 2 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P3") {
			//poner metodo que quite de la pila 2 y agregue en la pila 3
		}
		if (arregloMovimiento3[0] == "P2" && arregloMovimiento3[1] == "P4") {
			//poner metodo que quite de la pila 2 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P1") {
			//poner metodo que quite de la pila 3 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P2") {
			//poner metodo que quite de la pila 3 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P3" && arregloMovimiento3[1] == "P4") {
			//poner metodo que quite de la pila 3 y agregue en la pila 4
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P1") {
			//poner metodo que quite de la pila 4 y agregue en la pila 1
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P2") {
			//poner metodo que quite de la pila 4 y agregue en la pila 2
		}
		if (arregloMovimiento3[0] == "P4" && arregloMovimiento3[1] == "P3") {
			//poner metodo que quite de la pila 4 y agregue en la pila 3
		}

	}
	catch (IO::IOException^ e) {
		MessageBox::Show("Datos ingresados no admitidos");
	}
	txtDificil->Clear();
}
private: System::Void btnGuardarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
	{
		StreamReader^ InputStream = gcnew StreamReader(saveFileDialog1->FileName);

		if (InputStream != nullptr)
		{
			String^ guardar = saveFileDialog1->FileName;

			StreamWriter^ GuardarPartida = File::CreateText(guardar);

			GuardarPartida->Write(" --- PARTIDA GUARDADA CON ÉXITO --- ");
			GuardarPartida->Write(" Dificultad: Fácil ");
			GuardarPartida->Write("Tiempo Ocupado: " + minutos + ":" + segundos);
			GuardarPartida->Write("Movimientos Oucpados: " + label1);
			GuardarPartida->Write("Movimientos Realizados: " + listBox1->Text);
			GuardarPartida->Write("Último Mapa: ");

			GuardarPartida->Flush();
			GuardarPartida->Close();

		}

		else {

			String^ guardar = saveFileDialog1->FileName;

			StreamWriter^ GuardarPartida = File::CreateText(guardar);

			GuardarPartida->Write(" --- PARTIDA GUARDADA CON ÉXITO --- ");
			GuardarPartida->Write(" Dificultad: Fácil ");
			GuardarPartida->Write("Tiempo Ocupado: " + minutos + ":" + segundos);
			GuardarPartida->Write("Movimientos Oucpados: " + label1);
			GuardarPartida->Write("Movimientos Realizados: " + listBox1->Text);
			GuardarPartida->Write("Último Mapa: ");

			GuardarPartida->Flush();
			GuardarPartida->Close();
		}
	}
}
};
}
