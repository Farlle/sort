#include"Array.cpp"
#pragma once

namespace arrays {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			double *arrayUser = new double[size];

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  creatTextBox;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;






	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  sorting;
	private: System::Windows::Forms::TextBox^  sizeArray;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  addForIndividual;
	private: System::Windows::Forms::TextBox^  sizeTextBoxForIndividual;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::TabPage^  tabPage12;




	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;



	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;





private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->creatTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sizeArray = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->sorting = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->sizeTextBoxForIndividual = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->addForIndividual = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(354, 380);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(346, 354);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Создание массива";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Location = System::Drawing::Point(0, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(343, 348);
			this->tabControl2->TabIndex = 11;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->addButton);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->creatTextBox);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(335, 322);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Заполнить самостоятельно";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(93, 184);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(137, 23);
			this->addButton->TabIndex = 8;
			this->addButton->Text = L"Добавить элемент";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(111, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите элемент";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(90, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Создание массива";
			// 
			// creatTextBox
			// 
			this->creatTextBox->Location = System::Drawing::Point(93, 127);
			this->creatTextBox->Name = L"creatTextBox";
			this->creatTextBox->Size = System::Drawing::Size(137, 20);
			this->creatTextBox->TabIndex = 7;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->button1);
			this->tabPage5->Controls->Add(this->sizeArray);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(335, 322);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Сгенировать автоматически";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(88, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Создание массива";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Создать случайный массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sizeArray
			// 
			this->sizeArray->Location = System::Drawing::Point(206, 155);
			this->sizeArray->Name = L"sizeArray";
			this->sizeArray->Size = System::Drawing::Size(100, 20);
			this->sizeArray->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Укажите размер массива";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button5);
			this->tabPage9->Controls->Add(this->comboBox2);
			this->tabPage9->Controls->Add(this->label19);
			this->tabPage9->Controls->Add(this->label18);
			this->tabPage9->Controls->Add(this->label17);
			this->tabPage9->Controls->Add(this->label16);
			this->tabPage9->Controls->Add(this->label15);
			this->tabPage9->Controls->Add(this->label14);
			this->tabPage9->Controls->Add(this->label13);
			this->tabPage9->Controls->Add(this->label12);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(335, 322);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Взять имеющийся";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(192, 132);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Использовать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Массив 1", L"Массив 2", L"Массив 3", L"Массив 4" });
			this->comboBox2->Location = System::Drawing::Point(25, 134);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(116, 103);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(175, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"[100, 2418, 734, 983, 273, 73, 1, 0]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(116, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(136, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"[2.2, 5.5, 1.1, 0, 24.5, 77.5]";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(116, 58);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(163, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"[5, 6, 1, 1, 2, 7, 5, 9, 8, 1, 3, 0, 6]\r\n";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(116, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"[9, 8, 7, 6, 5, 4, 3, 2, 1]";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(22, 103);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Массив 4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(22, 58);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Массив 2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(22, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Массив 3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(22, 33);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Массив 1";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->radioButton7);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Controls->Add(this->radioButton5);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->sorting);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(346, 354);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Сортировки";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(8, 154);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(187, 17);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Пирамидаидальная сортировка";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(8, 131);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(143, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Сортировка вставками";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(8, 108);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(121, 17);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Сортировка Шелла";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(8, 85);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(138, 17);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Сортировка слиянием";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 62);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(131, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Быстрая сортировка";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// sorting
			// 
			this->sorting->Location = System::Drawing::Point(115, 284);
			this->sorting->Name = L"sorting";
			this->sorting->Size = System::Drawing::Size(75, 23);
			this->sorting->TabIndex = 2;
			this->sorting->Text = L"Sort";
			this->sorting->UseVisualStyleBackColor = true;
			this->sorting->Click += gcnew System::EventHandler(this, &MyForm::sorting_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 39);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(182, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Сортировка простым обменом";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 16);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(182, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сортировка простым выбором";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(346, 354);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Индивидуальное задание";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Location = System::Drawing::Point(3, 6);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(343, 348);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label8);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(335, 322);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Задание";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(286, 65);
			this->label8->TabIndex = 0;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->comboBox4);
			this->tabPage7->Controls->Add(this->tabControl4);
			this->tabPage7->Controls->Add(this->label9);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(335, 322);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Создание массивов";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Массив А", L"Массив B" });
			this->comboBox4->Location = System::Drawing::Point(157, 6);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 11;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Controls->Add(this->tabPage11);
			this->tabControl4->Controls->Add(this->tabPage12);
			this->tabControl4->Location = System::Drawing::Point(1, 31);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(332, 289);
			this->tabControl4->TabIndex = 8;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button3);
			this->tabPage10->Controls->Add(this->sizeTextBoxForIndividual);
			this->tabPage10->Controls->Add(this->label10);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(324, 263);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Случайный массив";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(152, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Создать случайный";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// sizeTextBoxForIndividual
			// 
			this->sizeTextBoxForIndividual->Location = System::Drawing::Point(152, 3);
			this->sizeTextBoxForIndividual->Name = L"sizeTextBoxForIndividual";
			this->sizeTextBoxForIndividual->Size = System::Drawing::Size(121, 20);
			this->sizeTextBoxForIndividual->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Укажите размер";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->button2);
			this->tabPage11->Controls->Add(this->addForIndividual);
			this->tabPage11->Controls->Add(this->label11);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(324, 263);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Создать самостоятельно";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 81);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ввести элемент";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// addForIndividual
			// 
			this->addForIndividual->Location = System::Drawing::Point(152, 16);
			this->addForIndividual->Name = L"addForIndividual";
			this->addForIndividual->Size = System::Drawing::Size(121, 20);
			this->addForIndividual->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Введите элемент";
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->label2);
			this->tabPage12->Controls->Add(this->label3);
			this->tabPage12->Controls->Add(this->button7);
			this->tabPage12->Controls->Add(this->label20);
			this->tabPage12->Controls->Add(this->comboBox3);
			this->tabPage12->Controls->Add(this->label21);
			this->tabPage12->Controls->Add(this->label22);
			this->tabPage12->Controls->Add(this->label23);
			this->tabPage12->Controls->Add(this->label24);
			this->tabPage12->Controls->Add(this->label25);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(324, 263);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"Взять готовый";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(89, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(127, 23);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Использовать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Массив 1", L"Массив 2", L"Массив 3", L"Массив 4" });
			this->comboBox3->Location = System::Drawing::Point(89, 144);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 11;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(31, 99);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(55, 13);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Массив 4";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(31, 54);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 13);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Массив 2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(31, 77);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 13);
			this->label24->TabIndex = 9;
			this->label24->Text = L"Массив 3";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(31, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 13);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Массив 1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Выберите массив";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->button9);
			this->tabPage8->Controls->Add(this->button4);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(335, 322);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Сортировка";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(84, 82);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 20);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Узнать размер";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(84, 37);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Сортировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(435, 38);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(202, 329);
			this->listBox1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(496, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 18);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Массив";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(643, 344);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Очистить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(129, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"[100, 2418, 734, 983, 273, 73, 1, 0]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(129, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"[2.2, 5.5, 1.1, 0, 24.5, 77.5]";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(129, 54);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(163, 13);
			this->label20->TabIndex = 14;
			this->label20->Text = L"[5, 6, 1, 1, 2, 7, 5, 9, 8, 1, 3, 0, 6]\r\n";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(129, 29);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(115, 13);
			this->label21->TabIndex = 13;
			this->label21->Text = L"[9, 8, 7, 6, 5, 4, 3, 2, 1]";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 392);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Внутренняя сортировка";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabControl4->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e);
//			 int size = Convert::ToInt32(this->sizeArray->Text);
			 int size;
			 int sizeA;
			 int sizeB;

			 double *arr = new double[size];
			 double *arrA = new double[size];
			 double *arrB = new double[size];
			 double *arrM = new double[size];

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void sorting_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e);
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
