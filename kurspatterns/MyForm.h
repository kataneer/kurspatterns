#pragma once
#include "countFact.h"
#include "rivWatchers.h"
#include "sinFacade.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "Fields.h"
#include "IceForm.h"
#include "SnowyForm.h"
#include "WeatherForm.h"
#include "AddIce.h"
#include "AddSnow.h"
#include <vcclr.h>
FILE *Save;
mainRiver *swg = mainRiver::Instance(142);
//Facade *eski = new Facade();
int conto = 0;
float t1, t2;
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
	private: System::Windows::Forms::Label^  label1;
	protected:













	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;










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
		MyForm1 ^F1;
		MyForm2 ^F2;
		MyForm3 ^F3;
		MyForm4 ^F4;
		MyForm5 ^F5;
		Fields ^F6;
		SnowyForm ^F7;
		IceForm ^F8;
		WeatherForm ^F9;
		AddIce ^F10;
		AddSnow ^F11;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button3;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(163, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(559, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Прогнозирование наводнений Оби";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Location = System::Drawing::Point(411, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(279, 78);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Добавить счетчик";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->Location = System::Drawing::Point(70, 434);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(311, 78);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Расчет потребления на участке";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(70, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 345);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(70, 538);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(311, 79);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Список счетчиков";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button3_MouseLeave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(411, 538);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(279, 79);
			this->button4->TabIndex = 18;
			this->button4->Text = L"О программе";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button4_MouseLeave);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(316, 641);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(189, 21);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Отключить анимацию";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(316, 669);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(120, 21);
			this->checkBox2->TabIndex = 20;
			this->checkBox2->Text = L"Темная тема";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 702);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Прогнозирование наводнений (beta ver)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void MyForm_Close(System::Object^  sender, System::EventArgs^  e) {
			 Save = fopen("save.txt", "w");
			 fprintf(Save, "%i\n", conto);
			 for (int i = 0; i < conto; i++)
				 fprintf(Save, "%i %s %s %i %i\n", i, swg->eski->rivCounts->avgRiv[i]->name, swg->eski->rivCounts->avgRiv[i]->type, swg->eski->rivCounts->avgRiv[i]->atm, swg->eski->rivCounts->avgRiv[i]->temp);
			 fclose(Save);
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //button1->Enabled = false;
				 F2 = gcnew MyForm2();
				 F2_theme(F2);
				 F2->checker->Click += gcnew System::EventHandler(this, &MyForm::checker_Click);
				 F2->listPlace->Items->Clear();
				 for (int i = 0; i < conto; i++)
					 F2->listPlace->Items->Add(gcnew String(swg->eski->rivCounts->avgRiv[i]->getName()));
				 F2->Show();
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew MyForm1();
			 F1->countb->Click += gcnew System::EventHandler(this, &MyForm::countb_Click);
			 F1->graphics->Click += gcnew System::EventHandler(this, &MyForm::graphics_Click);
			 F1->graphics->MouseLeave += gcnew System::EventHandler(this, &MyForm::graphics_MouseLeave);
			 F1->countb->MouseLeave += gcnew System::EventHandler(this, &MyForm::graphics_MouseLeave);
			 F1_theme(F1);
			 F1->Show();
}
private: System::Void metCounter_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (F3->button5->Text == "Рассчитать стоки снега")
			 {
				 F7 = gcnew SnowyForm();
				 F7_theme(F7);
				 F7->textBox1->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
				 F7->textBox2->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
				 F7->button1->Click += gcnew System::EventHandler(this, &MyForm::snowyForm_Click);
				 F7->Show();
			 }
			 else if (F3->button5->Text == "Рассчитать образование льда")
			 {
				 F8 = gcnew IceForm();
				 F8_theme(F8);
				 F8->textBox1->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
				 F8->textBox2->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
				 if (Convert::ToInt32(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value) > 0)
					 F8->label4->Text = "Лед растает через";
				 else F8->label4->Text = "Лед образуется за";
				 F8->button1->Click += gcnew System::EventHandler(this, &MyForm::icyForm_Click);
				 F8->Show();
			 }
			 else if (F3->button5->Text == "Рассчитать погодные условия")
			 {
				 weatherCounter *tem = new weatherCounter();
				 F9 = gcnew WeatherForm();
				 F9_theme(F9);
				 int temp = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
				 int atm = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
				 F9->Show();
				 tem->init(atm, temp);
				 tem->meteoCount();
				 F9->textBox1->Text = Convert::ToString(tem->ets);
			 }
}
private: System::Void snowyForm_Click(System::Object^  sender, System::EventArgs^  e) {
			 snowCounter *ets = new snowCounter();
			 float atm = System::Convert::ToDouble(F7->textBox2->Text);
			 float temp = System::Convert::ToDouble(F7->textBox1->Text);
			 float sqr = System::Convert::ToDouble(F7->numericUpDown1->Value);
			 float wi = System::Convert::ToDouble(F7->numericUpDown2->Value);
			 float de = System::Convert::ToDouble(F7->numericUpDown3->Value);
			 float dr = System::Convert::ToDouble(F7->numericUpDown4->Value);
			 ets->setParams(sqr, wi, de, dr);
			 ets->init(atm, temp);
			 ets->meteoCount();
			 F7->textBox3->Text = System::Convert::ToString(ets->res);

 }
private: System::Void icyForm_Click(System::Object^  sender, System::EventArgs^  e) {
			 iceCounter *enp = new iceCounter();
			 float atm = System::Convert::ToDouble(F8->textBox2->Text);
			 float temp = System::Convert::ToDouble(F8->textBox1->Text);
			 float sqr = System::Convert::ToDouble(F8->numericUpDown1->Value);
			 enp->setWidth(sqr);
			 enp->init(atm, temp);
			 enp->meteoCount();
			 F8->textBox3->Text = System::Convert::ToString(enp->res);
}

