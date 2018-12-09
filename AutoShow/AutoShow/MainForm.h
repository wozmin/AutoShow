#pragma once
#include "Car.h"
#include "EditCarType.h"
#include "EditCustomer.h"
#include "EditProducer.h"
#include "EditSelling.h"
#include "EditSupply.h"
#include "EditCar.h"

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
			InitCarsTable(nullptr);
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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(154, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(578, 225);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Turquoise;
			this->label1->Location = System::Drawing::Point(375, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cars";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(190, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 43);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(380, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 43);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(568, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 43);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::YellowGreen;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(23, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Cars";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::YellowGreen;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(23, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Producers";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::YellowGreen;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(23, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Car Types";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::YellowGreen;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Maroon;
			this->button7->Location = System::Drawing::Point(23, 264);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Customers";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::YellowGreen;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::Maroon;
			this->button8->Location = System::Drawing::Point(23, 310);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Sellings";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::YellowGreen;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::Maroon;
			this->button9->Location = System::Drawing::Point(23, 356);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Engines";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(377, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Search by name:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(522, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 12;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(757, 483);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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

		void RemoveListeners() {
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateCar);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateCar);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteCar);
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateCarProducer);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateCarProducer);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteCarProducer);
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateSelling);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateSelling);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteSelling);
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateCustomer);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateCustomer);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteCustomer);
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateEngine);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateEngine);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteEngine);
			button1->Click -= gcnew System::EventHandler(this, &MainForm::CreateCarType);
			button2->Click -= gcnew System::EventHandler(this, &MainForm::UpdateCarType);
			button3->Click -= gcnew System::EventHandler(this, &MainForm::DeleteCarType);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchCarsByName);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchCarProducersByName);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchCarTypesByName);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchCustomersByName);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchEnginesByName);
			textBox1->TextChanged -= gcnew System::EventHandler(this, &MainForm::SearchSellingsByName);
		}

#pragma region Cars
		void InitCarsTable(List<Car^>^ cars) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Producer");
			headers->Add("Name");
			headers->Add("Price");
			headers->Add("Engine");
			headers->Add("Car type");
			headers->Add("Color");
			SetTableHeaders(headers);
			dataGridView1->Rows->Clear();
			if (cars == nullptr) {
				cars = _carRepository->GetAllCars();
			}
			int i = 0;
			for each (Car^ car in cars) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = car->producer;
				this->dataGridView1->Rows[i]->Cells[2]->Value = car->name;
				this->dataGridView1->Rows[i]->Cells[3]->Value = car->price;
				this->dataGridView1->Rows[i]->Cells[4]->Value = car->engine;
				this->dataGridView1->Rows[i]->Cells[5]->Value = car->carType;
				this->dataGridView1->Rows[i]->Cells[6]->Value = car->color;
				this->dataGridView1->Rows[i]->Cells[7]->Value = car->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCar);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCar);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCar);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchCarsByName);
		}

		void UpdateCar(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			Car^ carToEdit = _carRepository->GetCarById(id);
			EditCar^ form = gcnew EditCar(carToEdit);
			form->ShowDialog();
			InitCarsTable(nullptr);
		}



		void CreateCar(System::Object^  sender, System::EventArgs^  e) {
			EditCar^ form = gcnew EditCar(nullptr);
			form->ShowDialog();
			InitCarsTable(nullptr);
		}

		void DeleteCar(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[7]->Value->ToString());
			_carRepository->DeleteCar(id);
			InitCarsTable(nullptr);
		}

		void SearchCarsByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitCarsTable(nullptr);
			}
			else {
				InitCarsTable(_carRepository->GetCarsByName(textBox1->Text));
			}
		}
