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
	private: System::Windows::Forms::ToolStripMenuItem^  îáû÷íàÿÏå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1;

			 
			


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
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüÊàêToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  ïå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çàêğûòüToolStripMenuItem;


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
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáû÷íàÿÏå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ôàéëToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(669, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->îòêğûòüToolStripMenuItem, 
				this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem, this->ïå÷àòüToolStripMenuItem, this->çàêğûòüToolStripMenuItem, 
				this->âûõîäToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"ñîõğàíèòü êàê";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ïå÷àòüToolStripMenuItem
			// 
			this->ïå÷àòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->îáû÷íàÿÏå÷àòüToolStripMenuItem, 
				this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1});
			this->ïå÷àòüToolStripMenuItem->Name = L"ïå÷àòüToolStripMenuItem";
			this->ïå÷àòüToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->ïå÷àòüToolStripMenuItem->Text = L"ïå÷àòü";
			// 
			// îáû÷íàÿÏå÷àòüToolStripMenuItem
			// 
			this->îáû÷íàÿÏå÷àòüToolStripMenuItem->Name = L"îáû÷íàÿÏå÷àòüToolStripMenuItem";
			this->îáû÷íàÿÏå÷àòüToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->îáû÷íàÿÏå÷àòüToolStripMenuItem->Text = L"îáû÷íàÿ ïå÷àòü";
			this->îáû÷íàÿÏå÷àòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ïå÷àòüToolStripMenuItem_Click);
			// 
			// ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1
			// 
			this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1->Name = L"ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1";
			this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1->Size = System::Drawing::Size(191, 22);
			this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1->Text = L"ïå÷àòü ïğèãëàøåíèé";
			this->ïå÷àòüÏğèãëàøåíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::ïå÷àòüÏğèãëàøåíèéToolStripMenuItem_Click);
			// 
			// çàêğûòüToolStripMenuItem
			// 
			this->çàêğûòüToolStripMenuItem->Name = L"çàêğûòüToolStripMenuItem";
			this->çàêğûòüToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->çàêğûòüToolStripMenuItem->Text = L"çàêğûòü";
			this->çàêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çàêğûòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->âûõîäToolStripMenuItem->Text = L"âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûõîäToolStripMenuItem_Click);
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
			this->Text = L"áëîêíîò";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(filename=="")
				 {
					 this->ñîõğàíèòüÊàêToolStripMenuItem_Click((System::Object^)this, (System::EventArgs^)nullptr);
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
						 MessageBox::Show("Îøèáêà: \n"+e->Message,"Íåäîáëîêíîò", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
				 }
			 }
public:
	bool wasChanged;
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
						 MessageBox::Show("Îøèáêà:\n"+e->Message,"Íåäîáëîêíîò",MessageBoxButtons::OK,MessageBoxIcon::Error);
					 }
				 }
				 else MessageBox::Show("Îøèáêà:\nÍåëüçÿ îòêğûòü ôàéë\n","Íåäîáëîêíîò",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 wasChanged=true;
		 }
private: System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
				 	 MessageBox::Show("Îøèáêà:\n"+e->Message,"Íåäîáëîêíîò",MessageBoxButtons::OK,MessageBoxIcon::Error);
		    	  }
			 }
		 }
private: System::Void Ïå÷àòüToolStripMenuItem_Click(System::Object^  sender, EventArgs^  e) {
			 try
			 {
				 filename = "C:\\Users\\Àëåêñàíäğ\\Desktop\\c++\\2.3\\Print pages.txt";
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
private: System::Void çàêğûòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void ïå÷àòüÏğèãëàøåíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 filename = "C:\\Users\\Àëåêñàíäğ\\Desktop\\c++\\2.3\\Print pages.txt";
			 StreamWriter ^write;
			 write=gcnew StreamWriter(filename,false,Encoding::UTF8);
			 write->Write(textBox1->Text);
			 write->Close();
			 Áëîêíîòèê::Partyprint^ partyprint = gcnew Áëîêíîòèê::Partyprint();
			 partyprint->ShowDialog();
		 }
};
}