private: System::Void addIce_Click(System::Object^  sender, System::EventArgs^  e) {
			 iceCounter *enp = new iceCounter();
			 float atm = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
			 float temp = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
			 float wdth = System::Convert::ToDouble(F10->numericUpDown1->Value);
			 float sqr = System::Convert::ToDouble(F10->numericUpDown2->Value);
			 float dns = System::Convert::ToDouble(F10->numericUpDown3->Value);
			 enp->setWidth(sqr);
			 enp->init(atm, temp);
			 enp->icer->setIceParams(sqr, dns);
			 F10->textBox3->Text = System::Convert::ToString(enp->icer->setJamEvents(enp->atm, enp->temp, enp->getWidth()));
}

private: System::Void addSnow_Click(System::Object^  sender, System::EventArgs^  e) {
			 snowCounter *ets = new snowCounter();
			 float atm = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
			 float temp = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
			 float sqr = System::Convert::ToDouble(F11->numericUpDown2->Value);
			 float wi = System::Convert::ToDouble(F11->numericUpDown4->Value);
			 float de = System::Convert::ToDouble(F11->numericUpDown3->Value);
			 float dr = System::Convert::ToDouble(F11->numericUpDown5->Value);
			 float time = System::Convert::ToDouble(F11->numericUpDown1->Value);
			 ets->setParams(sqr, wi, de, dr);
			 ets->init(atm, temp);
			 ets->higher->setTime(time);
			 F11->textBox1->Text = System::Convert::ToString(ets->higher->highWatersEvents(sqr, wi, de, dr, atm, temp));
}

private: System::Void fields_Clicker(System::Object^  sender, System::EventArgs^  e) {
			 metCounter *ets = new metCounter();
			 float atm = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
			 float temp = Convert::ToDouble(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
			 float wind = System::Convert::ToDouble(F6->numericUpDown2->Value);
			 float time = System::Convert::ToDouble(F6->numericUpDown1->Value);
			 float tempView = System::Convert::ToDouble(F6->numericUpDown3->Value);
			 ets->fieldWay->setParams(time, wind, tempView);
			 F6->textBox3->Text = System::Convert::ToString(ets->fieldWay->atFieldCount(atm, temp));
			 F6->textBox4->Text = System::Convert::ToString(ets->fieldWay->tempFieldCount(atm, temp));
}
private: System::Void addition_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (F3->button2->Text == "Дополнительно: подробности ледохода")
			 {
				 F10 = gcnew AddIce();
				 F10_theme(F10);
				 F10->button1->Click += gcnew System::EventHandler(this, &MyForm::addIce_Click);
				 F10->Show();
			 }
			 else if (F3->button2->Text == "Дополнительно: подробности таяния снега")
			 {
				 F11 = gcnew AddSnow();
				 F11_theme(F11);
				 F11->button1->Click += gcnew System::EventHandler(this, &MyForm::addSnow_Click);
				 F11->Show();
			 }
}
public: System::Void checker_Click(System::Object^  sender, System::EventArgs^  e) {
			if (F2->namePlace->Text == "" || F2->typePlace->Text == "")
			{
				MessageBox::Show(
					"Вы не заполнили все поля!",
					"Сообщение",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error,
					MessageBoxDefaultButton::Button1,
					MessageBoxOptions::DefaultDesktopOnly);
			}
			else
			{
				char *b = (char*)(void*)Marshal::StringToHGlobalAnsi(F2->namePlace->Text);
				char *d = (char*)(void*)Marshal::StringToHGlobalAnsi(F2->typePlace->Text->ToString());
				int a1 = System::Convert::ToInt32(F2->richTemp->Text);
				int a2 = System::Convert::ToInt32(F2->richPress->Text);
				F2->listPlace->Items->Add(gcnew String(b));
				swg->eski->creati(b, d, conto, a2, a1);
				conto++;
				Save = fopen("save.txt", "w");
				fprintf(Save, "%i\n", conto);
				for (int i = 0; i < conto; i++)
					fprintf(Save, "%i %s %s %i %i\n", i, swg->eski->rivCounts->avgRiv[i]->name, swg->eski->rivCounts->avgRiv[i]->type, swg->eski->rivCounts->avgRiv[i]->temp, swg->eski->rivCounts->avgRiv[i]->atm);
				fclose(Save);
				if (F3)
				{
					if (F3->Visible)
					{
					    F3->dataGridView1->Columns->Clear();
					    F3->dataGridView1->ColumnCount = 5;
					    if (conto != 0)
						    F3->dataGridView1->Rows->Add(conto);
					    F3->dataGridView1->Columns[0]->Name = "Номер";
					    F3->dataGridView1->Columns[1]->Name = "Название участка";
					    F3->dataGridView1->Columns[2]->Name = "Тип участка";
					    F3->dataGridView1->Columns[3]->Name = "Температура";
					    F3->dataGridView1->Columns[4]->Name = "Давление";
					    for (int i = 0; i < conto; i++)
					    {
						    F3->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
						    F3->dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
						    F3->dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
						    F3->dataGridView1->Rows[i]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
						    F3->dataGridView1->Rows[i]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
					    }
					}
				}
			}
}
public: System::Void countb_Click(System::Object^  sender, System::EventArgs^  e) {
			float a1 = System::Convert::ToDouble(F1->squareSech->Value);
			float a2 = System::Convert::ToDouble(F1->riverSpeed->Text);
		    int a3 = (System::Convert::ToInt32(F1->timeHours->Text) + 24 * System::Convert::ToInt32(F1->timeDays->Text)) * 3600;
			swg->eski->facadeW(a1, a2, a3);
			if (F1->checkBox2->Checked)
			{
				swg->eski->pConsumption();
				F1->consResult->Text = System::Convert::ToString(swg->eski->rivParams->pwatchi->ras->cont);
			}
			else
			{
				swg->eski->Consumption();
				F1->consResult->Text = System::Convert::ToString(swg->eski->rivParams->watchi->cont);
			}
}
			 
private: System::Void button1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	 if (checkBox2->Checked == false)
		 this->button1->BackColor = Color::White;
	 else
		 this->button1->BackColor = Color::Black;
}
		 
		 
private: System::Void button2_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 this->button2->BackColor = Color::White;
			 else
				 this->button2->BackColor = Color::Black;
}
		 
