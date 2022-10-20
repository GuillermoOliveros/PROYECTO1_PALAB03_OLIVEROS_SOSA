#pragma once
#include <sstream>
#include <iostream>
#include <string>

namespace COLORMANIAPALAB03PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

;

	/// <summary>
	/// Resumen de CronometroFacil
	/// </summary>
	public ref class CronometroFacil : public System::Windows::Forms::Form
	{
	public:
		CronometroFacil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~CronometroFacil()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Timer^ tiempo;

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
			this->tiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// tiempo
			// 
		
			// 
			// CronometroFacil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(176, 104);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CronometroFacil";
			this->Text = L"CronometroFacil";
			this->ResumeLayout(false);

		}
#pragma endregion

	 
};
}
