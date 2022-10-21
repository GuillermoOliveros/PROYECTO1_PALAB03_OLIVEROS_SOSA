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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		array<String^>^ arregloDificil;
		array<String^>^ arregloDificil2;
		array<String^>^ arregloDificil3;
		array<String^>^ arregloDificil4;
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

		   array<String^>^ Arreglopos3;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			// listBoxPrueba3
			// 
			this->listBoxPrueba3->FormattingEnabled = true;
			this->listBoxPrueba3->ItemHeight = 16;
			this->listBoxPrueba3->Location = System::Drawing::Point(538, 126);
			this->listBoxPrueba3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBoxPrueba3->Name = L"listBoxPrueba3";
			this->listBoxPrueba3->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba3->TabIndex = 1;
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
			this->txtDificil->Location = System::Drawing::Point(505, 296);
			this->txtDificil->Name = L"txtDificil";
			this->txtDificil->Size = System::Drawing::Size(144, 22);
			this->txtDificil->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(505, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 39);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Ingresar movimiento ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Dificil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(685, 374);
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
};
}