private: System::Void button3_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 this->button3->BackColor = Color::White;
			 else
				 this->button3->BackColor = Color::Black;
}
		 
private: System::Void button4_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 this->button4->BackColor = Color::White;
			 else
				 this->button4->BackColor = Color::Black;
}

private: System::Void graphics_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 F1->graphics->BackColor = Color::White;
			 else
				 F1->graphics->BackColor = Color::Black;
}

private: System::Void countb_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 F1->countb->BackColor = Color::White;
			 else
				 F1->countb->BackColor = Color::Black;
}
private: System::Void checker_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == false)
				 F2->checker->BackColor = Color::White;
			 else
				 F2->checker->BackColor = Color::Black;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 F3 = gcnew MyForm3();
			 F3_theme(F3);
			 F3->snowButton->Click += gcnew System::EventHandler(this, &MyForm::snowButton_Click);
			 F3->iceButton->Click += gcnew System::EventHandler(this, &MyForm::iceButton_Click);
			 F3->weatherButton->Click += gcnew System::EventHandler(this, &MyForm::weatherButton_Click);
			 F3->allButton->Click += gcnew System::EventHandler(this, &MyForm::allButton_Click);
			 F3->createNewCont->Click += gcnew System::EventHandler(this, &MyForm::createNewCont_Click);
			 F3->deleteCount->Click += gcnew System::EventHandler(this, &MyForm::deleteCount_Click);
			 F3->button1->Click += gcnew System::EventHandler(this, &MyForm::fields_Click);
			 F3->button5->Click += gcnew System::EventHandler(this, &MyForm::metCounter_Click);
			 F3->button2->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			 F3->Show();
			 F3->dataGridView1->Columns->Clear();
			 F3->dataGridView1->ColumnCount = 5;
			 if (conto != 0)
			   F3->dataGridView1->Rows->Add(conto); 
			 F3->dataGridView1->Columns[0]->Name = "Номер";
			 F3->dataGridView1->Columns[1]->Name = "Название участка";
			 F3->dataGridView1->Columns[2]->Name = "Тип участка";
			 F3->dataGridView1->Columns[3]->Name = "Температура";
			 F3->dataGridView1->Columns[4]->Name = "Давление";
			 for (int i = 0; i < conto; i++)
			 {
				 F3->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
				 F3->dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
				 F3->dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
				 F3->dataGridView1->Rows[i]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
				 F3->dataGridView1->Rows[i]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
			 }
			 if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			 {
				 F3->button5->Text = "Рассчитать стоки снега";
				 F3->button2->Enabled = true;
				 F3->button2->Text = "Дополнительно: подробности таяния снега";
			 }
			 else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			 {
				 F3->button5->Text = "Рассчитать образование льда";
				 F3->button2->Enabled = true;
				 F3->button2->Text = "Дополнительно: подробности ледохода";
			 }
			 else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			 {
				 F3->button5->Text = "Рассчитать погодные условия";
				 F3->button2->Enabled = false;
				 F3->button2->Text = "Дополнительно";
			 }
}
public: System::Void snowButton_Click(System::Object^  sender, System::EventArgs^  e) {
			F3->createNewCont->Enabled = false;
			F3->deleteCount->Enabled = false;
			int manto = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Снег") == 0)
					manto++;
			}
			F3->dataGridView1->Columns->Clear();
			F3->dataGridView1->ColumnCount = 5;
			if (manto != 0)
				F3->dataGridView1->Rows->Add(manto);
			F3->dataGridView1->Columns[0]->Name = "Номер";
			F3->dataGridView1->Columns[1]->Name = "Название участка";
			F3->dataGridView1->Columns[2]->Name = "Тип участка";
			F3->dataGridView1->Columns[3]->Name = "Температура";
			F3->dataGridView1->Columns[4]->Name = "Давление";
			int j = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Снег") == 0)
				{
				    F3->dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
				    F3->dataGridView1->Rows[j]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
				    F3->dataGridView1->Rows[j]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
				    F3->dataGridView1->Rows[j]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
				    F3->dataGridView1->Rows[j]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
					j++;
				}
			}
			if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			{
				F3->button5->Text = "Рассчитать стоки снега";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности таяния снега";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			{
				F3->button5->Text = "Рассчитать образование льда";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности ледохода";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			{
				F3->button5->Text = "Рассчитать погодные условия";
				F3->button2->Enabled = false;
				F3->button2->Text = "Дополнительно";
			}
}

public: System::Void iceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			F3->createNewCont->Enabled = false;
			F3->deleteCount->Enabled = false;
			int manto = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Лед") == 0)
					manto++;
			}
			F3->dataGridView1->Columns->Clear();
			F3->dataGridView1->ColumnCount = 5;
			if (manto != 0)
				F3->dataGridView1->Rows->Add(manto);
			F3->dataGridView1->Columns[0]->Name = "Номер";
			F3->dataGridView1->Columns[1]->Name = "Название участка";
			F3->dataGridView1->Columns[2]->Name = "Тип участка";
			F3->dataGridView1->Columns[3]->Name = "Температура";
			F3->dataGridView1->Columns[4]->Name = "Давление";
			int j = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Лед") == 0)
				{
					F3->dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
					F3->dataGridView1->Rows[j]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
					F3->dataGridView1->Rows[j]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
					F3->dataGridView1->Rows[j]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
					F3->dataGridView1->Rows[j]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
					j++;
				}
			}
			if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			{
				F3->button5->Text = "Рассчитать стоки снега";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности таяния снега";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			{
				F3->button5->Text = "Рассчитать образование льда";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности ледохода";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			{
				F3->button5->Text = "Рассчитать погодные условия";
				F3->button2->Enabled = false;
				F3->button2->Text = "Дополнительно";
			}
}

