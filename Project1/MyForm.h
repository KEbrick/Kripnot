#pragma once
#include <stdlib.h> 
#include <conio.h>
#include <stdio.h>
#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  xORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tXTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğåäàêòèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  øğèôòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  öâåòÔîíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  öâåòÒåêñòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xORToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tXTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÒåêñòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îòêğûòüToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->ğåäàêòèğîâàòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(844, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->xORToolStripMenuItem,
					this->tXTToolStripMenuItem
			});
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// xORToolStripMenuItem
			// 
			this->xORToolStripMenuItem->Name = L"xORToolStripMenuItem";
			this->xORToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->xORToolStripMenuItem->Text = L"XOR";
			// 
			// tXTToolStripMenuItem
			// 
			this->tXTToolStripMenuItem->Name = L"tXTToolStripMenuItem";
			this->tXTToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->tXTToolStripMenuItem->Text = L"TXT";
			// 
			// ğåäàêòèğîâàòüToolStripMenuItem
			// 
			this->ğåäàêòèğîâàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->øğèôòToolStripMenuItem,
					this->öâåòÔîíàToolStripMenuItem, this->öâåòÒåêñòàToolStripMenuItem
			});
			this->ğåäàêòèğîâàòüToolStripMenuItem->Name = L"ğåäàêòèğîâàòüToolStripMenuItem";
			this->ğåäàêòèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ğåäàêòèğîâàòüToolStripMenuItem->Text = L"Ğåäàêòèğîâàòü";
			// 
			// øğèôòToolStripMenuItem
			// 
			this->øğèôòToolStripMenuItem->Name = L"øğèôòToolStripMenuItem";
			this->øğèôòToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->øğèôòToolStripMenuItem->Text = L"Øğèôò";
			// 
			// öâåòÔîíàToolStripMenuItem
			// 
			this->öâåòÔîíàToolStripMenuItem->Name = L"öâåòÔîíàToolStripMenuItem";
			this->öâåòÔîíàToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->öâåòÔîíàToolStripMenuItem->Text = L"Öâåò ôîíà";
			// 
			// öâåòÒåêñòàToolStripMenuItem
			// 
			this->öâåòÒåêñòàToolStripMenuItem->Name = L"öâåòÒåêñòàToolStripMenuItem";
			this->öâåòÒåêñòàToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->öâåòÒåêñòàToolStripMenuItem->Text = L"Öâåò òåêñòà";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 23);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(844, 558);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 580);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Êğèïíîò()";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(1);
	}

private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Îòêğûòèå txt ôàéëîâ íà ÷òåíèå ÷åğåç OpenFileDialog
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "*.txt|*.txt";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			StreamReader^ sw = gcnew StreamReader(myStream);
			String ^str1 = "";
			str1 = sw->ReadToEnd();
			richTextBox1->Text = (str1);

		}
	}
	}




};
}
