#pragma once
#include "color1.h"
#include "CronometroFacil.h"
#include <string.h>
#include <string>
#include <iostream>

namespace COLORMANIAPALAB03PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections;
	

	/// <summary>
	/// Resumen de Facil
	/// </summary>
	public ref class Facil : public System::Windows::Forms::Form
	{
		
	public:
		Facil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
		}
		array<String^>^ arreglo;
		array<String^>^ arreglo2;
		array<String^>^ arreglo3;
		array<String^>^ arreglo4;
		array<String^>^ arregloMovimiento;
	private: System::Windows::Forms::Button^ btnEmpeza;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ segundos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ minutos;
	private: System::Windows::Forms::Timer^ tiempo;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TextBox^ txtFacil;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;











	public:
		static array<String^>^ Arreglopos;
		
		

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

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ListBox^ listBoxPrueba;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Facil::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBoxPrueba = (gcnew System::Windows::Forms::ListBox());
			this->btnEmpeza = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->segundos = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->minutos = (gcnew System::Windows::Forms::Label());
			this->tiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtFacil = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 329);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->listBoxPrueba->Location = System::Drawing::Point(555, 66);
			this->listBoxPrueba->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBoxPrueba->Name = L"listBoxPrueba";
			this->listBoxPrueba->Size = System::Drawing::Size(120, 84);
			this->listBoxPrueba->TabIndex = 3;
			// 
			// btnEmpeza
			// 
			this->btnEmpeza->Location = System::Drawing::Point(207, 329);
			this->btnEmpeza->Margin = System::Windows::Forms::Padding(4);
			this->btnEmpeza->Name = L"btnEmpeza";
			this->btnEmpeza->Size = System::Drawing::Size(221, 33);
			this->btnEmpeza->TabIndex = 10;
			this->btnEmpeza->Text = L"Empieza!";
			this->btnEmpeza->UseVisualStyleBackColor = true;
			this->btnEmpeza->Click += gcnew System::EventHandler(this, &Facil::btnEmpeza_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(599, 26);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L":";
			// 
			// segundos
			// 
			this->segundos->AutoSize = true;
			this->segundos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->segundos->Location = System::Drawing::Point(612, 12);
			this->segundos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->segundos->Name = L"segundos";
			this->segundos->Size = System::Drawing::Size(51, 36);
			this->segundos->TabIndex = 8;
			this->segundos->Text = L"00";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(465, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// minutos
			// 
			this->minutos->AutoSize = true;
			this->minutos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minutos->Location = System::Drawing::Point(549, 12);
			this->minutos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minutos->Name = L"minutos";
			this->minutos->Size = System::Drawing::Size(51, 36);
			this->minutos->TabIndex = 6;
			this->minutos->Text = L"00";
			// 
			// tiempo
			// 
			this->tiempo->Interval = 1000;
			this->tiempo->Tick += gcnew System::EventHandler(this, &Facil::tiempo_Tick_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(47, 26);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(396, 236);
			this->dataGridView1->TabIndex = 11;
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
			// txtFacil
			// 
			this->txtFacil->Location = System::Drawing::Point(496, 298);
			this->txtFacil->Name = L"txtFacil";
			this->txtFacil->Size = System::Drawing::Size(157, 22);
			this->txtFacil->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(496, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 33);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Ingresar movimiento ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Facil::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(555, 155);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 84);
			this->listBox1->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(462, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 16);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Cantidad de movimientos: ";
			// 
			// Facil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(685, 374);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtFacil);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnEmpeza);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->segundos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->minutos);
			this->Controls->Add(this->listBoxPrueba);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Facil";
			this->Text = L"Facil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		template <class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->PanelCronometro->Controls->Count > 0)
				this->PanelCronometro->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->PanelCronometro->Controls->Add(FormHijo);
			this->PanelCronometro->Tag = FormHijo;
			FormHijo->Show();
		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog()) {
			StreamReader^ InputStream = gcnew StreamReader(openFileDialog1->FileName);
			
			if (InputStream != nullptr) {
				
				while (String^ lineOfText = InputStream->ReadLine()) {
					char separador = 'X';
					Arreglopos = lineOfText->Split(separador);
					
					for (int i = 0; i < Arreglopos->Length; i++) {
						MessageBox::Show(Arreglopos[i]);
						listBoxPrueba->Items->Add(Arreglopos[i]);
						arreglo = Arreglopos[0]->Split(',');
						arreglo2 = Arreglopos[1]->Split(',');
						arreglo3 = Arreglopos[2]->Split(',');
						arreglo4 = Arreglopos[3]->Split(',');
						
					}
					
				}
				InputStream->Close();
			}
			
			dataGridView1->Rows->Add(7);

		}
		
	}
 private: System::Void btnEmpeza_Click_1(System::Object^ sender, System::EventArgs^ e) {
			   tiempo->Start();
			   

			   for (int i = 0; i < arreglo->Length; i++) {
				   
				   if (arreglo[i]) {
					   if (arreglo[i] == "M") {
						   dataGridView1->Rows[i]->Cells[0]->Style->BackColor = Color::Purple;
					   }
					   if (arreglo[i] == "V") {
						   dataGridView1->Rows[i]->Cells[0]->Style->BackColor = Color::Green;
					   }
					   if (arreglo[i] == "R") {
						   dataGridView1->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
					   }
					   if (arreglo[i] == "A") {
						   dataGridView1->Rows[i]->Cells[0]->Style->BackColor = Color::Yellow;
					   }
				   }

			   }
			   for (int i = 0; i < arreglo2->Length; i++) {
				   
				   if (arreglo2[i]) {
					   

					   if (arreglo2[i] == "M") {
						   dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Purple;
					   }
					   if (arreglo2[i] == "V") {
						   dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Green;
					   }
					   if (arreglo2[i] == "R") {
						   dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
					   }
					   if (arreglo2[i] == "A") {
						   dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Yellow;
					   }
				   }

			   }
			   for (int i = 0; i < arreglo3->Length; i++) {
				   if (arreglo3[i]) {
					   if (arreglo3[i] == "M") {
						   dataGridView1->Rows[i]->Cells[2]->Style->BackColor = Color::Purple;
					   }
					   if (arreglo3[i] == "V") {
						   dataGridView1->Rows[i]->Cells[2]->Style->BackColor = Color::Green;
					   }
					   if (arreglo3[i] == "R") {
						   dataGridView1->Rows[i]->Cells[2]->Style->BackColor = Color::Red;
					   }
					   if (arreglo3[i] == "A") {
						   dataGridView1->Rows[i]->Cells[2]->Style->BackColor = Color::Yellow;
					   }
				   }

			   }
			   for (int i = 0; i < arreglo4->Length; i++) {
				   if (arreglo4[i]) {
					   if (arreglo4[i] == "M") {
						   dataGridView1->Rows[i]->Cells[3]->Style->BackColor = Color::Purple;
					   }
					   if (arreglo4[i] == "V") {
						   dataGridView1->Rows[i]->Cells[3]->Style->BackColor = Color::Green;
					   }
					   if (arreglo4[i] == "R") {
						   dataGridView1->Rows[i]->Cells[3]->Style->BackColor = Color::Red;
					   }
					   if (arreglo4[i] == "A") {
						   dataGridView1->Rows[i]->Cells[3]->Style->BackColor = Color::Yellow;
					   }
				   }

			   }
		   }


