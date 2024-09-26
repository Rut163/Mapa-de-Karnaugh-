#pragma once
#include"Tabla2.h"
#include "TablaV1.h"

namespace MapaKarnaugh0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TablaV2
	/// </summary>
	public ref class TablaV2 : public System::Windows::Forms::Form
	{
	public:
		TablaV2(void)
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
		~TablaV2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ llbTitulo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnCerrar;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->llbTitulo = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Integrantes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TablaV2::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button2->Location = System::Drawing::Point(64, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tabla de 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TablaV2::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button3->Location = System::Drawing::Point(431, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 26);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Acerca de";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TablaV2::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button4->Location = System::Drawing::Point(64, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Tabla de 3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TablaV2::button4_Click);
			// 
			// llbTitulo
			// 
			this->llbTitulo->AutoSize = true;
			this->llbTitulo->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbTitulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->llbTitulo->Location = System::Drawing::Point(27, 30);
			this->llbTitulo->Name = L"llbTitulo";
			this->llbTitulo->Size = System::Drawing::Size(200, 30);
			this->llbTitulo->TabIndex = 4;
			this->llbTitulo->Text = L"Mapa de Karnaugh";
			this->llbTitulo->Click += gcnew System::EventHandler(this, &TablaV2::llbTitulo_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->llbTitulo);
			this->panel1->Location = System::Drawing::Point(147, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(248, 188);
			this->panel1->TabIndex = 5;
			// 
			// btnCerrar
			// 
			this->btnCerrar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->btnCerrar->FlatAppearance->BorderSize = 3;
			this->btnCerrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btnCerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCerrar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCerrar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->btnCerrar->Location = System::Drawing::Point(12, 306);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(76, 35);
			this->btnCerrar->TabIndex = 6;
			this->btnCerrar->Text = L"Cerrar";
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &TablaV2::btnCerrar_Click);
			// 
			// TablaV2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->ClientSize = System::Drawing::Size(537, 353);
			this->ControlBox = false;
			this->Controls->Add(this->btnCerrar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"TablaV2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm^msp =gcnew MyForm();
		
		

		msp->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox:: Show(" Tomas Jara \n Alexander Oshita \n Jesica Jaramillo \n Gilmar Buendia \n Augusto Alvarez");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		TablaV1^ msp = gcnew TablaV1();

		

		msp->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show(" Proyecto Parcial \n Matemática Discreta \n Ciclo 2021-2 \n Grupo 09 \n Sección SW31");
}
private: System::Void llbTitulo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
