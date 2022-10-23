#pragma once

#include "Color.h"
#include "Dificil.h"
#include "Medio.h"
#include "Facil.h"
#include "CronometroFacil.h"





namespace COLORMANIAPALAB03PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnDificil;
	private: System::Windows::Forms::Button^ btnMedio;
	private: System::Windows::Forms::Button^ btnFacil;
	private: System::Windows::Forms::Panel^ PanelMargen;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ PanelContenedor;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnDificil = (gcnew System::Windows::Forms::Button());
			this->btnMedio = (gcnew System::Windows::Forms::Button());
			this->btnFacil = (gcnew System::Windows::Forms::Button());
			this->PanelMargen = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelContenedor = (gcnew System::Windows::Forms::Panel());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panelLateral->SuspendLayout();
			this->PanelMargen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->BackColor = System::Drawing::Color::GreenYellow;
			this->panelLateral->Controls->Add(this->button1);
			this->panelLateral->Controls->Add(this->btnGuardar);
			this->panelLateral->Controls->Add(this->btnDificil);
			this->panelLateral->Controls->Add(this->btnMedio);
			this->panelLateral->Controls->Add(this->btnFacil);
			this->panelLateral->Controls->Add(this->PanelMargen);
			this->panelLateral->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(267, 304);
			this->panelLateral->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Swis721 BdOul BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(189, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Guardar :P";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Swis721 BdOul BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(192, 311);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 0;
			this->btnGuardar->Text = L"Guardar :P";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// btnDificil
			// 
			this->btnDificil->BackColor = System::Drawing::Color::DarkRed;
			this->btnDificil->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDificil->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDificil->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDificil->Location = System::Drawing::Point(0, 170);
			this->btnDificil->Name = L"btnDificil";
			this->btnDificil->Size = System::Drawing::Size(267, 35);
			this->btnDificil->TabIndex = 3;
			this->btnDificil->Text = L"Difícil";
			this->btnDificil->UseVisualStyleBackColor = false;
			this->btnDificil->Click += gcnew System::EventHandler(this, &MyForm::btnDificil_Click);
			// 
			// btnMedio
			// 
			this->btnMedio->BackColor = System::Drawing::Color::Orange;
			this->btnMedio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMedio->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMedio->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMedio->Location = System::Drawing::Point(0, 135);
			this->btnMedio->Name = L"btnMedio";
			this->btnMedio->Size = System::Drawing::Size(267, 35);
			this->btnMedio->TabIndex = 2;
			this->btnMedio->Text = L"Medio";
			this->btnMedio->UseVisualStyleBackColor = false;
			this->btnMedio->Click += gcnew System::EventHandler(this, &MyForm::btnMedio_Click);
			// 
			// btnFacil
			// 
			this->btnFacil->BackColor = System::Drawing::Color::LightGreen;
			this->btnFacil->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFacil->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFacil->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacil->Location = System::Drawing::Point(0, 100);
			this->btnFacil->Name = L"btnFacil";
			this->btnFacil->Size = System::Drawing::Size(267, 35);
			this->btnFacil->TabIndex = 1;
			this->btnFacil->Text = L"Fácil";
			this->btnFacil->UseVisualStyleBackColor = false;
			this->btnFacil->Click += gcnew System::EventHandler(this, &MyForm::btnFacil_Click);
			// 
			// PanelMargen
			// 
			this->PanelMargen->Controls->Add(this->pictureBox1);
			this->PanelMargen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PanelMargen->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelMargen->Location = System::Drawing::Point(0, 0);
			this->PanelMargen->Name = L"PanelMargen";
			this->PanelMargen->Size = System::Drawing::Size(267, 100);
			this->PanelMargen->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 60);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// PanelContenedor
			// 
			this->PanelContenedor->BackColor = System::Drawing::Color::GreenYellow;
			this->PanelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelContenedor->Location = System::Drawing::Point(267, 0);
			this->PanelContenedor->Name = L"PanelContenedor";
			this->PanelContenedor->Size = System::Drawing::Size(514, 304);
			this->PanelContenedor->TabIndex = 2;
			this->PanelContenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PanelContenedor_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 304);
			this->Controls->Add(this->PanelContenedor);
			this->Controls->Add(this->panelLateral);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelLateral->ResumeLayout(false);
			this->PanelMargen->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

		template <class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->PanelContenedor->Controls->Count > 0)
				this->PanelContenedor->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->PanelContenedor->Controls->Add(FormHijo);
			this->PanelContenedor->Tag = FormHijo;
			FormHijo->Show();
		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnFacil_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew COLORMANIAPALAB03PR1::Facil);
	}

	private: System::Void PanelContenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnMedio_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew COLORMANIAPALAB03PR1::Medio);
	}

	private: System::Void btnDificil_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew COLORMANIAPALAB03PR1::Dificil);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



	}
	};
}
	

