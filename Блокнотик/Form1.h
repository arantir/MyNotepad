#include "Partyprint.h"
#pragma once

namespace Sample {
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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		private:
			System::ComponentModel::Container^ components;
		    System::Drawing::Font^ printFont;
		    StreamReader^ streamToPrint;
			String^ filename;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������ToolStripMenuItem1;

			 
			


	public:
		Form1(void)
			: wasChanged(false)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
//		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(669, 257);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->����ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(669, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->�������ToolStripMenuItem, 
				this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->������ToolStripMenuItem, this->�������ToolStripMenuItem, 
				this->�����ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�������������ToolStripMenuItem, 
				this->�����������������ToolStripMenuItem1});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem1
			// 
			this->�����������������ToolStripMenuItem1->Name = L"�����������������ToolStripMenuItem1";
			this->�����������������ToolStripMenuItem1->Size = System::Drawing::Size(191, 22);
			this->�����������������ToolStripMenuItem1->Text = L"������ �����������";
			this->�����������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::�����������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 281);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"�������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(filename=="")
				 {
					 this->������������ToolStripMenuItem_Click((System::Object^)this, (System::EventArgs^)nullptr);
				 }
				 else
				 {
					 try
					 {
						 StreamWriter^ s_write;
						 s_write->Write(textBox1->Text);
						 s_write->Close();
						 wasChanged=false;
					 }
					 catch (System::IO::FileLoadException^e)
					 {
						 MessageBox::Show("������: \n"+e->Message,"�����������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
				 }
			 }
public:
	bool wasChanged;
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog1=gcnew OpenFileDialog;
			 openFileDialog1->InitialDirectory=".";
			 openFileDialog1->Filter="txt files (*.txt)|*.txt";
			 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
			 {
				 if (openFileDialog1->OpenFile()!=nullptr)
				 {
					 filename = openFileDialog1->FileName;
					 try
					 {
						 StreamReader ^s_read;
						 s_read=gcnew StreamReader(filename,Encoding::Default);
						 textBox1->Text=s_read->ReadToEnd();
						 s_read->Close();
						 wasChanged=false;
					 }
					 catch(FileLoadException ^e)
					 {
						 MessageBox::Show("������:\n"+e->Message,"�����������",MessageBoxButtons::OK,MessageBoxIcon::Error);
					 }
				 }
				 else MessageBox::Show("������:\n������ ������� ����\n","�����������",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 wasChanged=true;
		 }
private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ SaveFileDialog1=gcnew SaveFileDialog;
			 SaveFileDialog1->InitialDirectory=".";
			 SaveFileDialog1->Filter="txt files (*.txt)|*.txt";
			 if(SaveFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
			 {

				  filename = SaveFileDialog1->FileName;
				  try
				  {
					 StreamWriter ^s_write;
					 s_write=gcnew StreamWriter(filename,false,Encoding::Default);
					 s_write->Write(textBox1->Text);
				     s_write->Close();
				   	 wasChanged=false;
				  }
				  catch(FileLoadException ^e)
				  {
				 	 MessageBox::Show("������:\n"+e->Message,"�����������",MessageBoxButtons::OK,MessageBoxIcon::Error);
		    	  }
			 }
		 }
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, EventArgs^  e) {
			 try
			 {
				 filename = "C:\\Users\\���������\\Desktop\\c++\\2.3\\Print pages.txt";
				 StreamWriter ^s_write;
				 s_write=gcnew StreamWriter(filename,false,Encoding::UTF8);
				 s_write->Write(textBox1->Text);
				 s_write->Close();
				 streamToPrint = gcnew StreamReader ( filename );
				 try
				 {
					 PrintPreviewDialog^ PrintDialog1 = gcnew PrintPreviewDialog();
					 printFont = gcnew System::Drawing::Font( "Arial",15 );
					 PrintDocument^ pd = gcnew PrintDocument;
					 pd->PrintPage += gcnew PrintPageEventHandler( this, &Form1::pd_PrintPage );
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
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Clear();
		 }
private: void pd_PrintPage( Object^ /*sender*/, PrintPageEventArgs^ ev )
		 {
			 float linesPerPage = 0;
			 float yPos = 0;
			 int count = 0;
			 float leftMargin = (float)ev->MarginBounds.Left;
			 float topMargin = (float)ev->MarginBounds.Top;
			 String^ line = nullptr;
			 linesPerPage = ev->MarginBounds.Height / printFont->GetHeight( ev->Graphics );
			 while ( count < linesPerPage && ((line = streamToPrint->ReadLine()) != nullptr) )
			 {
				 yPos = topMargin + (count * printFont->GetHeight( ev->Graphics ));
				 ev->Graphics->DrawString( line, printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat );
				 count++;
			 }
			 if ( line != nullptr )
				ev->HasMorePages = true;
			 else
				ev->HasMorePages = false;
		  }
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 filename = "C:\\Users\\���������\\Desktop\\c++\\2.3\\Print pages.txt";
			 StreamWriter ^write;
			 write=gcnew StreamWriter(filename,false,Encoding::UTF8);
			 write->Write(textBox1->Text);
			 write->Close();
			 ���������::Partyprint^ partyprint = gcnew ���������::Partyprint();
			 partyprint->ShowDialog();
		 }
};
}

