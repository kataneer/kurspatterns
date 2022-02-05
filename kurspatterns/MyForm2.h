#pragma once

namespace kurspatterns {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::RichTextBox^  namePlace;


	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::ListBox^  listPlace;
	public: System::Windows::Forms::Label^  label5;
	public:








	public: System::Windows::Forms::ComboBox^  typePlace;

	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Button^  checker;


	public:

	public:

	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::TrackBar^  trackBar1;
	public: System::Windows::Forms::TrackBar^  trackBar2;
	public: System::Windows::Forms::RichTextBox^  richTemp;
	public: System::Windows::Forms::RichTextBox^  richPress;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->namePlace = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listPlace = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->typePlace = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checker = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->richTemp = (gcnew System::Windows::Forms::RichTextBox());
			this->richPress = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(189, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Добавить счетчик";
			// 
			// namePlace
			// 
			this->namePlace->Location = System::Drawing::Point(22, 125);
			this->namePlace->Name = L"namePlace";
			this->namePlace->Size = System::Drawing::Size(183, 25);
			this->namePlace->TabIndex = 10;
			this->namePlace->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(37, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Название участка";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// listPlace
			// 
			this->listPlace->FormattingEnabled = true;
			this->listPlace->ItemHeight = 16;
			this->listPlace->Location = System::Drawing::Point(246, 125);
			this->listPlace->Name = L"listPlace";
			this->listPlace->Size = System::Drawing::Size(180, 212);
			this->listPlace->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(304, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Список";
			// 
			// typePlace
			// 
			this->typePlace->DisplayMember = L"Снег";
			this->typePlace->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->typePlace->FormattingEnabled = true;
			this->typePlace->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Снег", L"Лед", L"Погода" });
			this->typePlace->Location = System::Drawing::Point(464, 125);
			this->typePlace->Name = L"typePlace";
			this->typePlace->Size = System::Drawing::Size(183, 24);
			this->typePlace->TabIndex = 23;
			this->typePlace->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::typePlace_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(503, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 17);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Тип участка";
			// 
			// checker
			// 
			this->checker->BackColor = System::Drawing::Color::White;
			this->checker->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->checker->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->checker->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checker->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checker->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->checker->Location = System::Drawing::Point(246, 355);
			this->checker->Name = L"checker";
			this->checker->Size = System::Drawing::Size(180, 57);
			this->checker->TabIndex = 26;
			this->checker->Text = L"Добавить";
			this->checker->UseMnemonic = false;
			this->checker->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 17);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Температура";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(521, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 17);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Давление";
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(63, 202);
			this->trackBar1->Maximum = 50;
			this->trackBar1->Minimum = -50;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(56, 210);
			this->trackBar1->TabIndex = 31;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm2::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(515, 202);
			this->trackBar2->Maximum = 820;
			this->trackBar2->Minimum = 640;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->Size = System::Drawing::Size(56, 210);
			this->trackBar2->TabIndex = 32;
			this->trackBar2->Value = 730;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm2::trackBar2_Scroll);
			// 
			// richTemp
			// 
			this->richTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTemp->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->richTemp->Location = System::Drawing::Point(114, 279);
			this->richTemp->Name = L"richTemp";
			this->richTemp->ReadOnly = true;
			this->richTemp->Size = System::Drawing::Size(58, 52);
			this->richTemp->TabIndex = 33;
			this->richTemp->Text = L"0";
			this->richTemp->TextChanged += gcnew System::EventHandler(this, &MyForm2::richTemp_TextChanged);
			// 
			// richPress
			// 
			this->richPress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richPress->Location = System::Drawing::Point(560, 279);
			this->richPress->Name = L"richPress";
			this->richPress->ReadOnly = true;
			this->richPress->Size = System::Drawing::Size(60, 52);
			this->richPress->TabIndex = 34;
			this->richPress->Text = L"730";
			this->richPress->TextChanged += gcnew System::EventHandler(this, &MyForm2::richPress_TextChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 424);
			this->Controls->Add(this->richPress);
			this->Controls->Add(this->richTemp);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checker);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->typePlace);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listPlace);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->namePlace);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->Text = L"Добавление счетчика";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void typePlace_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 richTemp->Text = Convert::ToString(trackBar1->Value);
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 richPress->Text = Convert::ToString(trackBar2->Value);
}
private: System::Void richTemp_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richPress_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
