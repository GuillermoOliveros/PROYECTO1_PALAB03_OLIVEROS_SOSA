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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ segundos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ minutos;
	private: System::Windows::Forms::Button^ btnEmpeza;
	private: System::Windows::Forms::Timer^ tiempo;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->listBoxPrueba2->Location = System::Drawing::Point(3, 2);
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
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->btnEmpeza->Location = System::Drawing::Point(216, 331);
			this->btnEmpeza->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnEmpeza->Name = L"btnEmpeza";
			this->btnEmpeza->Size = System::Drawing::Size(221, 28);
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(203, 94);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(396, 195);
			this->dataGridView1->TabIndex = 15;
			// 
			// Medio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Orange;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnEmpeza);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->segundos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->minutos);
			this->Controls->Add(this->listBoxPrueba2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Medio";
			this->Text = L"Medio";
			this->Load += gcnew System::EventHandler(this, &Medio::Medio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void btnEmpeza_Click(System::Object^ sender, System::EventArgs^ e) {
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

	if (min == 20)
	{
		MessageBox::Show("Has Perdido!");
	}
}
private: System::Void Medio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