public: System::Void weatherButton_Click(System::Object^  sender, System::EventArgs^  e) {
			F3->createNewCont->Enabled = false;
			F3->deleteCount->Enabled = false;
			int manto = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Погода") == 0)
					manto++;
			}
			F3->dataGridView1->Columns->Clear();
			F3->dataGridView1->ColumnCount = 5;
			if (manto != 0)
				F3->dataGridView1->Rows->Add(manto);
			F3->dataGridView1->Columns[0]->Name = "Номер";
			F3->dataGridView1->Columns[1]->Name = "Название участка";
			F3->dataGridView1->Columns[2]->Name = "Тип участка";
			F3->dataGridView1->Columns[3]->Name = "Температура";
			F3->dataGridView1->Columns[4]->Name = "Давление";
			int j = 0;
			for (int i = 0; i < conto; i++)
			{
				if (strcmp(swg->eski->rivCounts->avgRiv[i]->getType(), "Погода") == 0)
				{
					F3->dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
					F3->dataGridView1->Rows[j]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
					F3->dataGridView1->Rows[j]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
					F3->dataGridView1->Rows[j]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
					F3->dataGridView1->Rows[j]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
					j++;
				}
			}
			if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			{
				F3->button5->Text = "Рассчитать стоки снега";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности таяния снега";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			{
				F3->button5->Text = "Рассчитать образование льда";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности ледохода";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			{
				F3->button5->Text = "Рассчитать погодные условия";
				F3->button2->Enabled = false;
				F3->button2->Text = "Дополнительно";
			}
}
public: System::Void allButton_Click(System::Object^  sender, System::EventArgs^  e) {
			F3->createNewCont->Enabled = true;
			F3->deleteCount->Enabled = true;
			F3->dataGridView1->Columns->Clear();
			F3->dataGridView1->ColumnCount = 5;
			if (conto != 0)
				F3->dataGridView1->Rows->Add(conto);
			F3->dataGridView1->Columns[0]->Name = "Номер";
			F3->dataGridView1->Columns[1]->Name = "Название участка";
			F3->dataGridView1->Columns[2]->Name = "Тип участка";
			F3->dataGridView1->Columns[3]->Name = "Температура";
			F3->dataGridView1->Columns[4]->Name = "Давление";
			for (int i = 0; i < conto; i++)
			{
					F3->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
					F3->dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
					F3->dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
					F3->dataGridView1->Rows[i]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
					F3->dataGridView1->Rows[i]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
			}
			if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			{
				F3->button5->Text = "Рассчитать стоки снега";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности таяния снега";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			{
				F3->button5->Text = "Рассчитать образование льда";
				F3->button2->Enabled = true;
				F3->button2->Text = "Дополнительно: подробности ледохода";
			}
			else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			{
				F3->button5->Text = "Рассчитать погодные условия";
				F3->button2->Enabled = false;
				F3->button2->Text = "Дополнительно";
			}
}
public: System::Void createNewCont_Click(System::Object^  sender, System::EventArgs^  e) {
			F2 = gcnew MyForm2();
			F2_theme(F2);
			F2->checker->Click += gcnew System::EventHandler(this, &MyForm::checker_Click);
			F2->checker->MouseLeave += gcnew System::EventHandler(this, &MyForm::checker_MouseLeave);
			F2->listPlace->Items->Clear();
			for (int i = 0; i < conto; i++)
				F2->listPlace->Items->Add(gcnew String(swg->eski->rivCounts->avgRiv[i]->getName()));
			F2->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 F4 = gcnew MyForm4();
			 F4_theme(F4);
			 F4->Show();
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
				 pictureBox1->Image = Image::FromFile("C:/Users/katage/Documents/Visual Studio 2013/Projects/kurspatterns/kurspatterns/3.PNG");
			 else
				 pictureBox1->Image = Image::FromFile("C:/Users/katage/Documents/Visual Studio 2013/Projects/kurspatterns/kurspatterns/ADyH.gif");
}
private: System::Void deleteCount_Click(System::Object^  sender, System::EventArgs^  e) {
			 delete(swg->eski->rivCounts);
			 swg->eski->rivCounts = new countersFactory();
			 int ak = 0;
			 for (int i = 0; i < conto; i++)
			 {
				 if (i != F3->dataGridView1->CurrentCell->RowIndex)
				 {
					 char *b = (char*)(void*)Marshal::StringToHGlobalAnsi(F3->dataGridView1->Rows[i]->Cells[1]->Value->ToString());
					 char *d = (char*)(void*)Marshal::StringToHGlobalAnsi(F3->dataGridView1->Rows[i]->Cells[2]->Value->ToString());
					 int a1 = System::Convert::ToInt32(F3->dataGridView1->Rows[i]->Cells[3]->Value);
					 int a2 = System::Convert::ToInt32(F3->dataGridView1->Rows[i]->Cells[4]->Value);
					 swg->eski->creati(b, d, ak, a2, a1);
					 ak++;
				 }
			 }
			 conto--;
			 F3->dataGridView1->Columns->Clear();
			 F3->dataGridView1->ColumnCount = 5;
			 if (conto != 0)
				 F3->dataGridView1->Rows->Add(conto);
			 F3->dataGridView1->Columns[0]->Name = "Номер";
			 F3->dataGridView1->Columns[1]->Name = "Название участка";
			 F3->dataGridView1->Columns[2]->Name = "Тип участка";
			 F3->dataGridView1->Columns[3]->Name = "Температура";
			 F3->dataGridView1->Columns[4]->Name = "Давление";
			 for (int i = 0; i < conto; i++)
			 {
				 F3->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
				 F3->dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getName());
				 F3->dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(swg->eski->rivCounts->avgRiv[i]->getType());
				 F3->dataGridView1->Rows[i]->Cells[3]->Value = swg->eski->rivCounts->avgRiv[i]->temp;
				 F3->dataGridView1->Rows[i]->Cells[4]->Value = swg->eski->rivCounts->avgRiv[i]->atm;
			 }
			 if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Снег")
			 {
				 F3->button5->Text = "Рассчитать стоки снега";
				 F3->button2->Enabled = true;
				 F3->button2->Text = "Дополнительно: подробности таяния снега";
			 }
			 else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Лед")
			 {
				 F3->button5->Text = "Рассчитать образование льда";
				 F3->button2->Enabled = true;
				 F3->button2->Text = "Дополнительно: прдробности ледохода";
			 }
			 else if (F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value->ToString() == "Погода")
			 {
				 F3->button5->Text = "Рассчитать погодные условия";
				 F3->button2->Enabled = false;
				 F3->button2->Text = "Дополнительно";
			 }
			 Save = fopen("save.txt", "w");
			 fprintf(Save, "%i\n", conto);
			 for (int i = 0; i < conto; i++)
				 fprintf(Save, "%i %s %s %i %i\n", i, swg->eski->rivCounts->avgRiv[i]->name, swg->eski->rivCounts->avgRiv[i]->type, swg->eski->rivCounts->avgRiv[i]->temp, swg->eski->rivCounts->avgRiv[i]->atm);
			 fclose(Save);

}

