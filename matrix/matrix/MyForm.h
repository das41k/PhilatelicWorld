#pragma once
#include "MyFormMatrix.h"
#include <list>
namespace matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		System::Collections::Generic::List<Collector^>^ collectors;
		System::Collections::Generic::List<String^>^ matrix;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Label^ label23;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label26;






	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::RichTextBox^ textBox7;



		   System::Collections::Generic::List<Mark^>^ marks;
	public:
		MyForm(void)
		{
			InitializeComponent();
			collectors = gcnew System::Collections::Generic::List<Collector^>();
			marks = gcnew System::Collections::Generic::List<Mark^>();
			matrix = gcnew System::Collections::Generic::List<String^>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabInclude;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ addColector;
	private: System::Windows::Forms::TabPage^ addMark;
	private: System::Windows::Forms::TabPage^ Seil;
	private: System::Windows::Forms::TabPage^ changeMark;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label15;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabInclude = (gcnew System::Windows::Forms::TabControl());
			this->addColector = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->addMark = (gcnew System::Windows::Forms::TabPage());
			this->textBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->Seil = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->changeMark = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tabInclude->SuspendLayout();
			this->addColector->SuspendLayout();
			this->addMark->SuspendLayout();
			this->Seil->SuspendLayout();
			this->changeMark->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabInclude
			// 
			this->tabInclude->Controls->Add(this->addColector);
			this->tabInclude->Controls->Add(this->addMark);
			this->tabInclude->Controls->Add(this->Seil);
			this->tabInclude->Controls->Add(this->changeMark);
			this->tabInclude->Controls->Add(this->tabPage1);
			this->tabInclude->Controls->Add(this->tabPage5);
			this->tabInclude->Location = System::Drawing::Point(2, 12);
			this->tabInclude->Name = L"tabInclude";
			this->tabInclude->SelectedIndex = 0;
			this->tabInclude->Size = System::Drawing::Size(1024, 451);
			this->tabInclude->TabIndex = 0;
			// 
			// addColector
			// 
			this->addColector->BackColor = System::Drawing::Color::Azure;
			this->addColector->Controls->Add(this->label5);
			this->addColector->Controls->Add(this->textBox5);
			this->addColector->Controls->Add(this->button1);
			this->addColector->Controls->Add(this->textBox4);
			this->addColector->Controls->Add(this->label4);
			this->addColector->Controls->Add(this->textBox3);
			this->addColector->Controls->Add(this->label3);
			this->addColector->Controls->Add(this->label2);
			this->addColector->Controls->Add(this->textBox2);
			this->addColector->Controls->Add(this->label1);
			this->addColector->Controls->Add(this->textBox1);
			this->addColector->Location = System::Drawing::Point(4, 22);
			this->addColector->Name = L"addColector";
			this->addColector->Padding = System::Windows::Forms::Padding(3);
			this->addColector->Size = System::Drawing::Size(1016, 425);
			this->addColector->TabIndex = 0;
			this->addColector->Text = L"Добавления коллекционера";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(644, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Страна";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(543, 200);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(292, 20);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(197, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(554, 66);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить коллекционера";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 200);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(250, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Контакт";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(690, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(762, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Отчество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(452, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Имя";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(358, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(248, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Фамилия";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 20);
			this->textBox1->TabIndex = 0;
			// 
			// addMark
			// 
			this->addMark->BackColor = System::Drawing::Color::Azure;
			this->addMark->Controls->Add(this->textBox7);
			this->addMark->Controls->Add(this->dateTimePicker2);
			this->addMark->Controls->Add(this->dateTimePicker1);
			this->addMark->Controls->Add(this->textBox25);
			this->addMark->Controls->Add(this->label26);
			this->addMark->Controls->Add(this->label15);
			this->addMark->Controls->Add(this->label14);
			this->addMark->Controls->Add(this->comboBox1);
			this->addMark->Controls->Add(this->label13);
			this->addMark->Controls->Add(this->label11);
			this->addMark->Controls->Add(this->textBox12);
			this->addMark->Controls->Add(this->label12);
			this->addMark->Controls->Add(this->label6);
			this->addMark->Controls->Add(this->textBox6);
			this->addMark->Controls->Add(this->button2);
			this->addMark->Controls->Add(this->label7);
			this->addMark->Controls->Add(this->textBox8);
			this->addMark->Controls->Add(this->label8);
			this->addMark->Controls->Add(this->label9);
			this->addMark->Controls->Add(this->textBox9);
			this->addMark->Controls->Add(this->label10);
			this->addMark->Controls->Add(this->textBox10);
			this->addMark->Location = System::Drawing::Point(4, 22);
			this->addMark->Name = L"addMark";
			this->addMark->Padding = System::Windows::Forms::Padding(3);
			this->addMark->Size = System::Drawing::Size(1016, 425);
			this->addMark->TabIndex = 1;
			this->addMark->Text = L"Добавить марку коллекционеру";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(15, 147);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(297, 116);
			this->textBox7->TabIndex = 40;
			this->textBox7->Text = L"";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(745, 204);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 39;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(409, 303);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 38;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(671, 81);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(134, 20);
			this->textBox25->TabIndex = 37;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(685, 40);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(120, 25);
			this->label26->TabIndex = 36;
			this->label26->Text = L"Стоимость";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(767, 266);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(157, 25);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Коллекционер";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(712, 266);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 25);
			this->label14->TabIndex = 29;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(759, 303);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(186, 21);
			this->comboBox1->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(414, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(209, 25);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Дата приобретения";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(773, 169);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Дата выпуска";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(15, 306);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(273, 20);
			this->textBox12->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(117, 266);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Тираж";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(448, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 25);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Страна";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(373, 204);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(240, 20);
			this->textBox6->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(209, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(554, 40);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Добавить марку";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(89, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Особенности";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(849, 81);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(96, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(862, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Серия";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(459, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Тема";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(365, 81);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(248, 20);
			this->textBox9->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(56, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 25);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Название марки";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(25, 81);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(248, 20);
			this->textBox10->TabIndex = 11;
			// 
			// Seil
			// 
			this->Seil->BackColor = System::Drawing::Color::Azure;
			this->Seil->Controls->Add(this->dateTimePicker3);
			this->Seil->Controls->Add(this->button3);
			this->Seil->Controls->Add(this->label20);
			this->Seil->Controls->Add(this->comboBox4);
			this->Seil->Controls->Add(this->label19);
			this->Seil->Controls->Add(this->comboBox3);
			this->Seil->Controls->Add(this->comboBox2);
			this->Seil->Controls->Add(this->label17);
			this->Seil->Controls->Add(this->label18);
			this->Seil->Controls->Add(this->textBox19);
			this->Seil->Controls->Add(this->label16);
			this->Seil->Location = System::Drawing::Point(4, 22);
			this->Seil->Name = L"Seil";
			this->Seil->Size = System::Drawing::Size(1016, 425);
			this->Seil->TabIndex = 2;
			this->Seil->Text = L"Продажа марки другому коллекционеру";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(750, 198);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker3->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(441, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(554, 40);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Провести сделку";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(774, 160);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(138, 25);
			this->label20->TabIndex = 23;
			this->label20->Text = L"Дата сделки";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(6, 354);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(229, 21);
			this->comboBox4->TabIndex = 22;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(6, 310);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(178, 25);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Выберите марку";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(6, 224);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(229, 21);
			this->comboBox3->TabIndex = 20;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(11, 94);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(229, 21);
			this->comboBox2->TabIndex = 19;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(754, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(196, 25);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Стоимость сделки";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(6, 172);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(599, 25);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Выберите коллекционера, который осуществляет покупку";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(727, 117);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(248, 20);
			this->textBox19->TabIndex = 15;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(6, 46);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(605, 25);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Выберите коллекционера, который осуществляет продажу";
			// 
			// changeMark
			// 
			this->changeMark->BackColor = System::Drawing::Color::Azure;
			this->changeMark->Controls->Add(this->dateTimePicker4);
			this->changeMark->Controls->Add(this->comboBox8);
			this->changeMark->Controls->Add(this->label23);
			this->changeMark->Controls->Add(this->button4);
			this->changeMark->Controls->Add(this->label21);
			this->changeMark->Controls->Add(this->comboBox5);
			this->changeMark->Controls->Add(this->label22);
			this->changeMark->Controls->Add(this->comboBox6);
			this->changeMark->Controls->Add(this->comboBox7);
			this->changeMark->Controls->Add(this->label24);
			this->changeMark->Controls->Add(this->label25);
			this->changeMark->Location = System::Drawing::Point(4, 22);
			this->changeMark->Name = L"changeMark";
			this->changeMark->Size = System::Drawing::Size(1016, 425);
			this->changeMark->TabIndex = 3;
			this->changeMark->Text = L"Обмен марками между владельцами";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(28, 337);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 44;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(486, 226);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(229, 21);
			this->comboBox8->TabIndex = 43;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(421, 178);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(383, 25);
			this->label23->TabIndex = 42;
			this->label23->Text = L"Выберите марку 2-го коллекционера";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(449, 337);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(554, 40);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Провести сделку";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(61, 295);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(138, 25);
			this->label21->TabIndex = 37;
			this->label21->Text = L"Дата сделки";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(486, 96);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(229, 21);
			this->comboBox5->TabIndex = 36;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(421, 48);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(383, 25);
			this->label22->TabIndex = 35;
			this->label22->Text = L"Выберите марку 1-го коллекционера";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(14, 226);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(229, 21);
			this->comboBox6->TabIndex = 34;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(19, 96);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(229, 21);
			this->comboBox7->TabIndex = 33;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(14, 178);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(316, 25);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Выберите 2-го коллекционера";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(14, 48);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(316, 25);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Выберите 1-го коллекционера";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1016, 425);
			this->tabPage1->TabIndex = 4;
			this->tabPage1->Text = L"Формирование запросов";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Location = System::Drawing::Point(7, 7);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1009, 415);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1001, 389);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Владелец самой дорогой марки";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(498, 319);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(339, 55);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Сохранить данные в файл";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(938, 264);
			this->dataGridView1->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(6, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(339, 55);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Нажмите, чтобы присупить к поиску";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1001, 389);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"Коллекционеры, имеющие марки, выпущенные больше 10 лет назад";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(543, 322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(339, 55);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Сохранить данные в файл";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(10, 28);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(971, 268);
			this->dataGridView2->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(10, 322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(339, 55);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Нажмите, чтобы присупить к поиску";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->comboBox10);
			this->tabPage4->Controls->Add(this->comboBox9);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->ForeColor = System::Drawing::SystemColors::Control;
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1001, 389);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Список марок определенного коллекционера по заданной теме";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView3->Location = System::Drawing::Point(288, 28);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(643, 268);
			this->dataGridView3->TabIndex = 18;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button10->Location = System::Drawing::Point(620, 316);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(339, 55);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Сохранить данные в файл";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label28->Location = System::Drawing::Point(11, 76);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(271, 25);
			this->label28->TabIndex = 16;
			this->label28->Text = L"Выберите коллекционера";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->Location = System::Drawing::Point(40, 201);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(165, 25);
			this->label27->TabIndex = 15;
			this->label27->Text = L"Выберите тему";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(20, 115);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(210, 21);
			this->comboBox10->TabIndex = 7;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(16, 239);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(210, 21);
			this->comboBox9->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(223, 316);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(339, 55);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Нажмите, чтобы присупить к поиску";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->label29);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1016, 425);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"О программе";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(494, 246);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(501, 144);
			this->label31->TabIndex = 38;
			this->label31->Text = L"Программа была разработана студентами группы 23ПИнж(б)-РПиС-1:\r\nПетросяном А.А, Т"
				L"акмурзиным М.Б.\r\n\r\nРуководитель:\r\nТагирова Л.Ф.\r\n \r\nДата создания программы:\r\n20"
				L".10.2024";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(37, 92);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(944, 128);
			this->label30->TabIndex = 37;
			this->label30->Text = resources->GetString(L"label30.Text");
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(442, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(169, 37);
			this->label29->TabIndex = 36;
			this->label29->Text = L"Филателия";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1030, 475);
			this->Controls->Add(this->tabInclude);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"PhilatelicWorld";
			this->tabInclude->ResumeLayout(false);
			this->addColector->ResumeLayout(false);
			this->addColector->PerformLayout();
			this->addMark->ResumeLayout(false);
			this->addMark->PerformLayout();
			this->Seil->ResumeLayout(false);
			this->Seil->PerformLayout();
			this->changeMark->ResumeLayout(false);
			this->changeMark->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "") {
		MessageBox::Show("Вы заполнили не все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		Collector^ newCollector = gcnew Collector();
		newCollector->country = textBox5->Text;
		newCollector->Famele = textBox1->Text;
		newCollector->name = textBox2->Text;
		newCollector->surname = textBox3->Text;
		newCollector->contact = textBox4->Text;
		collectors->Add(newCollector);
		comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox1->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox1->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox2->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox2->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox3->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox3->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox6->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox6->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox7->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox7->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		comboBox10->Items->Clear();
		for each (Collector ^ collector in collectors) {
			comboBox10->Items->Add(collector->Famele + " " + collector->name + " " + collector->surname);
		}
		MessageBox::Show("Коллекционер был успешно добавлен!", "Добавление коллекционера", MessageBoxButtons::OK, MessageBoxIcon::Information);
		// Очистка полей
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
	}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int prov;
		DateTime date1 = dateTimePicker1->Value;
		DateTime date2 = dateTimePicker2->Value;
		if (textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "") {
			MessageBox::Show("Вы заполнили не все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!Int32::TryParse(textBox12->Text, prov) || !Int32::TryParse(textBox8->Text, prov) || !Int32::TryParse(textBox25->Text, prov)) {
			MessageBox::Show("Поля серия, стоимость и тираж должны быть целыми числами!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (date1 < date2) {
			MessageBox::Show("Дата выпуска не может быть раньше даты приобретения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			Mark^ newMark = gcnew Mark();
			newMark->country = textBox6->Text;
			newMark->name = textBox10->Text;
			newMark->theam = textBox9->Text;
			newMark->price = Convert::ToInt32(textBox25->Text);
			newMark->serias = Convert::ToInt32(textBox8->Text);
			newMark->Pecul = textBox7->Text;
			newMark->dateIn = date2;
			newMark->dateBuy = date1;
			newMark->tirazh = Convert::ToInt32(textBox12->Text);
			marks->Add(newMark);
			String^ linkCollector  = comboBox1->SelectedItem->ToString();
			MessageBox::Show("Марка была успешно добавлена коллекционеру: " + linkCollector, "Добавление марки коллекционеру", MessageBoxButtons::OK, MessageBoxIcon::Information);
			for each (Collector ^ collector in collectors) {
				if ( (collector->Famele + " " + collector->name + " " + collector->surname) == linkCollector) {
					collector->marksOfCollectors->Add(newMark->name);
				}
			}
			// Очистка полей
			textBox6->Clear();
			textBox7->Clear();
			textBox8->Clear();
			textBox9->Clear();
			textBox10->Clear();
			textBox12->Clear();
			textBox25->Clear();
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int test;
	DateTime date = dateTimePicker3->Value;
	if (textBox19->Text == "") {
		MessageBox::Show("Вы заполнили не все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (comboBox2->SelectedItem->ToString() == comboBox3->SelectedItem->ToString()) {
		MessageBox::Show("Нельзя осуществлять продажу самому себе!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (!Int32::TryParse(textBox19->Text, test)) {
		MessageBox::Show("Цена сделки должна быть числом!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		String^ selectedCollectorText1 = comboBox2->SelectedItem->ToString();
		String^ selectedCollectorText2 = comboBox3->SelectedItem->ToString();
		String^ selectedMarkText = comboBox4->SelectedItem->ToString();

		Collector^ collector1 = nullptr;
		Collector^ collector2 = nullptr;

		for each (Collector ^ collector in collectors) {
			if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText1) {
				collector1 = collector;
			}
			else if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText2) {
				collector2 = collector;
			}
		}

		if (collector1 != nullptr && collector2 != nullptr) {
			collector1->marksOfCollectors->Remove(selectedMarkText);
			for each (Mark ^ mark in marks) {
				if (mark->name == selectedMarkText) {
					if (mark->dateBuy > date) {
						MessageBox::Show("Дата продажи не может быть раньше даты приобретения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						collector1->marksOfCollectors->Add(selectedMarkText);
						return;
					}
					mark->price = Convert::ToInt32(textBox19->Text);
					mark->dateBuy = date;
					break;
				}
			}
			collector2->marksOfCollectors->Add(selectedMarkText);
		}
		MessageBox::Show("Сделка успешно проведена!", "Продажа марок", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBox19->Clear();
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	comboBox4->Items->Clear();

	String^ selectedCollectorText = comboBox2->SelectedItem->ToString();
	for each (Collector ^ collector in collectors) {
		if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText) {
			for each (String ^ mark in collector->marksOfCollectors) {
				comboBox4->Items->Add(mark);
			}
			break;
		}
	}
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	comboBox5->Items->Clear();
	String^ selectedCollectorText = comboBox7->SelectedItem->ToString();
	for each (Collector ^ collector in collectors) {
		if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText) {
			for each (String ^ mark in collector->marksOfCollectors) {
				comboBox5->Items->Add(mark);
			}
			break;
		}
	}
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	comboBox8->Items->Clear();
	String^ selectedCollectorText = comboBox6->SelectedItem->ToString();
	for each (Collector ^ collector in collectors) {
		if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText) {
			for each (String ^ mark in collector->marksOfCollectors) {
				comboBox8->Items->Add(mark);
			}
			break;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int test;
	DateTime date = dateTimePicker4->Value;
	if (comboBox6->SelectedItem->ToString() == comboBox7->SelectedItem->ToString()) {
		MessageBox::Show("Нельзя проводить обмен с самим собой!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		String^ selectedCollectorText1 = comboBox7->SelectedItem->ToString();
		String^ selectedCollectorText2 = comboBox6->SelectedItem->ToString();
		String^ selectedMarkText1 = comboBox5->SelectedItem->ToString();
		String^ selectedMarkText2 = comboBox8->SelectedItem->ToString();

		Collector^ collector1 = nullptr;
		Collector^ collector2 = nullptr;

		for each (Collector ^ collector in collectors) {
			if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText1) {
				collector1 = collector;
			}
			else if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText2) {
				collector2 = collector;
			}
		}

		if (collector1 != nullptr && collector2 != nullptr) {
			collector1->marksOfCollectors->Remove(selectedMarkText1);
			collector1->marksOfCollectors->Add(selectedMarkText2);

			collector2->marksOfCollectors->Remove(selectedMarkText2);
			collector2->marksOfCollectors->Add(selectedMarkText1);
			for each (Mark ^ mark in marks) {
				if (mark->name == selectedMarkText1 || mark->name == selectedMarkText2) {
					if (mark->dateBuy > date) {
						MessageBox::Show("Дата обмена не может быть раньше даты приобретения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						collector1->marksOfCollectors->Add(selectedMarkText1);
						collector1->marksOfCollectors->Remove(selectedMarkText2);

						collector2->marksOfCollectors->Add(selectedMarkText2);
						collector2->marksOfCollectors->Remove(selectedMarkText1);
						return;
					}
					mark->dateBuy = date;
				}
			}
		}
		MessageBox::Show("Сделка успешно проведена!", "Обмен марками", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->ColumnCount = 9;
	dataGridView2->Columns[0]->HeaderText = "Страна";
	dataGridView2->Columns[1]->HeaderText = "Имя";
	dataGridView2->Columns[2]->HeaderText = "Фамилия";
	dataGridView2->Columns[3]->HeaderText = "Отчество";
	dataGridView2->Columns[4]->HeaderText = "Контакты";
	dataGridView2->Columns[5]->HeaderText = "Наличие редких марок";
	dataGridView2->Columns[6]->HeaderText = "Марка";
	dataGridView2->Columns[7]->HeaderText = "Цена";
	dataGridView2->Columns[8]->HeaderText = "Дата";
	dataGridView2->Rows->Clear();
	if (collectors->Count == 0 || marks->Count == 0) {
		MessageBox::Show("В базе не найдено коллекторов или марок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		for each (Collector ^ collector in collectors) {
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					if (markCollect == mark->name && mark->price > 1000) {
						collector->having = true;
						break;
					}
				}
			}
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					DateTime date = mark->dateIn;
					DateTime tenYearsAgo = DateTime::Now.AddYears(-10);
					if (markCollect == mark->name) {
						DateTime date = mark->dateIn;
						DateTime tenYearsAgo = DateTime::Now.AddYears(-10);
						if (date < tenYearsAgo) {
							array<Object^>^ rowData = { collector->country, collector->name, collector->Famele, collector->surname, collector->contact, collector->having, mark->name, mark->price, mark->dateIn };
							dataGridView2->Rows->Add(rowData);
							break;
						}
					}
				}
			}
		}
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->ColumnCount = 9;
	dataGridView1->Columns[0]->HeaderText = "Страна";
	dataGridView1->Columns[1]->HeaderText = "Имя";
	dataGridView1->Columns[2]->HeaderText = "Фамилия";
	dataGridView1->Columns[3]->HeaderText = "Отчество";
	dataGridView1->Columns[4]->HeaderText = "Контакты";
	dataGridView1->Columns[5]->HeaderText = "Наличие редких марок";
	dataGridView1->Columns[6]->HeaderText = "Марка";
	dataGridView1->Columns[7]->HeaderText = "Цена";
	dataGridView1->Columns[8]->HeaderText = "Дата";
	dataGridView1->Rows->Clear();
	if (collectors->Count == 0 || marks->Count == 0) {
		MessageBox::Show("В базе не найдено коллекторов или марок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		for each (Collector ^ collector in collectors) {
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					if (markCollect == mark->name && mark->price > 1000) {
						collector->having = true;
						break;
					}
				}
			}
		}
		int maximum = -1000000;
		for each (Collector^ collector in collectors) {
			for each (String^ markCollect in collector->marksOfCollectors) {
				for each (Mark^ mark in marks) {
					if (markCollect == mark->name && maximum < mark->price) {
						maximum = mark->price;
						break;
					}
				}
			}
		}
		for each (Collector ^ collector in collectors) {
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					if (markCollect == mark->name && maximum == mark->price) {
						array<Object^>^ rowData = { collector->country, collector->name, collector->Famele, collector->surname, collector->contact, collector->having, mark->name, mark->price, mark->dateIn };
						dataGridView1->Rows->Add(rowData);
						break;
					}
				}
			}
		}
	}
}
private: System::Void comboBox10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	comboBox9->Items->Clear();
	String^ selectedCollectorText = comboBox10->SelectedItem->ToString();
	for each (Collector^ collector in collectors) {
		if (collector->Famele + " " + collector->name + " " + collector->surname == selectedCollectorText) {
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					if (markCollect == mark->name && !comboBox9->Items->Contains(mark->theam)) {
						comboBox9->Items->Add(mark->theam);
						break;
					}
					
				}
			}
			break;
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->ColumnCount = 9;
	dataGridView3->Columns[0]->HeaderText = "Название";
	dataGridView3->Columns[1]->HeaderText = "Тема";
	dataGridView3->Columns[2]->HeaderText = "Серия";
	dataGridView3->Columns[3]->HeaderText = "Особенности";
	dataGridView3->Columns[4]->HeaderText = "Дата создания";
	dataGridView3->Columns[5]->HeaderText = "Тираж";
	dataGridView3->Columns[6]->HeaderText = "Дата покупки";
	dataGridView3->Columns[7]->HeaderText = "Цена";
	dataGridView3->Columns[8]->HeaderText = "Страна";
	dataGridView3->Rows->Clear();
	for each (Collector ^ collector in collectors) {
		if (collector->Famele + " " + collector->name + " " + collector->surname == comboBox10->SelectedItem->ToString()) {
			for each (String ^ markCollect in collector->marksOfCollectors) {
				for each (Mark ^ mark in marks) {
					if (markCollect == mark->name && mark->theam == comboBox9->SelectedItem->ToString()) {
						array<Object^>^ rowData = { mark->name, mark->theam, mark->serias, mark->Pecul, mark->dateIn, mark->tirazh, mark->dateBuy, mark->price, mark->country };
						dataGridView3->Rows->Add(rowData);
						break;
					}
				}
			}
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->RowCount <= 1) {
		MessageBox::Show("Нету данных для сохранения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dataGridView1->Columns[0]->Width = 15 * 8; // 30 символов
		dataGridView1->Columns[1]->Width = 15 * 8; // 30 символов
		dataGridView1->Columns[2]->Width = 15 * 8; // 15 символов
		dataGridView1->Columns[3]->Width = 20 * 8; // 40 символов
		dataGridView1->Columns[4]->Width = 20 * 8; // 20 символов
		dataGridView1->Columns[5]->Width = 30 * 8; // 15 символов
		dataGridView1->Columns[6]->Width = 15 * 8; // 20 символов
		dataGridView1->Columns[7]->Width = 15 * 8; // 15 символов
		dataGridView1->Columns[8]->Width = 30 * 8; // 30 символов
		System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ filename = openFileDialog1->FileName;
			try {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filename);
				System::String^ fileContent = sr->ReadToEnd();
				sr->Close();
				// Добавление отступа
				fileContent += System::Environment::NewLine;

				// Запись новых данных в файл
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filename, false);
				sw->Write(fileContent);
				sw->WriteLine("Результат запроса владельца самой дорогой марки: ");
				sw->WriteLine("{0,-15}{1,-15}{2,-15}{3,-20}{4,-20}{5,-30}{6,-15}{7,-15}{8,-30}",
					dataGridView1->Columns[0]->HeaderText,
					dataGridView1->Columns[1]->HeaderText,
					dataGridView1->Columns[2]->HeaderText,
					dataGridView1->Columns[3]->HeaderText,
					dataGridView1->Columns[4]->HeaderText,
					dataGridView1->Columns[5]->HeaderText,
					dataGridView1->Columns[6]->HeaderText,
					dataGridView1->Columns[7]->HeaderText,
					dataGridView1->Columns[8]->HeaderText);
				for each (DataGridViewRow ^ row in dataGridView1->Rows) {
					for (int i = 0; i < row->Cells->Count; i++) {
						DataGridViewCell^ cell = row->Cells[i];
						if (cell != nullptr && cell->Value != nullptr) {
							String^ format = "{0,-" + (dataGridView1->Columns[i]->Width / 8).ToString() + "}"; // Формат строки
							String^ value = cell->Value->ToString();
							sw->Write(format, value);
						}
					}
					sw->WriteLine();
				}
				sw->Close();
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "Error");
			}
		}
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView2->RowCount <= 1) {
		MessageBox::Show("Нету данных для сохранения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dataGridView2->Columns[0]->Width = 15 * 8; // 30 символов
		dataGridView2->Columns[1]->Width = 15 * 8; // 30 символов
		dataGridView2->Columns[2]->Width = 15 * 8; // 15 символов
		dataGridView2->Columns[3]->Width = 20 * 8; // 40 символов
		dataGridView2->Columns[4]->Width = 20 * 8; // 20 символов
		dataGridView2->Columns[5]->Width = 30 * 8; // 15 символов
		dataGridView2->Columns[6]->Width = 15 * 8; // 20 символов
		dataGridView2->Columns[7]->Width = 15 * 8; // 15 символов
		dataGridView2->Columns[8]->Width = 30 * 8; // 30 символов
		System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ filename = openFileDialog1->FileName;
			try {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filename);
				System::String^ fileContent = sr->ReadToEnd();
				sr->Close();
				// Добавление отступа
				fileContent += System::Environment::NewLine;

				// Запись новых данных в файл
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filename, false);
				sw->Write(fileContent);
				sw->WriteLine("Результат запроса коллекционеров с марками, что были сделаны более 10 лет назад: ");
				sw->WriteLine("{0,-15}{1,-15}{2,-15}{3,-20}{4,-20}{5,-30}{6,-15}{7,-15}{8,-30}",
					dataGridView2->Columns[0]->HeaderText,
					dataGridView2->Columns[1]->HeaderText,
					dataGridView2->Columns[2]->HeaderText,
					dataGridView2->Columns[3]->HeaderText,
					dataGridView2->Columns[4]->HeaderText,
					dataGridView2->Columns[5]->HeaderText,
					dataGridView2->Columns[6]->HeaderText,
					dataGridView2->Columns[7]->HeaderText,
					dataGridView2->Columns[8]->HeaderText);
				for each (DataGridViewRow ^ row in dataGridView2->Rows) {
					for (int i = 0; i < row->Cells->Count; i++) {
						DataGridViewCell^ cell = row->Cells[i];
						if (cell != nullptr && cell->Value != nullptr) {
							String^ format = "{0,-" + (dataGridView2->Columns[i]->Width / 8).ToString() + "}"; // Формат строки
							String^ value = cell->Value->ToString();
							sw->Write(format, value);
						}
					}
					sw->WriteLine();
				}
				sw->Close();
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "Error");
			}
		}
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView3->RowCount <= 1) {
		MessageBox::Show("Нету данных для сохранения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		// Установка ширины столбцов в DataGridView
		dataGridView3->Columns[0]->Width = 15 * 8; // 30 символов
		dataGridView3->Columns[1]->Width = 15 * 8; // 30 символов
		dataGridView3->Columns[2]->Width = 10 * 8; // 15 символов
		dataGridView3->Columns[3]->Width = 25 * 8; // 40 символов
		dataGridView3->Columns[4]->Width = 20 * 8; // 20 символов
		dataGridView3->Columns[5]->Width = 15 * 8; // 15 символов
		dataGridView3->Columns[6]->Width = 20 * 8; // 20 символов
		dataGridView3->Columns[7]->Width = 15 * 8; // 15 символов
		dataGridView3->Columns[8]->Width = 30 * 8; // 30 символов

		System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ filename = openFileDialog1->FileName;
			try {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filename);
				System::String^ fileContent = sr->ReadToEnd();
				sr->Close();
				// Добавление отступа
				fileContent += System::Environment::NewLine;
				// Запись новых данных в файл
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filename, false);
				sw->Write(fileContent);
				sw->WriteLine("Результат запроса сведения о марках коллекционера определенной темы: ");
				// Запись заголовков столбцов в файл
				sw->WriteLine("{0,-15}{1,-15}{2,-10}{3,-25}{4,-20}{5,-15}{6,-20}{7,-15}{8,-30}",
					dataGridView3->Columns[0]->HeaderText,
					dataGridView3->Columns[1]->HeaderText,
					dataGridView3->Columns[2]->HeaderText,
					dataGridView3->Columns[3]->HeaderText,
					dataGridView3->Columns[4]->HeaderText,
					dataGridView3->Columns[5]->HeaderText,
					dataGridView3->Columns[6]->HeaderText,
					dataGridView3->Columns[7]->HeaderText,
					dataGridView3->Columns[8]->HeaderText);
				for each (DataGridViewRow ^ row in dataGridView3->Rows) {
					for (int i = 0; i < row->Cells->Count; i++) {
						DataGridViewCell^ cell = row->Cells[i];
						if (cell != nullptr && cell->Value != nullptr) {
							String^ format = "{0,-" + (dataGridView3->Columns[i]->Width / 8).ToString() + "}"; // Формат строки
							String^ value = cell->Value->ToString();
							sw->Write(format, value);
						}
					}
					sw->WriteLine();
				}
				sw->Close();
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "Error");
			}
		}
	}
}
};
}
