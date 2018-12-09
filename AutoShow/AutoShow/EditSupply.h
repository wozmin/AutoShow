#pragma once
#include "EngineRepository.h"

namespace AutoShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditSupply
	/// </summary>
	public ref class EditSupply : public System::Windows::Forms::Form
	{
	public:
		EditSupply(Engine^ engine)
		{
			InitializeComponent();
			_engine = engine;
			_engineRepository = gcnew EngineRepository();
			if (engine) {
				FillFormFields();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditSupply()
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::ComponentModel::IContainer^  components;
	private: EngineRepository^ _engineRepository;
	private: Engine^ _engine;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditSupply::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Cyan;
			this->label1->Location = System::Drawing::Point(166, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Engine";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(104, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(83, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fuel type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(87, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Capacity:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(30, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fuel consumption:";
			// 
			// label6
			// 
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(167, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 33);
			this->label6->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(167, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 34);
			this->label7->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(167, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 33);
			this->label8->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(167, 165);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 33);
			this->label9->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(170, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditSupply::textBox1_Validating);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(170, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditSupply::textBox2_Validating);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(170, 201);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(145, 20);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditSupply::numericUpDown1_Validating);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(170, 261);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(145, 20);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditSupply::numericUpDown2_Validating);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Coral;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(230, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditSupply::Cancel);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(67, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditSupply::SaveEngine);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			this->errorProvider2->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"errorProvider2.Icon")));
			// 
			// EditSupply
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(364, 448);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditSupply";
			this->Text = L"EditSupply";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void FillFormFields() {
		this->textBox1->Text = _engine->name;
		this->textBox2->Text = _engine->fuelType;
		this->numericUpDown1->Value = _engine->capacity;
		this->numericUpDown2->Value = _engine->fuelConsumption;
	}

	private:Engine^ GetFormFields() {
		return gcnew Engine(
			textBox1->Text,
			textBox2->Text,
			Convert::ToInt32(numericUpDown1->Value),
			Convert::ToInt32(numericUpDown2->Value)
		);
	}
	private: System::Void SaveEngine(System::Object^ sender, System::EventArgs^ e) {
		if (_engine != nullptr) {
			Engine^ engineToEdit = GetFormFields();
			engineToEdit->id = _engine->id;
			_engineRepository->UpdateEngine(engineToEdit);
			this->Close();
		}
		else {
			_engineRepository->CreateEngine(GetFormFields());
			this->Close();
		}
	}

	private: System::Void Cancel(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		if (textBox1->Text == "") {
			errorProvider2->Clear();
			errorProvider1->SetError(textBox1, "The name field is required");
			label8->Text = errorProvider1->GetError(textBox1);
			button1->Enabled = false;
		}
		else {
			label8->Text = "";
			errorProvider1->Clear();
			errorProvider2->SetError(textBox1, " ");
			button1->Enabled = true;
		}
	}
private: System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (textBox2->Text == "") {
		errorProvider2->Clear();
		errorProvider1->SetError(textBox2, "The fuel type field is required");
		label9->Text = errorProvider1->GetError(textBox2);
		button1->Enabled = false;
	}
	else {
		label9->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(textBox2, " ");
		button1->Enabled = true;
	}
}
private: System::Void numericUpDown1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (numericUpDown1->Value <= 0) {
		errorProvider2->Clear();
		errorProvider1->SetError(numericUpDown1, "The capacity must be grater than 0");
		label7->Text = errorProvider1->GetError(numericUpDown1);
		this->button1->Enabled = false;
	}
	else {
		label7->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(numericUpDown1, " ");
		this->button1->Enabled = true;
	}
}
private: System::Void numericUpDown2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	if (numericUpDown2->Value <= 0) {
		errorProvider2->Clear();
		errorProvider1->SetError(numericUpDown2, "The fuel consumption must be grater than 0");
		label6->Text = errorProvider1->GetError(numericUpDown2);
		this->button1->Enabled = false;
	}
	else {
		label6->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(numericUpDown2, " ");
		this->button1->Enabled = true;
	}
}
};
}