private: System::Void F1_theme(MyForm1 ^F1) {
		if (checkBox2->Checked == true)
		{
			 F1->BackColor = Color::Black;
			 F1->label1->ForeColor = Color::White;
			 F1->label2->ForeColor = Color::White;
			 F1->label3->ForeColor = Color::White;
			 F1->label4->ForeColor = Color::White;
			 F1->label5->ForeColor = Color::White;
			 F1->label6->ForeColor = Color::White;
			 F1->label7->ForeColor = Color::White;
			 F1->label8->ForeColor = Color::White;
			 F1->label9->ForeColor = Color::White;
			 F1->label10->ForeColor = Color::White;
			 F1->checkBox2->ForeColor = Color::White;
			 F1->countb->ForeColor = Color::White;
			 F1->countb->BackColor = Color::Black;
			 F1->countb->FlatAppearance->BorderColor = Color::White;
			 F1->graphics->ForeColor = Color::White;
			 F1->graphics->BackColor = Color::Black;
			 F1->graphics->FlatAppearance->BorderColor = Color::White;
			 F1->countb->FlatAppearance->MouseDownBackColor = Color::Black;
			 F1->graphics->FlatAppearance->MouseDownBackColor = Color::Black;
			 F1->graphics->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
			 F1->countb->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
		}
		else
		{
			F1->BackColor = Color::White;
			F1->label1->ForeColor = Color::Black;
			F1->label2->ForeColor = Color::Black;
			F1->label3->ForeColor = Color::Black;
			F1->label4->ForeColor = Color::Black;
			F1->label5->ForeColor = Color::Black;
			F1->label6->ForeColor = Color::Black;
			F1->label7->ForeColor = Color::Black;
			F1->label8->ForeColor = Color::Black;
			F1->label9->ForeColor = Color::Black;
			F1->label10->ForeColor = Color::Black;
			F1->checkBox2->ForeColor = Color::Black;
			F1->graphics->ForeColor = Color::Black;
			F1->graphics->BackColor = Color::White;
			F1->graphics->FlatAppearance->BorderColor = Color::Black;
			F1->countb->FlatAppearance->MouseDownBackColor = Color::White;
			F1->graphics->FlatAppearance->MouseDownBackColor = Color::White;
			F1->graphics->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			F1->countb->FlatAppearance->MouseOverBackColor = Color::LightBlue;
		}
}
private: System::Void F2_theme(MyForm2 ^F2) {
		if (checkBox2->Checked == true)
		{
			F2->BackColor = Color::Black;
			F2->label1->ForeColor = Color::White;
			F2->label2->ForeColor = Color::White;
			F2->label3->ForeColor = Color::White;
			F2->label4->ForeColor = Color::White;
			F2->label5->ForeColor = Color::White;
			F2->label6->ForeColor = Color::White;
			F2->listPlace->BackColor = Color::Black;
			F2->listPlace->ForeColor = Color::White;
			F2->checker->ForeColor = Color::White;
			F2->checker->BackColor = Color::Black;
			F2->checker->FlatAppearance->BorderColor = Color::White;
			F2->checker->FlatAppearance->MouseDownBackColor = Color::Black;
			F2->checker->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
		}
		else
		{
			F2->BackColor = Color::White;
			F2->label1->ForeColor = Color::Black;
			F2->label2->ForeColor = Color::Black;
			F2->label3->ForeColor = Color::Black;
			F2->label4->ForeColor = Color::Black;
			F2->label5->ForeColor = Color::Black;
			F2->label6->ForeColor = Color::Black;
			F2->listPlace->BackColor = Color::White;
			F2->listPlace->ForeColor = Color::Black;
			F2->checker->ForeColor = Color::Black;
			F2->checker->BackColor = Color::White;
			F2->checker->FlatAppearance->BorderColor = Color::Black;
			F2->checker->FlatAppearance->MouseDownBackColor = Color::White;
			F2->checker->FlatAppearance->MouseOverBackColor = Color::LightBlue;
		}
}