#pragma endregion
#pragma region CarProducers
		void InitCarProducersTable(List<CarProducer^>^ carProducers) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Name");
			headers->Add("Country");
			SetTableHeaders(headers);
			if (carProducers == nullptr) {
				carProducers = _carProducerRepository->GetAllCarProducers();
			}
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (CarProducer^ carProducer in carProducers) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = carProducer->name;
				this->dataGridView1->Rows[i]->Cells[2]->Value = carProducer->country;
				this->dataGridView1->Rows[i]->Cells[3]->Value = carProducer->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCarProducer);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCarProducer);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCarProducer);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchCarProducersByName);
		}

		void UpdateCarProducer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			CarProducer^ carProducerToEdit = _carProducerRepository->GetCarProducerById(id);
			EditProducer^ form = gcnew EditProducer(carProducerToEdit);
			form->ShowDialog();
			InitCarProducersTable(nullptr);
		}



		void CreateCarProducer(System::Object^  sender, System::EventArgs^  e) {
			EditProducer^ form = gcnew EditProducer(nullptr);
			form->ShowDialog();
			InitCarProducersTable(nullptr);
		}

		void DeleteCarProducer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			_carProducerRepository->DeleteCarProducer(id);
			InitCarProducersTable(nullptr);
		}

		void SearchCarProducersByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitCarProducersTable(nullptr);
			}
			else {
				InitCarProducersTable(_carProducerRepository->GetCarProducersByName(textBox1->Text));
			}
		}
#pragma endregion
#pragma region Customers
		void InitCustomersTable(List<Customer^>^ customers) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Name");
			headers->Add("Address");
			SetTableHeaders(headers);
			if (customers == nullptr) {
				customers = _customerRepository->GetAllCustomers();
			}
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (Customer^ customer in customers) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = customer->name;
				this->dataGridView1->Rows[i]->Cells[2]->Value = customer->address;
				this->dataGridView1->Rows[i]->Cells[3]->Value = customer->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCustomer);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCustomer);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCustomer);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchCustomersByName);
		}

		void UpdateCustomer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			Customer^ customerToEdit = _customerRepository->GetCustomerById(id);
			EditCustomer^ form = gcnew EditCustomer(customerToEdit);
			form->ShowDialog();
			InitCustomersTable(nullptr);
		}

		void CreateCustomer(System::Object^  sender, System::EventArgs^  e) {
			EditCustomer^ form = gcnew EditCustomer(nullptr);
			form->ShowDialog();
			InitCustomersTable(nullptr);
		}

		void DeleteCustomer(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			_customerRepository->DeleteCustomer(id);
			InitCustomersTable(nullptr);
		}

		void SearchCustomersByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitCustomersTable(nullptr);
			}
			else {
				InitCustomersTable(_customerRepository->GetCustomersByName(textBox1->Text));
			}
		}
#pragma endregion
#pragma region Sellings
		void InitSellingsTable(List<Selling^>^ sellings) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Car");
			headers->Add("Customer");
			headers->Add("Count");
			headers->Add("Date");
			SetTableHeaders(headers);
			if (sellings == nullptr) {
				sellings =_sellingRepository->GetAllSellings();
			}
			
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (Selling^ selling in sellings) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = selling->customer;
				this->dataGridView1->Rows[i]->Cells[2]->Value = selling->car;
				this->dataGridView1->Rows[i]->Cells[3]->Value = selling->count;
				this->dataGridView1->Rows[i]->Cells[4]->Value = selling->date.ToString("dd.MM.yyyy");
				this->dataGridView1->Rows[i]->Cells[5]->Value = selling->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateSelling);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateSelling);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteSelling);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchSellingsByName);
		}

		void UpdateSelling(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[5]->Value->ToString());
			Selling^ sellingToEdit = _sellingRepository->GetSellingById(id);
			EditSelling^ form = gcnew EditSelling(sellingToEdit);
			form->ShowDialog();
			InitSellingsTable(nullptr);
		}

		void CreateSelling(System::Object^  sender, System::EventArgs^  e) {
			EditSelling^ form = gcnew EditSelling(nullptr);
			form->ShowDialog();
			InitSellingsTable(nullptr);
		}

		void DeleteSelling(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[5]->Value->ToString());
			_sellingRepository->DeleteSelling(id);
			InitSellingsTable(nullptr);
		}

		void SearchSellingsByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitSellingsTable(nullptr);
			}
			else {
				InitSellingsTable(_sellingRepository->GetSellingsByName(textBox1->Text));
			}
		}
