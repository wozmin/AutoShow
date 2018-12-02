#pragma once
#include "Customer.h"

namespace AutoShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditCustomer
	/// </summary>
	public ref class EditCustomer : public System::Windows::Forms::Form
	{
	public:
		EditCustomer(Customer^ customer)
		{
			InitializeComponent();
			_customer = cutomer;
			_customerRepository = gcnew CustomerRepository();
			if (customer) {
				FillFormFields();
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label8;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::ComponentModel::IContainer^  components;
	private: Customer^ _customer;
	private: CustomerRepository^ _customerRepository;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkRed;
			this->label8->Location = System::Drawing::Point(136, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 26);
			this->label8->TabIndex = 18;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(134, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 26);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Customer";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCustomer::textBox1_Validating);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(65, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(136, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 26);
			this->label2->TabIndex = 21;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 20);
			this->textBox2->TabIndex = 19;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCustomer::textBox2_Validating);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(65, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Address:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(68, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// EditCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 282);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"EditCustomer";
			this->Text = L"EditCustomer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void FillFormFields() {
		this->textBox1->Text = _customer->name;
		this->textBox2->Text = _customer->address;
	}

	private:Customer^ GetFormFields() {
		return gcnew Customer(
			_customer->id,
			textBox1->Text,
			textBox2->Text
		);
	}
	private: System::Void SaveCustomer(System::Object^ sender, System::EventArgs^ e) {
		if (_customer != nullptr) {
			_customerRepository->UpdateCustomer(GetFormFields());
			this->Close();
		}
		else {
			_customerRepository->CreateCustomer(GetFormFields());
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
		errorProvider1->SetError(textBox2, "The address field is required");
		label2->Text = errorProvider1->GetError(textBox2);
		button1->Enabled = false;

	}
	else {
		label2->Text = "";
		errorProvider1->Clear();
		errorProvider2->SetError(textBox2, " ");
		button1->Enabled = true;
	}
}
};
}