private: System::Void F3_theme(MyForm3 ^F3) {
			 if (checkBox2->Checked == true)
			 {
				 F3->BackColor = Color::Black;
				 F3->label1->ForeColor = Color::White;
				 F3->dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::Black;
				 F3->dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;
				 F3->dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::Black;
				 F3->dataGridView1->RowHeadersDefaultCellStyle->ForeColor = Color::White;
				 F3->dataGridView1->DefaultCellStyle->BackColor = Color::Black;
				 F3->dataGridView1->DefaultCellStyle->ForeColor = Color::White;
				 F3->dataGridView1->BackgroundColor = Color::Black;
				 F3->snowButton->ForeColor = Color::White;
				 F3->snowButton->BackColor = Color::Black;
				 F3->snowButton->FlatAppearance->BorderColor = Color::White;
				 F3->snowButton->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->snowButton->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->weatherButton->ForeColor = Color::White;
				 F3->weatherButton->BackColor = Color::Black;
				 F3->weatherButton->FlatAppearance->BorderColor = Color::White;
				 F3->weatherButton->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->weatherButton->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->iceButton->ForeColor = Color::White;
				 F3->iceButton->BackColor = Color::Black;
				 F3->iceButton->FlatAppearance->BorderColor = Color::White;
				 F3->iceButton->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->iceButton->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->allButton->ForeColor = Color::White;
				 F3->allButton->BackColor = Color::Black;
				 F3->allButton->FlatAppearance->BorderColor = Color::White;
				 F3->allButton->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->allButton->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->createNewCont->ForeColor = Color::White;
				 F3->createNewCont->BackColor = Color::Black;
				 F3->createNewCont->FlatAppearance->BorderColor = Color::White;
				 F3->createNewCont->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->createNewCont->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->deleteCount->ForeColor = Color::White;
				 F3->deleteCount->BackColor = Color::Black;
				 F3->deleteCount->FlatAppearance->BorderColor = Color::White;
				 F3->deleteCount->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->deleteCount->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->button1->ForeColor = Color::White;
				 F3->button1->BackColor = Color::Black;
				 F3->button1->FlatAppearance->BorderColor = Color::White;
				 F3->button1->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->button2->ForeColor = Color::White;
				 F3->button2->BackColor = Color::Black;
				 F3->button2->FlatAppearance->BorderColor = Color::White;
				 F3->button2->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->button2->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 F3->button5->ForeColor = Color::White;
				 F3->button5->BackColor = Color::Black;
				 F3->button5->FlatAppearance->BorderColor = Color::White;
				 F3->button5->FlatAppearance->MouseDownBackColor = Color::Black;
				 F3->button5->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
			 }
			 else
			 {
				 F3->BackColor = Color::White;
				 F3->label1->ForeColor = Color::Black;
				 F3->dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::White;
				 F3->dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = Color::Black;
				 F3->dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::White;
				 F3->dataGridView1->RowHeadersDefaultCellStyle->ForeColor = Color::Black;
				 F3->dataGridView1->DefaultCellStyle->BackColor = Color::White;
				 F3->dataGridView1->DefaultCellStyle->ForeColor = Color::Black;
				 F3->dataGridView1->BackgroundColor = Color::White;
				 F3->snowButton->ForeColor = Color::Black;
				 F3->snowButton->BackColor = Color::White;
				 F3->snowButton->FlatAppearance->BorderColor = Color::Black;
				 F3->snowButton->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->snowButton->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->iceButton->ForeColor = Color::Black;
				 F3->iceButton->BackColor = Color::White;
				 F3->iceButton->FlatAppearance->BorderColor = Color::Black;
				 F3->iceButton->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->iceButton->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->weatherButton->ForeColor = Color::Black;
				 F3->weatherButton->BackColor = Color::White;
				 F3->weatherButton->FlatAppearance->BorderColor = Color::Black;
				 F3->weatherButton->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->weatherButton->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->allButton->ForeColor = Color::Black;
				 F3->allButton->BackColor = Color::White;
				 F3->allButton->FlatAppearance->BorderColor = Color::Black;
				 F3->allButton->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->allButton->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->createNewCont->ForeColor = Color::Black;
				 F3->createNewCont->BackColor = Color::White;
				 F3->createNewCont->FlatAppearance->BorderColor = Color::Black;
				 F3->createNewCont->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->createNewCont->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->deleteCount->ForeColor = Color::Black;
				 F3->deleteCount->BackColor = Color::White;
				 F3->deleteCount->FlatAppearance->BorderColor = Color::Black;
				 F3->deleteCount->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->deleteCount->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->button1->ForeColor = Color::Black;
				 F3->button1->BackColor = Color::White;
				 F3->button1->FlatAppearance->BorderColor = Color::Black;
				 F3->button1->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->button2->ForeColor = Color::Black;
				 F3->button2->BackColor = Color::White;
				 F3->button2->FlatAppearance->BorderColor = Color::Black;
				 F3->button2->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->button2->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 F3->button5->ForeColor = Color::Black;
				 F3->button5->BackColor = Color::White;
				 F3->button5->FlatAppearance->BorderColor = Color::Black;
				 F3->button5->FlatAppearance->MouseDownBackColor = Color::White;
				 F3->button5->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			 }
}