#pragma endregion
#pragma region Engines
		void InitEnginesTable(List<Engine^>^ engines) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Name");
			headers->Add("Fuel type");
			headers->Add("Capacity");
			headers->Add("Fuel consumption");
			SetTableHeaders(headers);
			if (engines == nullptr) {
				engines = _engineRepository->GetAllEngines();
			}
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (Engine^ engine in engines) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = engine->name;
				this->dataGridView1->Rows[i]->Cells[2]->Value = engine->fuelType;
				this->dataGridView1->Rows[i]->Cells[3]->Value = engine->capacity;
				this->dataGridView1->Rows[i]->Cells[4]->Value = engine->fuelConsumption;
				this->dataGridView1->Rows[i]->Cells[5]->Value = engine->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateEngine);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateEngine);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteEngine);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchEnginesByName);
		}

		void UpdateEngine(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[5]->Value->ToString());
			Engine^ engineToEdit = _engineRepository->GetEngineById(id);
			EditSupply^ form = gcnew EditSupply(engineToEdit);
			form->ShowDialog();
			InitEnginesTable(nullptr);
		}

		void CreateEngine(System::Object^  sender, System::EventArgs^  e) {
			EditSupply^ form = gcnew EditSupply(nullptr);
			form->ShowDialog();
			InitEnginesTable(nullptr);
		}

		void DeleteEngine(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[5]->Value->ToString());
			_engineRepository->DeleteEngine(id);
			InitEnginesTable(nullptr);
		}

		void SearchEnginesByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitEnginesTable(nullptr);
			}
			else {
				InitEnginesTable(_engineRepository->GetEnginesByName(textBox1->Text));
			}
		}
#pragma endregion
#pragma region CarTypes
		void InitCarTypesTable(List<CarType^>^ carTypes) {
			RemoveListeners();
			List<String^>^ headers = gcnew List<String^>();
			headers->Add("¹");
			headers->Add("Name");
			headers->Add("Description");
			SetTableHeaders(headers);
			if (carTypes == nullptr) {
				carTypes = _carTypeRepository->GetAllCarTypes();
			}
			dataGridView1->Rows->Clear();
			int i = 0;
			for each (CarType^ carType in carTypes) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				this->dataGridView1->Rows[i]->Cells[1]->Value = carType->name;
				this->dataGridView1->Rows[i]->Cells[2]->Value = carType->description;
				this->dataGridView1->Rows[i]->Cells[3]->Value = carType->id;
				i++;
			}
			button1->Click += gcnew System::EventHandler(this, &MainForm::CreateCarType);
			button2->Click += gcnew System::EventHandler(this, &MainForm::UpdateCarType);
			button3->Click += gcnew System::EventHandler(this, &MainForm::DeleteCarType);
			textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchCarTypesByName);
		}

		void UpdateCarType(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			CarType^ carTypeToEdit = _carTypeRepository->GetCarTypeById(id);
			EditCarType^ form = gcnew EditCarType(carTypeToEdit);
			form->ShowDialog();
			InitCarTypesTable(nullptr);
		}

		void CreateCarType(System::Object^  sender, System::EventArgs^  e) {
			EditCarType^ form = gcnew EditCarType(nullptr);
			form->ShowDialog();
			InitCarTypesTable(nullptr);
		}

		void DeleteCarType(System::Object^  sender, System::EventArgs^  e) {
			int selectedRow = dataGridView1->CurrentCell->RowIndex;
			int id = Int32::Parse(dataGridView1->Rows[selectedRow]->Cells[3]->Value->ToString());
			_carTypeRepository->DeleteCarType(id);
			InitCarTypesTable(nullptr);
		}

		void SearchCarTypesByName(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length == 0) {
				InitCarTypesTable(nullptr);
			}
			else {
				InitCarTypesTable(_carTypeRepository->GetCarTypesByName(textBox1->Text));
			}
		}
#pragma endregion



#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		InitCarsTable(nullptr);
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	InitCarProducersTable(nullptr);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	InitCustomersTable(nullptr);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	InitSellingsTable(nullptr);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	InitCarTypesTable(nullptr);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	InitEnginesTable(nullptr);
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
