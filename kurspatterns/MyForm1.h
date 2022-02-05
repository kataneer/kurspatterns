#pragma once

namespace kurspatterns {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;







	public: System::Windows::Forms::Button^  countb;

	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::TextBox^  consResult;




	public: System::Windows::Forms::CheckBox^  checkBox2;


	public: System::Windows::Forms::TextBox^  riverSpeed;
	public: System::Windows::Forms::TextBox^  timeDays;

	public: System::Windows::Forms::TextBox^  timeHours;
	public: System::Windows::Forms::Button^  graphics;
	public:


	public: System::Windows::Forms::TrackBar^  trackBar3;
	public: System::Windows::Forms::TrackBar^  trackBar1;
	public: System::Windows::Forms::TrackBar^  trackBar4;
	public: System::Windows::Forms::NumericUpDown^  squareSech;
	public: System::Windows::Forms::Label^  label10;
	public:
	private:

	private:


	private:
	public:


	public:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->countb = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->consResult = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->riverSpeed = (gcnew System::Windows::Forms::TextBox());
			this->timeDays = (gcnew System::Windows::Forms::TextBox());
			this->timeHours = (gcnew System::Windows::Forms::TextBox());
			this->graphics = (gcnew System::Windows::Forms::Button());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->squareSech = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->squareSech))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(153, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Потребление на участке";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(118, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Площадь сечения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Скорость течения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(292, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Время";
			// 
			// countb
			// 
			this->countb->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->countb->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->countb->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->countb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->countb->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->countb->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->countb->Location = System::Drawing::Point(69, 455);
			this->countb->Name = L"countb";
			this->countb->Size = System::Drawing::Size(199, 54);
			this->countb->TabIndex = 8;
			this->countb->Text = L"Рассчитать";
			this->countb->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(211, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"д.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(593, 315);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ч.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(636, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"м/c";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(478, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"м²";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(189, 388);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Итого";
			// 
			// consResult
			// 
			this->consResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->consResult->Location = System::Drawing::Point(264, 381);
			this->consResult->Name = L"consResult";
			this->consResult->ReadOnly = true;
			this->consResult->Size = System::Drawing::Size(162, 27);
			this->consResult->TabIndex = 14;
			this->consResult->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(219, 79);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(253, 24);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Это прокси-наблюдатель";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// riverSpeed
			// 
			this->riverSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->riverSpeed->Location = System::Drawing::Point(584, 213);
			this->riverSpeed->Name = L"riverSpeed";
			this->riverSpeed->ReadOnly = true;
			this->riverSpeed->Size = System::Drawing::Size(46, 27);
			this->riverSpeed->TabIndex = 20;
			this->riverSpeed->Text = L"0";
			// 
			// timeDays
			// 
			this->timeDays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeDays->Location = System::Drawing::Point(159, 308);
			this->timeDays->Name = L"timeDays";
			this->timeDays->ReadOnly = true;
			this->timeDays->Size = System::Drawing::Size(46, 27);
			this->timeDays->TabIndex = 21;
			this->timeDays->Text = L"0";
			// 
			// timeHours
			// 
			this->timeHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeHours->Location = System::Drawing::Point(541, 308);
			this->timeHours->Name = L"timeHours";
			this->timeHours->ReadOnly = true;
			this->timeHours->Size = System::Drawing::Size(46, 27);
			this->timeHours->TabIndex = 22;
			this->timeHours->Text = L"0";
			// 
			// graphics
			// 
			this->graphics->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->graphics->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->graphics->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->graphics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->graphics->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graphics->Location = System::Drawing::Point(395, 455);
			this->graphics->Name = L"graphics";
			this->graphics->Size = System::Drawing::Size(212, 54);
			this->graphics->TabIndex = 23;
			this->graphics->Text = L"Построить график";
			this->graphics->UseVisualStyleBackColor = false;
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(202, 213);
			this->trackBar3->Maximum = 50;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(365, 56);
			this->trackBar3->TabIndex = 26;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm1::trackBar3_Scroll);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(422, 308);
			this->trackBar1->Maximum = 23;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 56);
			this->trackBar1->TabIndex = 27;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm1::trackBar1_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 1;
			this->trackBar4->Location = System::Drawing::Point(35, 308);
			this->trackBar4->Maximum = 6;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(104, 56);
			this->trackBar4->TabIndex = 28;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm1::trackBar4_Scroll);
			// 
			// squareSech
			// 
			this->squareSech->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->squareSech->Location = System::Drawing::Point(310, 139);
			this->squareSech->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->squareSech->Name = L"squareSech";
			this->squareSech->Size = System::Drawing::Size(162, 27);
			this->squareSech->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(432, 388);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 20);
			this->label10->TabIndex = 30;
			this->label10->Text = L"м³";
			// 
			// MyForm1
			// 
			this->AcceptButton = this->countb;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 529);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->squareSech);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->graphics);
			this->Controls->Add(this->timeHours);
			this->Controls->Add(this->timeDays);
			this->Controls->Add(this->riverSpeed);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->consResult);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->countb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Потребление";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->squareSech))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void nameRiver_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
			// squareSech->Text = Convert::ToString(Convert::ToDouble(trackBar2->Value) / 10);
}
private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 riverSpeed->Text = Convert::ToString(Convert::ToDouble(trackBar3->Value) / 10);
}

private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 timeDays->Text = Convert::ToString(trackBar4->Value);
}

private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 timeHours->Text = Convert::ToString(trackBar1->Value);
}
private: System::Void squareSech_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
