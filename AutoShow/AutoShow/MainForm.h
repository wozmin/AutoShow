#pragma once
#include "Car.h"
#include "CarProducerRepository.h"
#include "CarRepository.h"
#include "EditCar.h"
#include "CarProducer.h"
#include "CarType.h"
#include "CarTypeRepository.h"
#include "Customer.h"
#include "CustomerRepository.h"
#include "EditCarType.h"
#include "EditCustomer.h"
#include "EditProducer.h"
#include "EditSelling.h"
#include "Engine.h"
#include "EngineRepository.h"
#include "Selling.h"
#include "SellingRepository.h"

namespace AutoShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Design;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			_carRepository = gcnew CarRepository();
			_carProducerRepository = gcnew CarProducerRepository();
			_carTypeRepository = gcnew CarTypeRepository();
			_engineRepository = gcnew EngineRepository();
			_customerRepository = gcnew CustomerRepository();
			_sellingRepository = gcnew SellingRepository();
			InitCarsTable();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: CarRepository^ _carRepository;
	private: CarProducerRepository^ _carProducerRepository;
	private: CarTypeRepository^ _carTypeRepository;
	private: EngineRepository^ _engineRepository;
	private: CustomerRepository^ _customerRepository;
	private: SellingRepository^ _sellingRepository;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(164, 102);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(525, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(375, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cars";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(179, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(381, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(590, 301);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Cars";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Producers";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 146);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Car Types";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 175);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Customers";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 204);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Sellings";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 233);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Engines";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 362);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private:

		void SetTableHeaders(List<String^>^ headers) {
			dataGridView1->Columns->Clear();
			for each (String^ header in headers)
			{
				dataGridView1->Columns->Add(header->Replace(" ", ""), header);
			}
			dataGridView1->Columns->Add("id", "id");
			dataGridView1->Columns["id"]->Visible = false;
		}

#pragma region Cars
		void InitCarsTable() {
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Producer");
			headers->Add("Name");
			headers->Add("Price");
			headers->Add("Transmission type");
			headers->Add("Passed distance");
			headers->Add("Color");
			SetTableHeaders(headers);
			List<Car^>^ cars = _carRepository->GetAllCars();
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (Car^ car in cars) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = car->producer;
				this->dataGridView1->Rows[i]->Cells[2]->Value = car->name;
				this->dataGridView1->Rows[i]->Cells[3]->Value = car->price;
				this->dataGridView1->Rows[i]->Cells[4]->Value = car->transmissionType;
				this->dataGridView1->Rows[i]->Cells[5]->Value = car->passedDistance;
				this->dataGridView1->Rows[i]->Cells[6]->Value = car->color;
				this->dataGridView1->Rows[i]->Cells[7]->Value = car->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCar);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCar);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCar);
		}

		void UpdateCar(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			Car^ carToEdit = _carRepository->GetCarById(id);
			EditCar^ form = gcnew EditCar(carToEdit);
			form->ShowDialog();
			InitCarsTable();
		}



		void CreateCar(System::Object^  sender, System::EventArgs^  e) {
			EditCar^ form = gcnew EditCar(nullptr);
			form->ShowDialog();
			InitCarsTable();
		}

		void DeleteCar(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			_carRepository->DeleteCar(id);
			InitCarsTable();
		}
#pragma endregion
#pragma region CarProducers
		void InitCarProducersTable() {
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Name");
			headers->Add("Country");
			SetTableHeaders(headers);
			List<CarProducer^>^ carProducers = _carProducerRepository->GetAllCarProducers();
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (CarProducer^ carProducer in carProducers) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = carProducer->name;
				this->dataGridView1->Rows[i]->Cells[2]->Value = carProducer->country;
				this->dataGridView1->Rows[i]->Cells[7]->Value = carProducer->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCarProducer);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCarProducer);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCarProducer);
		}

		void UpdateCarProducer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			CarProducer^ carProducerToEdit = _carProducerRepository->GetCarProducerById(id);
			EditProducer^ form = gcnew EditProducer(carProducerToEdit);
			form->ShowDialog();
			InitCarProducersTable();
		}



		void CreateCarProducer(System::Object^  sender, System::EventArgs^  e) {
			EditCar^ form = gcnew EditCar(nullptr);
			form->ShowDialog();
			InitCarProducersTable();
		}

		void DeleteCarProducer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			_carProducerRepository->DeleteCarProducer(id);
			InitCarProducersTable();
		}
#pragma endregion


#pragma endregion
	};
}
