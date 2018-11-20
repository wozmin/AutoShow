#pragma once

namespace AutoShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditCar
	/// </summary>
	public ref class EditCar : public System::Windows::Forms::Form
	{
	public:
		EditCar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditCar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(134, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			this->label1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::textBox1_Validating);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(113, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Producer:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(138, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Price:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(56, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Transmission type:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(137, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Color:";
			this->label5->Click += gcnew System::EventHandler(this, &EditCar::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(66, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Passed distance:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(207, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::textBox1_Validating);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 231);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EditCar::textBox3_TextChanged);
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::textBox3_Validating);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(207, 283);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::textBox4_Validating);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(207, 335);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(147, 20);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::numericUpDown1_Validating);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(207, 175);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(147, 20);
			this->numericUpDown2->TabIndex = 11;
			this->numericUpDown2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCar::numericUpDown2_Validating);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(207, 122);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(189, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 26);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Car";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkRed;
			this->label8->Location = System::Drawing::Point(205, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 26);
			this->label8->TabIndex = 14;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->ForeColor = System::Drawing::Color::DarkRed;
			this->label9->Location = System::Drawing::Point(206, 198);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 26);
			this->label9->TabIndex = 15;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			this->errorProvider2->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"errorProvider2.Icon")));
			// 
			// label10
			// 
			this->label10->ForeColor = System::Drawing::Color::DarkRed;
			this->label10->Location = System::Drawing::Point(205, 254);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(149, 26);
			this->label10->TabIndex = 16;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::DarkRed;
			this->label11->Location = System::Drawing::Point(206, 306);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(149, 26);
			this->label11->TabIndex = 17;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::DarkRed;
			this->label12->Location = System::Drawing::Point(206, 358);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 26);
			this->label12->TabIndex = 18;
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(107, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(279, 420);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// EditCar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 474);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditCar";
			this->Text = L"add/edit car";
			this->Load += gcnew System::EventHandler(this, &EditCar::EditCar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (textBox1->Text == "") {
		errorProvider2->Clear();
		errorProvider1->SetError(textBox1, "The name field is required");
		label8->Text = errorProvider1->GetError(textBox1);
	}
	else {
		label8->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(textBox1, " ");
	}
}
private: System::Void numericUpDown2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (numericUpDown2->Value <= 0) {
		errorProvider2->Clear();
		errorProvider1->SetError(numericUpDown2, "Price value must be grater than 0");
		label9->Text = errorProvider1->GetError(numericUpDown2);
	}
	else {
		label9->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(numericUpDown2, " ");
	}
}
private: System::Void textBox3_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (textBox3->Text->Empty) {
		errorProvider2->Clear();
		errorProvider1->SetError(textBox3, "Transmission type field is required");
		label10->Text = errorProvider1->GetError(textBox3);
	}
	else {
		label10->Text = " ";
		errorProvider1->Clear();
		errorProvider2->SetError(textBox3, " ");
	}
}
private: System::Void EditCar_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (textBox4->Text == "") {
		errorProvider2->Clear();
		errorProvider1->SetError(textBox4, "Color field is required");
		label11->Text = errorProvider1->GetError(textBox4);
	}
	else {
		label11->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(textBox4, " ");
	}
}
private: System::Void numericUpDown1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (numericUpDown1->Value<=0) {
		errorProvider2->Clear();
		errorProvider1->SetError(numericUpDown1, "The passed distance must be grater than 0");
		label12->Text = errorProvider1->GetError(textBox1);
	}
	else {
		label12->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(numericUpDown1, " ");
	}
}
};
}