private: System::Void F4_theme(MyForm4 ^F4) {
		if (checkBox2->Checked == false)
		{
			F4->BackColor = Color::White;
			F4->label1->ForeColor = Color::Black;
		}
		else
		{
			F4->BackColor = Color::Black;
			F4->label1->ForeColor = Color::White;
		}
}
private: System::Void F6_theme(Fields ^F6) {
		if (checkBox2->Checked == true)
		{
			F6->BackColor = Color::Black;
			F6->label1->ForeColor = Color::White;
			F6->label2->ForeColor = Color::White;
			F6->label3->ForeColor = Color::White;
			F6->label4->ForeColor = Color::White;
			F6->label5->ForeColor = Color::White;
			F6->label6->ForeColor = Color::White;
			F6->label7->ForeColor = Color::White;
			F6->label8->ForeColor = Color::White;
			F6->label9->ForeColor = Color::White;
			F6->label10->ForeColor = Color::White;
			F6->button1->ForeColor = Color::White;
			F6->button1->BackColor = Color::Black;
			F6->button1->FlatAppearance->BorderColor = Color::White;
			F6->button1->FlatAppearance->MouseDownBackColor = Color::Black;
			F6->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);

		}
		else
		{
			F6->BackColor = Color::White;
			F6->label1->ForeColor = Color::Black;
			F6->label2->ForeColor = Color::Black;
			F6->label3->ForeColor = Color::Black;
			F6->label4->ForeColor = Color::Black;
			F6->label5->ForeColor = Color::Black;
			F6->label6->ForeColor = Color::Black;
			F6->label7->ForeColor = Color::Black;
			F6->label8->ForeColor = Color::Black;
			F6->label9->ForeColor = Color::Black;
			F6->label10->ForeColor = Color::Black;
			F6->button1->ForeColor = Color::Black;
			F6->button1->BackColor = Color::White;
			F6->button1->FlatAppearance->BorderColor = Color::Black;
			F6->button1->FlatAppearance->MouseDownBackColor = Color::White;
			F6->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
	    }
}
private: System::Void F7_theme(SnowyForm ^F7) {
		if (checkBox2->Checked == true)
		{
			F7->BackColor = Color::Black;
			F7->label1->ForeColor = Color::White;
			F7->label2->ForeColor = Color::White;
			F7->label3->ForeColor = Color::White;
			F7->label4->ForeColor = Color::White;
			F7->label5->ForeColor = Color::White;
			F7->label6->ForeColor = Color::White;
			F7->label7->ForeColor = Color::White;
			F7->label8->ForeColor = Color::White;
			F7->label9->ForeColor = Color::White;
			F7->label10->ForeColor = Color::White;
			F7->label11->ForeColor = Color::White;
			F7->label12->ForeColor = Color::White;
			F7->button1->ForeColor = Color::White;
			F7->button1->BackColor = Color::Black;
			F7->button1->FlatAppearance->BorderColor = Color::White;
			F7->button1->FlatAppearance->MouseDownBackColor = Color::Black;
			F7->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
		}
		else
		{
			F7->BackColor = Color::White;
			F7->label1->ForeColor = Color::Black;
			F7->label2->ForeColor = Color::Black;
			F7->label3->ForeColor = Color::Black;
			F7->label4->ForeColor = Color::Black;
			F7->label5->ForeColor = Color::Black;
			F7->label6->ForeColor = Color::Black;
			F7->label7->ForeColor = Color::Black;
			F7->label8->ForeColor = Color::Black;
			F7->label9->ForeColor = Color::Black;
			F7->label10->ForeColor = Color::Black;
			F7->label11->ForeColor = Color::Black;
			F7->label12->ForeColor = Color::Black;
			F7->button1->ForeColor = Color::Black;
			F7->button1->BackColor = Color::White;
			F7->button1->FlatAppearance->BorderColor = Color::Black;
			F7->button1->FlatAppearance->MouseDownBackColor = Color::White;
			F7->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
		}
}
private: System::Void F8_theme(IceForm ^F8) {
			 if (checkBox2->Checked == true)
			 {
				 F8->BackColor = Color::Black;
				 F8->label1->ForeColor = Color::White;
				 F8->label2->ForeColor = Color::White;
				 F8->label3->ForeColor = Color::White;
				 F8->label4->ForeColor = Color::White;
				 F8->label5->ForeColor = Color::White;
				 F8->label7->ForeColor = Color::White;
				 F8->label8->ForeColor = Color::White;
				 F8->button1->ForeColor = Color::White;
				 F8->button1->BackColor = Color::Black;
				 F8->button1->FlatAppearance->BorderColor = Color::White;
				 F8->button1->FlatAppearance->MouseDownBackColor = Color::Black;
				 F8->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
			 }
			 else
			 {
				 F8->BackColor = Color::White;
				 F8->label1->ForeColor = Color::Black;
				 F8->label2->ForeColor = Color::Black;
				 F8->label3->ForeColor = Color::Black;
				 F8->label4->ForeColor = Color::Black;
				 F8->label5->ForeColor = Color::Black;
				 F8->label7->ForeColor = Color::Black;
				 F8->label8->ForeColor = Color::Black;
				 F8->button1->ForeColor = Color::Black;
				 F8->button1->BackColor = Color::White;
				 F8->button1->FlatAppearance->BorderColor = Color::Black;
				 F8->button1->FlatAppearance->MouseDownBackColor = Color::White;
				 F8->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			 }

}
private: System::Void F9_theme(WeatherForm ^F9) {
			 if (checkBox2->Checked == true)
			 {
				 F9->BackColor = Color::Black;
				 F9->label1->ForeColor = Color::White;
				 F9->label2->ForeColor = Color::White;
			 }
			 else
			 {
				 F9->BackColor = Color::White;
				 F9->label1->ForeColor = Color::Black;
				 F9->label2->ForeColor = Color::Black;
			 }
}
private: System::Void F10_theme(AddIce ^F10) {
			 if (checkBox2->Checked == true)
			 {
				 F10->BackColor = Color::Black;
				 F10->label1->ForeColor = Color::White;
				 F10->label2->ForeColor = Color::White;
				 F10->label4->ForeColor = Color::White;
				 F10->label5->ForeColor = Color::White;
				 F10->label6->ForeColor = Color::White;
				 F10->label7->ForeColor = Color::White;
				 F10->label8->ForeColor = Color::White;
				 F10->label10->ForeColor = Color::White;
				 F10->label12->ForeColor = Color::White;
				 F10->button1->ForeColor = Color::White;
				 F10->button1->BackColor = Color::Black;
				 F10->button1->FlatAppearance->BorderColor = Color::White;
				 F10->button1->FlatAppearance->MouseDownBackColor = Color::Black;
				 F10->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
			 }
			 else
			 {
				 F10->BackColor = Color::White;
				 F10->label1->ForeColor = Color::Black;
				 F10->label2->ForeColor = Color::Black;
				 F10->label4->ForeColor = Color::Black;
				 F10->label5->ForeColor = Color::Black;
				 F10->label6->ForeColor = Color::Black;
				 F10->label7->ForeColor = Color::Black;
				 F10->label8->ForeColor = Color::Black;
				 F10->label10->ForeColor = Color::Black;
				 F10->label12->ForeColor = Color::Black;
				 F10->button1->ForeColor = Color::Black;
				 F10->button1->BackColor = Color::White;
				 F10->button1->FlatAppearance->BorderColor = Color::Black;
				 F10->button1->FlatAppearance->MouseDownBackColor = Color::White;
				 F10->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			 }

}
private: System::Void F11_theme(AddSnow ^F11) {
			 if (checkBox2->Checked == true)
			 {
				 F11->BackColor = Color::Black;
				 F11->label1->ForeColor = Color::White;
				 F11->label2->ForeColor = Color::White;
				 F11->label3->ForeColor = Color::White;
				 F11->label4->ForeColor = Color::White;
				 F11->label5->ForeColor = Color::White;
				 F11->label6->ForeColor = Color::White;
				 F11->label7->ForeColor = Color::White;
				 F11->label8->ForeColor = Color::White;
				 F11->label9->ForeColor = Color::White;
				 F11->label10->ForeColor = Color::White;
				 F11->label11->ForeColor = Color::White;
				 F11->label12->ForeColor = Color::White;
				 F11->button1->ForeColor = Color::White;
				 F11->button1->BackColor = Color::Black;
				 F11->button1->FlatAppearance->BorderColor = Color::White;
				 F11->button1->FlatAppearance->MouseDownBackColor = Color::Black;
				 F11->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
			 }
			 else
			 {
				 F11->BackColor = Color::White;
				 F11->label1->ForeColor = Color::Black;
				 F11->label2->ForeColor = Color::Black;
				 F11->label3->ForeColor = Color::Black;
				 F11->label4->ForeColor = Color::Black;
				 F11->label5->ForeColor = Color::Black;
				 F11->label6->ForeColor = Color::Black;
				 F11->label7->ForeColor = Color::Black;
				 F11->label8->ForeColor = Color::Black;
				 F11->label9->ForeColor = Color::Black;
				 F11->label10->ForeColor = Color::Black;
				 F11->label11->ForeColor = Color::Black;
				 F11->label12->ForeColor = Color::Black;
				 F11->button1->ForeColor = Color::Black;
				 F11->button1->BackColor = Color::White;
				 F11->button1->FlatAppearance->BorderColor = Color::Black;
				 F11->button1->FlatAppearance->MouseDownBackColor = Color::White;
				 F11->button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			 }

}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->Checked == true)
			 {
				 //main
				 this->BackColor = Color::Black;
				 label1->ForeColor = Color::White;
				 checkBox1->ForeColor = Color::White;
				 checkBox2->ForeColor = Color::White;
				 button1->ForeColor = Color::White;
				 button2->ForeColor = Color::White;
				 button3->ForeColor = Color::White;
				 button4->ForeColor = Color::White;
				 button1->BackColor = Color::Black;
				 button2->BackColor = Color::Black;
				 button3->BackColor = Color::Black;
				 button4->BackColor = Color::Black;
				 button1->FlatAppearance->BorderColor = Color::White;
				 button2->FlatAppearance->BorderColor = Color::White;
				 button3->FlatAppearance->BorderColor = Color::White;
				 button4->FlatAppearance->BorderColor = Color::White;
				 button1->FlatAppearance->MouseDownBackColor = Color::Black;
				 button2->FlatAppearance->MouseDownBackColor = Color::Black;
				 button3->FlatAppearance->MouseDownBackColor = Color::Black;
				 button4->FlatAppearance->MouseDownBackColor = Color::Black;
				 button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 button2->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 button3->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 button4->FlatAppearance->MouseOverBackColor = Color::FromArgb(0, 33, 55);
				 //form1
			 }
			 else
			 {
				 this->BackColor = Color::White;
				 label1->ForeColor = Color::Black;
				 checkBox1->ForeColor = Color::Black;
				 checkBox2->ForeColor = Color::Black;
				 button1->ForeColor = Color::Black;
				 button2->ForeColor = Color::Black;
				 button3->ForeColor = Color::Black;
				 button4->ForeColor = Color::Black;
				 button1->BackColor = Color::White;
				 button2->BackColor = Color::White;
				 button3->BackColor = Color::White;
				 button4->BackColor = Color::White;
				 button1->FlatAppearance->BorderColor = Color::Black;
				 button2->FlatAppearance->BorderColor = Color::Black;
				 button3->FlatAppearance->BorderColor = Color::Black;
				 button4->FlatAppearance->BorderColor = Color::Black;
				 button1->FlatAppearance->MouseDownBackColor = Color::White;
				 button2->FlatAppearance->MouseDownBackColor = Color::White;
				 button3->FlatAppearance->MouseDownBackColor = Color::White;
				 button4->FlatAppearance->MouseDownBackColor = Color::White;
				 button1->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 button2->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 button3->FlatAppearance->MouseOverBackColor = Color::LightBlue;
				 button4->FlatAppearance->MouseOverBackColor = Color::LightBlue;
			 }
			 if (F1)
				 F1_theme(F1);
			 if (F2)
				 F2_theme(F2);
			 if (F3)
				 F3_theme(F3);
			 if (F4)
				 F4_theme(F4);
			 if (F6)
				 F6_theme(F6);
			 if (F7)
				 F7_theme(F7);
			 if (F8)
				 F8_theme(F8);
			 if (F9)
				 F9_theme(F9);
			 if (F10)
				 F10_theme(F10);
			 if (F11)
				 F11_theme(F11);
}
private: System::Void graphics_Click(System::Object^  sender, System::EventArgs^  e) {
			 F5 = gcnew MyForm5();
			 F5->Load += gcnew System::EventHandler(this, &MyForm::MyForm5_Load);
			 F5->Show();
}
private: System::Void fields_Click(System::Object^  sender, System::EventArgs^  e) {
			 F6 = gcnew Fields();
			 F6_theme(F6);
			 F6->textBox1->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[3]->Value);
			 F6->textBox2->Text = Convert::ToString(F3->dataGridView1->Rows[F3->dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value);
			 F6->button1->Click += gcnew System::EventHandler(this, &MyForm::fields_Clicker);
			 F6->Show();
}
private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
			 float a1 = System::Convert::ToDouble(F1->squareSech->Value);
			 float a2 = System::Convert::ToDouble(F1->riverSpeed->Text);
			 int a3 = (System::Convert::ToInt32(F1->timeHours->Text) + 24 * System::Convert::ToInt32(F1->timeDays->Text)) * 3600;
			 for (int i = 0; i < a3; i += 900)
			 {
				 swg->eski->facadeW(a1, a2, i);
				 if (F1->checkBox2->Checked)
				 {
					 swg->eski->pConsumption();
					 F5->chart1->Series[0]->Points->AddXY((i), swg->eski->rivParams->pwatchi->ras->cont);
				 }
				 else
				 {
					 swg->eski->Consumption();
					 F5->chart1->Series[0]->Points->AddXY((i), swg->eski->rivParams->watchi->cont);
				 }
			 }
}
};
}
