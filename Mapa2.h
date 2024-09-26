#pragma once


namespace MapaKarnaugh0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(int n1, int n2, int n3, int n4, int n5, int n6, int n7,int n8)
		{

			N1 = n1;
			N2 = n2;
			N3 = n3;
			N4 = n4;
			N5 = n5;
			N6 = n6;
			N7 = n7;
			N8 = n8;

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private:
		int N1;
		int N2;
		int N3;
		int N4;
		int N5;
		int N6;
		int N7;
	private: System::Windows::Forms::Label^ lblResp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblR1;
	private: System::Windows::Forms::Label^ lblR10;
	private: System::Windows::Forms::Label^ lblR9;
	private: System::Windows::Forms::Label^ lblR8;
	private: System::Windows::Forms::Label^ lblR7;
	private: System::Windows::Forms::Label^ lblR6;
	private: System::Windows::Forms::Label^ lblR5;
	private: System::Windows::Forms::Label^ lblR4;
	private: System::Windows::Forms::Label^ lblR3;
	private: System::Windows::Forms::Label^ lblR2;


		   int N8;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbly2;
	private: System::Windows::Forms::Label^ lbly1;
	private: System::Windows::Forms::Label^ lblx1;
	private: System::Windows::Forms::Label^ lblx2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbl06;

	private: System::Windows::Forms::Label^ lbl07;
	private: System::Windows::Forms::Label^ lbl08;
	private: System::Windows::Forms::Label^ lbl09;




	private: System::Windows::Forms::Label^ lbl00;
	private: System::Windows::Forms::Label^ lbl01;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnVolver2;


	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbly2 = (gcnew System::Windows::Forms::Label());
			this->lbly1 = (gcnew System::Windows::Forms::Label());
			this->lblx1 = (gcnew System::Windows::Forms::Label());
			this->lblx2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl06 = (gcnew System::Windows::Forms::Label());
			this->lbl07 = (gcnew System::Windows::Forms::Label());
			this->lbl08 = (gcnew System::Windows::Forms::Label());
			this->lbl09 = (gcnew System::Windows::Forms::Label());
			this->lbl00 = (gcnew System::Windows::Forms::Label());
			this->lbl01 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnVolver2 = (gcnew System::Windows::Forms::Button());
			this->lblResp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblR1 = (gcnew System::Windows::Forms::Label());
			this->lblR2 = (gcnew System::Windows::Forms::Label());
			this->lblR3 = (gcnew System::Windows::Forms::Label());
			this->lblR4 = (gcnew System::Windows::Forms::Label());
			this->lblR5 = (gcnew System::Windows::Forms::Label());
			this->lblR6 = (gcnew System::Windows::Forms::Label());
			this->lblR7 = (gcnew System::Windows::Forms::Label());
			this->lblR8 = (gcnew System::Windows::Forms::Label());
			this->lblR9 = (gcnew System::Windows::Forms::Label());
			this->lblR10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label2->Location = System::Drawing::Point(47, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 25);
			this->label2->TabIndex = 17;
			this->label2->Text = L"x";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label1->Location = System::Drawing::Point(278, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 25);
			this->label1->TabIndex = 16;
			this->label1->Text = L"yz";
			// 
			// lbly2
			// 
			this->lbly2->AutoSize = true;
			this->lbly2->BackColor = System::Drawing::Color::Transparent;
			this->lbly2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbly2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbly2->Location = System::Drawing::Point(102, 232);
			this->lbly2->Name = L"lbly2";
			this->lbly2->Size = System::Drawing::Size(23, 25);
			this->lbly2->TabIndex = 15;
			this->lbly2->Text = L"1";
			// 
			// lbly1
			// 
			this->lbly1->AutoSize = true;
			this->lbly1->BackColor = System::Drawing::Color::Transparent;
			this->lbly1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbly1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbly1->Location = System::Drawing::Point(102, 161);
			this->lbly1->Name = L"lbly1";
			this->lbly1->Size = System::Drawing::Size(23, 25);
			this->lbly1->TabIndex = 14;
			this->lbly1->Text = L"0";
			// 
			// lblx1
			// 
			this->lblx1->AutoSize = true;
			this->lblx1->BackColor = System::Drawing::Color::Transparent;
			this->lblx1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblx1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblx1->Location = System::Drawing::Point(158, 111);
			this->lblx1->Name = L"lblx1";
			this->lblx1->Size = System::Drawing::Size(34, 25);
			this->lblx1->TabIndex = 13;
			this->lblx1->Text = L"00";
			// 
			// lblx2
			// 
			this->lblx2->AutoSize = true;
			this->lblx2->BackColor = System::Drawing::Color::Transparent;
			this->lblx2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblx2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblx2->Location = System::Drawing::Point(237, 111);
			this->lblx2->Name = L"lblx2";
			this->lblx2->Size = System::Drawing::Size(34, 25);
			this->lblx2->TabIndex = 12;
			this->lblx2->Text = L"01";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->lblR10);
			this->panel1->Controls->Add(this->lblR9);
			this->panel1->Controls->Add(this->lblR8);
			this->panel1->Controls->Add(this->lblR7);
			this->panel1->Controls->Add(this->lblR6);
			this->panel1->Controls->Add(this->lblR5);
			this->panel1->Controls->Add(this->lblR4);
			this->panel1->Controls->Add(this->lblR3);
			this->panel1->Controls->Add(this->lblR2);
			this->panel1->Controls->Add(this->lblR1);
			this->panel1->Controls->Add(this->lbl06);
			this->panel1->Controls->Add(this->lbl07);
			this->panel1->Controls->Add(this->lbl08);
			this->panel1->Controls->Add(this->lbl09);
			this->panel1->Controls->Add(this->lbl00);
			this->panel1->Controls->Add(this->lbl01);
			this->panel1->Controls->Add(this->lbl11);
			this->panel1->Controls->Add(this->lbl10);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->panel1->Location = System::Drawing::Point(133, 139);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 147);
			this->panel1->TabIndex = 11;
			// 
			// lbl06
			// 
			this->lbl06->AutoSize = true;
			this->lbl06->BackColor = System::Drawing::Color::Transparent;
			this->lbl06->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl06->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl06->Location = System::Drawing::Point(193, 22);
			this->lbl06->Name = L"lbl06";
			this->lbl06->Size = System::Drawing::Size(25, 30);
			this->lbl06->TabIndex = 12;
			this->lbl06->Text = L"0";
			// 
			// lbl07
			// 
			this->lbl07->AutoSize = true;
			this->lbl07->BackColor = System::Drawing::Color::Transparent;
			this->lbl07->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl07->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl07->Location = System::Drawing::Point(272, 22);
			this->lbl07->Name = L"lbl07";
			this->lbl07->Size = System::Drawing::Size(25, 30);
			this->lbl07->TabIndex = 13;
			this->lbl07->Text = L"0";
			// 
			// lbl08
			// 
			this->lbl08->AutoSize = true;
			this->lbl08->BackColor = System::Drawing::Color::Transparent;
			this->lbl08->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl08->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl08->Location = System::Drawing::Point(272, 93);
			this->lbl08->Name = L"lbl08";
			this->lbl08->Size = System::Drawing::Size(25, 30);
			this->lbl08->TabIndex = 14;
			this->lbl08->Text = L"0";
			// 
			// lbl09
			// 
			this->lbl09->AutoSize = true;
			this->lbl09->BackColor = System::Drawing::Color::Transparent;
			this->lbl09->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl09->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl09->Location = System::Drawing::Point(193, 93);
			this->lbl09->Name = L"lbl09";
			this->lbl09->Size = System::Drawing::Size(25, 30);
			this->lbl09->TabIndex = 15;
			this->lbl09->Text = L"0";
			// 
			// lbl00
			// 
			this->lbl00->AutoSize = true;
			this->lbl00->BackColor = System::Drawing::Color::Transparent;
			this->lbl00->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl00->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl00->Location = System::Drawing::Point(38, 22);
			this->lbl00->Name = L"lbl00";
			this->lbl00->Size = System::Drawing::Size(25, 30);
			this->lbl00->TabIndex = 8;
			this->lbl00->Text = L"0";
			// 
			// lbl01
			// 
			this->lbl01->AutoSize = true;
			this->lbl01->BackColor = System::Drawing::Color::Transparent;
			this->lbl01->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl01->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl01->Location = System::Drawing::Point(117, 22);
			this->lbl01->Name = L"lbl01";
			this->lbl01->Size = System::Drawing::Size(25, 30);
			this->lbl01->TabIndex = 9;
			this->lbl01->Text = L"0";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->BackColor = System::Drawing::Color::Transparent;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl11->Location = System::Drawing::Point(117, 93);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(25, 30);
			this->lbl11->TabIndex = 10;
			this->lbl11->Text = L"0";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->BackColor = System::Drawing::Color::Transparent;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lbl10->Location = System::Drawing::Point(38, 93);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(25, 30);
			this->lbl10->TabIndex = 11;
			this->lbl10->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label4->Location = System::Drawing::Point(313, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"11";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label5->Location = System::Drawing::Point(392, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"10";
			// 
			// btnVolver2
			// 
			this->btnVolver2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnVolver2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->btnVolver2->FlatAppearance->BorderSize = 3;
			this->btnVolver2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnVolver2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVolver2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnVolver2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->btnVolver2->Location = System::Drawing::Point(456, 307);
			this->btnVolver2->Name = L"btnVolver2";
			this->btnVolver2->Size = System::Drawing::Size(69, 34);
			this->btnVolver2->TabIndex = 21;
			this->btnVolver2->Text = L"Volver";
			this->btnVolver2->UseVisualStyleBackColor = false;
			this->btnVolver2->Click += gcnew System::EventHandler(this, &MyForm1::btnVolver2_Click);
			// 
			// lblResp
			// 
			this->lblResp->AutoSize = true;
			this->lblResp->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lblResp->Location = System::Drawing::Point(56, 312);
			this->lblResp->Name = L"lblResp";
			this->lblResp->Size = System::Drawing::Size(14, 21);
			this->lblResp->TabIndex = 22;
			this->lblResp->Text = L" ";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(-2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(545, 53);
			this->panel2->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label6->Location = System::Drawing::Point(169, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 30);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Tabla de Karnaugh";
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
			this->lblR1->Location = System::Drawing::Point(84, 37);
			this->lblR1->Name = L"lblR1";
			this->lblR1->Size = System::Drawing::Size(11, 6);
			this->lblR1->TabIndex = 16;
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
			this->lblR2->Location = System::Drawing::Point(165, 37);
			this->lblR2->Name = L"lblR2";
			this->lblR2->Size = System::Drawing::Size(11, 6);
			this->lblR2->TabIndex = 17;
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
			this->lblR3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR3->Location = System::Drawing::Point(239, 37);
			this->lblR3->Name = L"lblR3";
			this->lblR3->Size = System::Drawing::Size(11, 6);
			this->lblR3->TabIndex = 18;
			this->lblR3->Text = L"        ";
			this->lblR3->Visible = false;
			// 
			// lblR4
			// 
			this->lblR4->AutoSize = true;
			this->lblR4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR4->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR4->Location = System::Drawing::Point(84, 108);
			this->lblR4->Name = L"lblR4";
			this->lblR4->Size = System::Drawing::Size(11, 6);
			this->lblR4->TabIndex = 19;
			this->lblR4->Text = L"        ";
			this->lblR4->Visible = false;
			// 
			// lblR5
			// 
			this->lblR5->AutoSize = true;
			this->lblR5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR5->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR5->Location = System::Drawing::Point(165, 108);
			this->lblR5->Name = L"lblR5";
			this->lblR5->Size = System::Drawing::Size(11, 6);
			this->lblR5->TabIndex = 20;
			this->lblR5->Text = L"        ";
			this->lblR5->Visible = false;
			// 
			// lblR6
			// 
			this->lblR6->AutoSize = true;
			this->lblR6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR6->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 3.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR6->Location = System::Drawing::Point(239, 108);
			this->lblR6->Name = L"lblR6";
			this->lblR6->Size = System::Drawing::Size(11, 6);
			this->lblR6->TabIndex = 21;
			this->lblR6->Text = L"        ";
			this->lblR6->Visible = false;
			// 
			// lblR7
			// 
			this->lblR7->AutoSize = true;
			this->lblR7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR7->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR7->Location = System::Drawing::Point(40, 61);
			this->lblR7->Name = L"lblR7";
			this->lblR7->Size = System::Drawing::Size(10, 15);
			this->lblR7->TabIndex = 22;
			this->lblR7->Text = L" ";
			this->lblR7->Visible = false;
			// 
			// lblR8
			// 
			this->lblR8->AutoSize = true;
			this->lblR8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR8->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR8->Location = System::Drawing::Point(119, 61);
			this->lblR8->Name = L"lblR8";
			this->lblR8->Size = System::Drawing::Size(10, 15);
			this->lblR8->TabIndex = 23;
			this->lblR8->Text = L" ";
			this->lblR8->Visible = false;
			// 
			// lblR9
			// 
			this->lblR9->AutoSize = true;
			this->lblR9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR9->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR9->Location = System::Drawing::Point(195, 61);
			this->lblR9->Name = L"lblR9";
			this->lblR9->Size = System::Drawing::Size(10, 15);
			this->lblR9->TabIndex = 24;
			this->lblR9->Text = L" ";
			this->lblR9->Visible = false;
			// 
			// lblR10
			// 
			this->lblR10->AutoSize = true;
			this->lblR10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lblR10->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblR10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblR10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR10->Location = System::Drawing::Point(274, 61);
			this->lblR10->Name = L"lblR10";
			this->lblR10->Size = System::Drawing::Size(10, 15);
			this->lblR10->TabIndex = 25;
			this->lblR10->Text = L" ";
			this->lblR10->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->ClientSize = System::Drawing::Size(537, 353);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lblResp);
			this->Controls->Add(this->btnVolver2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbly2);
			this->Controls->Add(this->lbly1);
			this->Controls->Add(this->lblx1);
			this->Controls->Add(this->lblx2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		lblResp->Text = "";

		if (N1 == 1) {
			lbl00->Text = "1";
			
		}
		else
		{
			lbl00->Text = "0";
		}
		if (N2 == 1) {
			lbl01->Text = "1";
			
		}

		else
		{
			lbl01->Text = "0";
		}
		if (N3 == 1) {
			lbl07->Text = "1";
			
		}
		else
		{
			lbl07->Text = "0";
		}
		if (N4 == 1) {
			lbl06->Text = "1";
			
		}
		else
		{
			lbl06->Text = "0";
		}
		if (N5 == 1) {
			lbl10->Text = "1";
			
		}
		else
		{
			lbl10->Text = "0";
		}
		if (N6 == 1) {
			lbl11->Text = "1";
			
		}
		else
		{
			lbl11->Text = "0";
		}
		if (N7 == 1) {
			lbl08->Text = "1";
			
		}
		else
		{
			lbl08->Text = "0";
		}
		if (N8 == 1) {
			lbl09->Text = "1";
			
		}
		else
		{
			lbl09->Text = "0";
		}

		//if padree!!!!!!

		if (N1 == 1 && N2 == 1 && N3 == 1 && N4 == 1 && N5 == 1 && N6 == 1 && N7 == 1 && N8 == 1) {

			lblResp->Text += "+ x' ";
			lblR1->Visible = true;
			lblR2->Visible = true;
			lblR3->Visible = true;
			lblR4->Visible = true;
			lblR5->Visible = true;
			lblR6->Visible = true;
			lblR7->Visible = true;
			lblR8->Visible = true;
			lblR9->Visible = true;
			lblR10->Visible = true;
		}
		if (!(N1 == 1 && N2 == 1 && N3 == 1 && N4 == 1 && N5 == 1 && N6 == 1 && N7 == 1 && N8 == 1))
		{
			if (N1 == 1 && N2 == 1 && N5 == 1 && N6 == 1) {

				lblR1->Visible = true;
				lblR4->Visible = true;
				lblR7->Visible = true;
				lblR8->Visible = true;
				lblResp->Text += "+  y' ";

				if (N4 == 1 && N3 == 1) {

					lblR3->Visible = true;
					lblResp->Text += "+  x'y ";
				}
				if (N3 == 1 && N7 == 1) {

					lblR10->Visible = true;
					lblResp->Text += "+ yz' ";
				}
				if (N8 == 1 && N7 == 1) {

					lblR6->Visible = true;
					lblResp->Text += "+ xy ";
				}
				if (N4 == 1 && N8 == 1) {

					lblR9->Visible = true;
					lblResp->Text += "+ yz ";
				}
			}

			if (N2 == 1 && N6 == 1 && N4 == 1 && N8 == 1) {

				lblR2->Visible = true;
				lblR5->Visible = true;
				lblR8->Visible = true;
				lblR9->Visible = true;
				lblResp->Text += "+ z ";

				if (N1 == 1 && N5 == 1) {

					lblR7->Visible = true;
					lblResp->Text += "+ y'z' ";
				}
				if (N3 == 1 && N7 == 1) {

					lblR10->Visible = true;
					lblResp->Text += "+ yz' ";
				}
			}

			if (N4 == 1 && N8 == 1 && N3 == 1 && N7 == 1) {

				lblR3->Visible = true;
				lblR6->Visible = true;
				lblR9->Visible = true;
				lblR10->Visible = true;
				lblResp->Text += "+ y ";

				if (N1 == 1 && N5 == 1) {

					lblR7->Visible = true;
					lblResp->Text += "+ y'z' ";
				}

				if (N2 == 1 && N6 == 1) {

					lblR8->Visible = true;
					lblResp->Text += "+ y'z ";
				}

				if (N1 == 1 && N2 == 1) {

					lblR1->Visible = true;
					lblResp->Text += "+ x'y' ";
				}
				if (N5 == 1 && N6 == 1) {

					lblR4->Visible = true;
					lblResp->Text += " + xy' ";
				}
			}
		}
		
		if (!(N1 == 1 && N2 == 1 && N3 == 1 && N4 == 1 && N5 == 1 && N6 == 1 && N7 == 1 && N8 == 1) && !
			(N1 == 1 && N2 == 1 && N5 == 1 && N6 == 1)&& !(N2 == 1 && N6 == 1 && N4 == 1 && N8 == 1) && 
			!(N4 == 1 && N8 == 1 && N3 == 1 && N7 == 1))

		{
			//1
			if (N1 == 1 && N5 == 1) {

				lblR7->Visible = true;
				lblResp->Text += "+ y'z' ";
			}
			//2
			if (N1 == 1 && N2 == 1) {

				lblR1->Visible = true;
				lblResp->Text += "+ x'y' ";
			}
			//3

			if (N2 == 1 && N6 == 1) {

				lblR8->Visible = true;
				lblResp->Text += "+ y'z ";
			}
			//4
			if (N2 == 1 && N4 == 1) {

				lblR2->Visible = true;
				lblResp->Text += "+ x'z ";
			}
			//5
			if (N4 == 1 && N8 == 1) {
				
				lblR9->Visible = true;
				lblResp->Text += "+ yz ";
			}
			//6
			if (N4 == 1 && N3 == 1) {

				lblR3->Visible = true;
				lblResp->Text += "+  x'y ";
			}
			//7
			if (N5 == 1 && N6 == 1) {

				lblR4->Visible = true;
				lblResp->Text += " + xy' ";
			}
			//8
			if (N6 == 1 && N8 == 1) {

				lblR5->Visible = true;
				lblResp->Text += "+  xz ";
			}
			//9
			if (N8 == 1 && N7 == 1) {

				lblR6->Visible = true;
				lblResp->Text += "+ xy ";
			}
			//00
			if (N3 == 1 && N7 == 1) {

				lblR10->Visible = true;
				lblResp->Text += "+ yz' ";
			}
		}

		//para cuando sea 1
		if (!(N1 == 1 && N2 == 1 && N3 == 1 && N4 == 1 && N5 == 1 && N6 == 1 && N7 == 1 && N8 == 1) && !
			(N1 == 1 && N2 == 1 && N5 == 1 && N6 == 1) && !(N2 == 1 && N6 == 1 && N4 == 1 && N8 == 1) &&
			!(N4 == 1 && N8 == 1 && N3 == 1 && N7 == 1)&&!(N1 == 1 && N5 == 1)&&!(N1 == 1 && N2 == 1)&&!(N2 == 1 && N6 == 1)
			&& !(N2 == 1 && N4 == 1) && !(N4 == 1 && N8 == 1)&&!(N4 == 1 && N3 == 1)&&!(N5 == 1 && N6 == 1)
			&&!(N6 == 1 && N8 == 1)&&!(N8 == 1 && N7 == 1)&&!(N3 == 1 && N7 == 1))
		{
			if (N1 == 1) {

				lblResp->Text += "+ x'y'z' ";
			}

			if (N2 == 1) {

				lblResp->Text += "+ x'y'z ";
			}

			if (N3 == 1) {
				;
				lblResp->Text += "+x'yz'  ";
			}

			if (N4 == 1) {

				lblResp->Text += "+ x'yz  ";
			}

			if (N5 == 1) {

				lblResp->Text += " + xy'z' ";
			}

			if (N6 == 1) {

				lblResp->Text += "+  xy'z ";
			}

			if (N7 == 1) {

				lblResp->Text += "+ xyz' ";
			}

			if (N8 == 1) {

				lblResp->Text += "+ xyz ";
			}

		}
		
	
		
		//para cuando sea 8
		

	}
private: System::Void btnVolver2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
