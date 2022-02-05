#pragma once

namespace kurspatterns {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for browse
	/// </summary>
	public ref class browse : public System::Windows::Forms::Form
	{
	public:
		browse(void)
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
		~browse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::WebBrowser^  webBrowser1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(192, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Погода в Барнауле";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 62);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(717, 554);
			this->webBrowser1->TabIndex = 1;
			this->webBrowser1->Url = (gcnew System::Uri(L"https://www.gismeteo.ru/weather-barnaul-4720/", System::UriKind::Absolute));
			// 
			// browse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 628);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label1);
			this->Name = L"browse";
			this->Text = L"browse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