private: System::Void tiempo_Tick_1(System::Object^ sender, System::EventArgs^ e) {
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

}
	   int contador;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		contador++;
		char separador = ',';
		String^ txt;
		txt = txtFacil->Text;
		listBox1->Items->Add(txtFacil);
		label1->Text = "Cantidad de movimientos: " + contador;
		arregloMovimiento = txt->Split(separador);
		listBox1->Items->Add(txtFacil->Text);
		for (int i = 0; i < arregloMovimiento->Length; i++) {
			MessageBox::Show(arregloMovimiento[i]);

		}
		try {
			if (arregloMovimiento[0] == "P1" && arregloMovimiento[1] == "P2") {
				//poner metodo que quite de la pila 1 y agregue en la pila 2
			}
			if (arregloMovimiento[0] == "P1" && arregloMovimiento[1] == "P") {
				//poner metodo que quite de la pila 1 y agregue en la pila 3
			}
			if (arregloMovimiento[0] == "P1" && arregloMovimiento[1] == "P4") {
				//poner metodo que quite de la pila 1 y agregue en la pila 4
			}
			if (arregloMovimiento[0] == "P2" && arregloMovimiento[1] == "P1") {
				//poner metodo que quite de la pila 2 y agregue en la pila 1
			}
			if (arregloMovimiento[0] == "P2" && arregloMovimiento[1] == "P3") {
				//poner metodo que quite de la pila 2 y agregue en la pila 3
			}
			if (arregloMovimiento[0] == "P2" && arregloMovimiento[1] == "P4") {
				//poner metodo que quite de la pila 2 y agregue en la pila 4
			}
			if (arregloMovimiento[0] == "P3" && arregloMovimiento[1] == "P1") {
				//poner metodo que quite de la pila 3 y agregue en la pila 1
			}
			if (arregloMovimiento[0] == "P3" && arregloMovimiento[1] == "P2") {
				//poner metodo que quite de la pila 3 y agregue en la pila 2
			}
			if (arregloMovimiento[0] == "P3" && arregloMovimiento[1] == "P4") {
				//poner metodo que quite de la pila 3 y agregue en la pila 4
			}
			if (arregloMovimiento[0] == "P4" && arregloMovimiento[1] == "P1") {
				//poner metodo que quite de la pila 4 y agregue en la pila 1
			}
			if (arregloMovimiento[0] == "P4" && arregloMovimiento[1] == "P2") {
				//poner metodo que quite de la pila 4 y agregue en la pila 2
			}
			if (arregloMovimiento[0] == "P4" && arregloMovimiento[1] == "P3") {
				//poner metodo que quite de la pila 4 y agregue en la pila 3
			}

		}
		catch (IO::IOException^ e) {
			MessageBox::Show("Datos ingresados no admitidos");
		}
		txtFacil->Clear();
	
}
};
}
