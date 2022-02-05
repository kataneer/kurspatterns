#pragma once

namespace kurspatterns {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  snowButton;
	public: System::Windows::Forms::Button^  iceButton;
	public : System::Windows::Forms::Button^  weatherButton;
	public: System::Windows::Forms::Button^  allButton;




	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::Button^  deleteCount;
	public:

	public: System::Windows::Forms::Button^  createNewCont;

	public: System::Windows::Forms::DataGridView^  dataGridView1;
	public: System::Windows::Forms::Button^  button1;
	public:
	public: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->snowButton = (gcnew System::Windows::Forms::Button());
			this->iceButton = (gcnew System::Windows::Forms::Button());
			this->weatherButton = (gcnew System::Windows::Forms::Button());
			this->allButton = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->deleteCount = (gcnew System::Windows::Forms::Button());
			this->createNewCont = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(159, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(445, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список созданных счетчиков";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// snowButton
			// 
			this->snowButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->snowButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->snowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->snowButton->Location = System::Drawing::Point(43, 84);
			this->snowButton->Name = L"snowButton";
			this->snowButton->Size = System::Drawing::Size(153, 43);
			this->snowButton->TabIndex = 2;
			this->snowButton->Text = L"Снег";
			this->snowButton->UseVisualStyleBackColor = true;
			// 
			// iceButton
			// 
			this->iceButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->iceButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->iceButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iceButton->Location = System::Drawing::Point(216, 84);
			this->iceButton->Name = L"iceButton";
			this->iceButton->Size = System::Drawing::Size(172, 43);
			this->iceButton->TabIndex = 3;
			this->iceButton->Text = L"Лед";
			this->iceButton->UseVisualStyleBackColor = true;
			// 
			// weatherButton
			// 
			this->weatherButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->weatherButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->weatherButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->weatherButton->Location = System::Drawing::Point(404, 84);
			this->weatherButton->Name = L"weatherButton";
			this->weatherButton->Size = System::Drawing::Size(176, 43);
			this->weatherButton->TabIndex = 4;
			this->weatherButton->Text = L"Погода";
			this->weatherButton->UseVisualStyleBackColor = true;
			// 
			// allButton
			// 
			this->allButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->allButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->allButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->allButton->Location = System::Drawing::Point(595, 84);
			this->allButton->Name = L"allButton";
			this->allButton->Size = System::Drawing::Size(177, 43);
			this->allButton->TabIndex = 5;
			this->allButton->Text = L"Общий список";
			this->allButton->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(216, 517);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(364, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Рассчитать ";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// deleteCount
			// 
			this->deleteCount->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->deleteCount->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->deleteCount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteCount->Location = System::Drawing::Point(595, 517);
			this->deleteCount->Name = L"deleteCount";
			this->deleteCount->Size = System::Drawing::Size(209, 60);
			this->deleteCount->TabIndex = 7;
			this->deleteCount->Text = L"Удалить счетчик";
			this->deleteCount->UseVisualStyleBackColor = true;
			// 
			// createNewCont
			// 
			this->createNewCont->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->createNewCont->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->createNewCont->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createNewCont->Location = System::Drawing::Point(12, 517);
			this->createNewCont->Name = L"createNewCont";
			this->createNewCont->Size = System::Drawing::Size(184, 60);
			this->createNewCont->TabIndex = 8;
			this->createNewCont->Text = L"Новый счетчик";
			this->createNewCont->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(43, 149);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(729, 341);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 592);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Поля температуры и давления";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(404, 592);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 60);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Дополнительно";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(816, 664);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->createNewCont);
			this->Controls->Add(this->deleteCount);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->allButton);
			this->Controls->Add(this->weatherButton);
			this->Controls->Add(this->iceButton);
			this->Controls->Add(this->snowButton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm3";
			this->Text = L"Счетчики";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 if (dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			 {
				 button5->Text = "Рассчитать стоки снега";
				 button2->Enabled = true;
				 button2->Text = "Дополнительно: подробности таяния снега";
			 }
			 else if (dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			 {
				 button5->Text = "Рассчитать образование льда";
				 button2->Enabled = true;
				 button2->Text = "Дополнительно: подробности ледохода";
			 }
			 else if (dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			 {
				 button5->Text = "Рассчитать погодные условия";
				 button2->Enabled = false;
				 button2->Text = "Дополнительно";
			 }

}



private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
