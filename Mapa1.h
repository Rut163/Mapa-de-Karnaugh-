#pragma once

namespace MapaKarnaugh0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mapa11111
	/// </summary>
	public ref class Mapa11111 : public System::Windows::Forms::Form
	{
	public:
		Mapa11111(int n11,int n12,int n21,int n22)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			N1 = n11;
			N2 = n12;
			N3 = n21;
			N4 = n22;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Mapa11111()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblx2;
	protected:


	private: System::Windows::Forms::Label^ lblx1;
	private: System::Windows::Forms::Label^ lbly1;
	private: System::Windows::Forms::Label^ lbly2;
	private: System::Windows::Forms::Label^ lbl00;
	private: System::Windows::Forms::Label^ lbl01;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnVolver;

	private:
		int N1;
		int N2;
		int N3;
		int N4;
	private: System::Windows::Forms::Label^ lblResp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblR1;
	private: System::Windows::Forms::Label^ lblR2;
	private: System::Windows::Forms::Label^ lblR3;
	private: System::Windows::Forms::Label^ lblR4;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl00 = (gcnew System::Windows::Forms::Label());
			this->lbl01 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lblx2 = (gcnew System::Windows::Forms::Label());
			this->lblx1 = (gcnew System::Windows::Forms::Label());
			this->lbly1 = (gcnew System::Windows::Forms::Label());
			this->lbly2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->lblResp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblR1 = (gcnew System::Windows::Forms::Label());
			this->lblR2 = (gcnew System::Windows::Forms::Label());
			this->lblR3 = (gcnew System::Windows::Forms::Label());
			this->lblR4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->lblR4);
			this->panel1->Controls->Add(this->lblR3);
			this->panel1->Controls->Add(this->lblR2);
			this->panel1->Controls->Add(this->lblR1);
			this->panel1->Controls->Add(this->lbl00);
			this->panel1->Controls->Add(this->lbl01);
			this->panel1->Controls->Add(this->lbl11);
			this->panel1->Controls->Add(this->lbl10);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->panel1->Location = System::Drawing::Point(169, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(234, 142);
			this->panel1->TabIndex = 0;
			// 
			// lbl00
			// 
			this->lbl00->AutoSize = true;
			this->lbl00->BackColor = System::Drawing::Color::Transparent;
			this->lbl00->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl00->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl00->Location = System::Drawing::Point(38, 22);
			this->lbl00->Name = L"lbl00";
			this->lbl00->Size = System::Drawing::Size(23, 25);
			this->lbl00->TabIndex = 8;
			this->lbl00->Text = L"0";
			// 
			// lbl01
			// 
			this->lbl01->AutoSize = true;
			this->lbl01->BackColor = System::Drawing::Color::Transparent;
			this->lbl01->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl01->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl01->Location = System::Drawing::Point(173, 22);
			this->lbl01->Name = L"lbl01";
			this->lbl01->Size = System::Drawing::Size(23, 25);
			this->lbl01->TabIndex = 9;
			this->lbl01->Text = L"0";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->BackColor = System::Drawing::Color::Transparent;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl11->Location = System::Drawing::Point(173, 93);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(23, 25);
			this->lbl11->TabIndex = 10;
			this->lbl11->Text = L"0";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->BackColor = System::Drawing::Color::Transparent;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl10->Location = System::Drawing::Point(38, 93);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(23, 25);
			this->lbl10->TabIndex = 11;
			this->lbl10->Text = L"0";
			// 
			// lblx2
			// 
			this->lblx2->AutoSize = true;
			this->lblx2->BackColor = System::Drawing::Color::Transparent;
			this->lblx2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblx2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblx2->Location = System::Drawing::Point(342, 103);
			this->lblx2->Name = L"lblx2";
			this->lblx2->Size = System::Drawing::Size(23, 25);
			this->lblx2->TabIndex = 2;
			this->lblx2->Text = L"1";
			// 
			// lblx1
			// 
			this->lblx1->AutoSize = true;
			this->lblx1->BackColor = System::Drawing::Color::Transparent;
			this->lblx1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblx1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblx1->Location = System::Drawing::Point(207, 104);
			this->lblx1->Name = L"lblx1";
			this->lblx1->Size = System::Drawing::Size(23, 25);
			this->lblx1->TabIndex = 5;
			this->lblx1->Text = L"0";
			// 
			// lbly1
			// 
			this->lbly1->AutoSize = true;
			this->lbly1->BackColor = System::Drawing::Color::Transparent;
			this->lbly1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbly1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbly1->Location = System::Drawing::Point(138, 154);
			this->lbly1->Name = L"lbly1";
			this->lbly1->Size = System::Drawing::Size(23, 25);
			this->lbly1->TabIndex = 6;
			this->lbly1->Text = L"0";
			// 
			// lbly2
			// 
			this->lbly2->AutoSize = true;
			this->lbly2->BackColor = System::Drawing::Color::Transparent;
			this->lbly2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbly2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbly2->Location = System::Drawing::Point(138, 225);
			this->lbly2->Name = L"lbly2";
			this->lbly2->Size = System::Drawing::Size(23, 25);
			this->lbly2->TabIndex = 7;
			this->lbly2->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label1->Location = System::Drawing::Point(84, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label2->Location = System::Drawing::Point(269, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label3->Location = System::Drawing::Point(169, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Tabla de Karnaugh";
			// 
			// btnVolver
			// 
			this->btnVolver->FlatAppearance->BorderSize = 3;
			this->btnVolver->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnVolver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVolver->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->btnVolver->Location = System::Drawing::Point(456, 307);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(69, 34);
			this->btnVolver->TabIndex = 11;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &Mapa11111::btnVolver_Click);
			// 
			// lblResp
			// 
			this->lblResp->AutoSize = true;
			this->lblResp->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblResp->Location = System::Drawing::Point(84, 307);
			this->lblResp->Name = L"lblResp";
			this->lblResp->Size = System::Drawing::Size(0, 25);
			this->lblResp->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(-2, -3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(541, 53);
			this->panel2->TabIndex = 13;
			// 
			// lblR1
			// 
			this->lblR1->AutoSize = true;
			this->lblR1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR1->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR1->Location = System::Drawing::Point(104, 41);
			this->lblR1->Name = L"lblR1";
			this->lblR1->Size = System::Drawing::Size(11, 6);
			this->lblR1->TabIndex = 17;
			this->lblR1->Text = L"        ";
			this->lblR1->Visible = false;
			// 
			// lblR2
			// 
			this->lblR2->AutoSize = true;
			this->lblR2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR2->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR2->Location = System::Drawing::Point(104, 108);
			this->lblR2->Name = L"lblR2";
			this->lblR2->Size = System::Drawing::Size(11, 6);
			this->lblR2->TabIndex = 18;
			this->lblR2->Text = L"        ";
			this->lblR2->Visible = false;
			// 
			// lblR3
			// 
			this->lblR3->AutoSize = true;
			this->lblR3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR3->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR3->Location = System::Drawing::Point(40, 59);
			this->lblR3->Name = L"lblR3";
			this->lblR3->Size = System::Drawing::Size(10, 15);
			this->lblR3->TabIndex = 23;
			this->lblR3->Text = L" ";
			this->lblR3->Visible = false;
			// 
			// lblR4
			// 
			this->lblR4->AutoSize = true;
			this->lblR4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR4->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR4->Location = System::Drawing::Point(184, 61);
			this->lblR4->Name = L"lblR4";
			this->lblR4->Size = System::Drawing::Size(10, 15);
			this->lblR4->TabIndex = 24;
			this->lblR4->Text = L" ";
			this->lblR4->Visible = false;
			// 
			// Mapa11111
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->ClientSize = System::Drawing::Size(537, 353);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lblResp);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbly2);
			this->Controls->Add(this->lbly1);
			this->Controls->Add(this->lblx1);
			this->Controls->Add(this->lblx2);
			this->Controls->Add(this->panel1);
			this->Name = L"Mapa11111";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mapa1";
			this->Load += gcnew System::EventHandler(this, &Mapa11111::Mapa11111_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Mapa11111_Load(System::Object^ sender, System::EventArgs^ e) {
	lblResp->Text = "";
	if (N1 == 1) {
		lbl00->Text = "1";
		
	}
	else {
		lbl00->Text = "0";
	}
	if (N2 == 1) {
		lbl01->Text = "1";
		
	}
	else {
		lbl01->Text = "0";

	}
	if (N3 == 1) {
		lbl10->Text = "1";
		
	}
	else {
		lbl10->Text = "0";

	}
	if (N4 == 1) {
		lbl11->Text = "1";
		
	}
	else {
		lbl11->Text = "0";
	}


	//


	if (N1 == 1 && N2 == 1 )
	{
		lblR1->Visible = true;
		lblResp->Text += "+ x'";

	}
	if (N3 == 1 && N4 == 1)
	{
		lblR2->Visible = true;
		lblResp->Text += "+ x ";
	}
	if (N1 == 1 && N3 == 1)
	{
		lblR3->Visible = true;
		lblResp->Text += "+ y' ";
	}
	if (N4 == 1 && N2 == 1)
	{
		lblR4->Visible = true;
		lblResp->Text += "+ y ";
	}
	if (!(N1 == 1 && N2 == 1) && !(N3 == 1 && N4 == 1) && !(N1 == 1 && N3 == 1) && !(N4 == 1 && N2 == 1))
	{
		if (N1 == 1)
		{
			lblResp->Text += "+ x'y'";
		}
		if (N2 == 1)
		{
			lblResp->Text += "+ x'y ";
		}
		if (N3 == 1)
		{
			lblResp->Text += "+ xy' ";
		}
		if (N4 == 1)
		{
			lblResp->Text += "+ xy ";
		}
	}
	
}
private: System::Void btnVolver_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
