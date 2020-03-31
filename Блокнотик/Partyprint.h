
#pragma once
#pragma setlocale( "Russian" )
namespace Блокнотик {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::IO;
	using namespace System::Text;
	/// <summary> 
	/// Сводка для Partyprint
	/// </summary>
	public ref class Partyprint : public System::Windows::Forms::Form
	{
	public:
		Partyprint(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Partyprint()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;






	protected: 

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Мероприятие:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Время, место, контакты:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Комментарии:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(382, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Печать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Partyprint::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(618, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Partyprint::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(618, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Partyprint::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(175, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(618, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Организация:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(175, 32);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(618, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Partyprint::textBox1_TextChanged);
			// 
			// Partyprint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 293);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"Partyprint";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Partyprint";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Drawing::Font^ printFont;
	StreamReader^ streamToPrint;
	StreamReader^ organizationChoose;
	StreamReader^ organizationSymbol;
	String^ filename;
	String^ filename1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 filename = "C:\\Users\\Александр\\Desktop\\c++\\2.3\\Print pages.txt";
				 try
				 {
					 organizationChoose = gcnew StreamReader ( filename );
					 streamToPrint = gcnew StreamReader ( filename );
					 try
					 {
						 PrintPreviewDialog^ PrintDialog1 = gcnew PrintPreviewDialog();
						 printFont = gcnew System::Drawing::Font( "Arial",15 );
						 PrintDocument^ pd = gcnew PrintDocument;
						 pd->PrintPage += gcnew PrintPageEventHandler( this, &Partyprint::pd_PrintPage );
						 PrintDialog1->Document=pd;
						 PrintDialog1->ShowDialog();
					 }
					 finally
					 {
						streamToPrint->Close();
					 }
				 }
				 catch ( Exception^ ex ) 
				 {
					MessageBox::Show( ex->Message );
				 }
			 }
private: void pd_PrintPage( Object^ /*sender*/, PrintPageEventArgs^ ev )
		 {
			 float linesPerPage = 0;
			 int yPos = -50;
			 int count = 0;
			 int OrganizationLength = organizationChoose->ReadToEnd()->Length;
			 int leftMargin = (float)ev->MarginBounds.Left;
			 float topMargin = (float)ev->MarginBounds.Top;
			 String^ line = nullptr;
			 String^ organization;
			 String^ symbol;
			 String^ Name;
			 filename1 = "C:\\Users\\Александр\\Desktop\\c++\\2.3\\Line.txt";
			 linesPerPage = ev->MarginBounds.Height / printFont->GetHeight( ev->Graphics );
			 while ( count < linesPerPage && ((line = streamToPrint->ReadLine()) != nullptr) )
			 {
				 StreamWriter^ write;
				 write = gcnew StreamWriter(filename1,false,Encoding::UTF8);
				 write->Write(line);
				 write->Close();
				 organizationSymbol = gcnew StreamReader ( filename1 );
				 for ( int i = 0 ; i < OrganizationLength ; i++ )
				 {
					 symbol = Convert::ToString(Convert::ToChar(organizationSymbol->Read()));
					 if ( symbol != "," )
						 organization = organization + symbol;
					 else
					 {
						 Name = organizationSymbol->ReadToEnd();
						 break;
					 }
				 }
				 if ( textBox4->Text == organization )
				 {
					 line = "Приглашается " + Name + " на " + textBox1->Text + "\nМесто, время, координаты:" + textBox2->Text + "\n" + textBox3->Text;
					 yPos = 150 + yPos;
					 ev->Graphics->DrawString( line, printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat );
				 }
				 organization = "";
				 organizationSymbol->Close();
				 count++;
			 }
			 if ( line != nullptr )
				ev->HasMorePages = true;
			 else
				ev->HasMorePages = false;
		  }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ( textBox1->Text != "" && textBox2->Text != "" && textBox4->Text != "" ) button1->Enabled = true;
			 else button1->Enabled = false;
		 }
};
}
