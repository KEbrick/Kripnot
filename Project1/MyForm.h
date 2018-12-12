#pragma once
#include <stdlib.h> 
#include <conio.h>
#include <stdio.h>

//Библиотека для работы с потоком данных при чтении файла
#include <fstream>
//Библиотека для работы с формами 
#include <windows.h>
//Библиотека для работы с строками 
#include <vcclr.h>
#include "crypt.h"

//Для работы с формами VisualBasic
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::Permissions;
	using namespace System::Security::Cryptography;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			FileIOPermission^ sec = gcnew FileIOPermission(PermissionState::None);
			sec->AllFiles = FileIOPermissionAccess::AllAccess;
			try
			{
				//(gcnew FileIOPermission(FileIOPermissionAccess::Read, "C:\"))->Demand();
				sec->Demand();
			}
			catch (Exception^)
			{
				сохранитьToolStripMenuItem1->Enabled = false;
			}

			try
			{
				//(gcnew FileIOPermission(FileIOPermissionAccess::Write, "C:\"))->Demand();
				sec->Demand();
			}
			catch (Exception^)
			{
				сохранитьToolStripMenuItem1->Enabled = false;
			}
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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




	private: System::Windows::Forms::ToolStripMenuItem^  редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  шрифтToolStripMenuItem;




	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  цветФонаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  цветТекстаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  криптToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  зашифроватьToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  разшифроватьToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  оПриложенииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  краткаяИнформацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  системныеТребованияToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветТекстаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->криптToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зашифроватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разшифроватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->оПриложенииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->краткаяИнформацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->системныеТребованияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->файлToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->криптToolStripMenuItem, this->оПриложенииToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(844, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьToolStripMenuItem1,
					this->сохранитьToolStripMenuItem1, this->выходToolStripMenuItem1
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem1
			// 
			this->открытьToolStripMenuItem1->Name = L"открытьToolStripMenuItem1";
			this->открытьToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->открытьToolStripMenuItem1->Text = L"Открыть";
			this->открытьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem1_Click);
			// 
			// сохранитьToolStripMenuItem1
			// 
			this->сохранитьToolStripMenuItem1->Name = L"сохранитьToolStripMenuItem1";
			this->сохранитьToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->сохранитьToolStripMenuItem1->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem1_Click);
			// 
			// выходToolStripMenuItem1
			// 
			this->выходToolStripMenuItem1->Name = L"выходToolStripMenuItem1";
			this->выходToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->выходToolStripMenuItem1->Text = L"Выход";
			this->выходToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem1_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->шрифтToolStripMenuItem,
					this->цветToolStripMenuItem, this->очиститьToolStripMenuItem
			});
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			// 
			// шрифтToolStripMenuItem
			// 
			this->шрифтToolStripMenuItem->Name = L"шрифтToolStripMenuItem";
			this->шрифтToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->шрифтToolStripMenuItem->Text = L"Шрифт";
			this->шрифтToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шрифтToolStripMenuItem_Click);
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветФонаToolStripMenuItem1,
					this->цветТекстаToolStripMenuItem1
			});
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->цветToolStripMenuItem->Text = L"Цвет";
			// 
			// цветФонаToolStripMenuItem1
			// 
			this->цветФонаToolStripMenuItem1->Name = L"цветФонаToolStripMenuItem1";
			this->цветФонаToolStripMenuItem1->Size = System::Drawing::Size(137, 22);
			this->цветФонаToolStripMenuItem1->Text = L"Цвет фона";
			this->цветФонаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::цветФонаToolStripMenuItem1_Click);
			// 
			// цветТекстаToolStripMenuItem1
			// 
			this->цветТекстаToolStripMenuItem1->Name = L"цветТекстаToolStripMenuItem1";
			this->цветТекстаToolStripMenuItem1->Size = System::Drawing::Size(137, 22);
			this->цветТекстаToolStripMenuItem1->Text = L"Цвет текста";
			this->цветТекстаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::цветТекстаToolStripMenuItem1_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// криптToolStripMenuItem
			// 
			this->криптToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->зашифроватьToolStripMenuItem,
					this->разшифроватьToolStripMenuItem
			});
			this->криптToolStripMenuItem->Name = L"криптToolStripMenuItem";
			this->криптToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->криптToolStripMenuItem->Text = L"Крипт";
			// 
			// зашифроватьToolStripMenuItem
			// 
			this->зашифроватьToolStripMenuItem->Name = L"зашифроватьToolStripMenuItem";
			this->зашифроватьToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->зашифроватьToolStripMenuItem->Text = L"Зашифровать";
			this->зашифроватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зашифроватьToolStripMenuItem_Click);
			// 
			// разшифроватьToolStripMenuItem
			// 
			this->разшифроватьToolStripMenuItem->Name = L"разшифроватьToolStripMenuItem";
			this->разшифроватьToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->разшифроватьToolStripMenuItem->Text = L"Разшифровать";
			this->разшифроватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::разшифроватьToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(0, 29);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(845, 552);
			this->textBox1->TabIndex = 2;
			// 
			// оПриложенииToolStripMenuItem
			// 
			this->оПриложенииToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->краткаяИнформацияToolStripMenuItem,
					this->системныеТребованияToolStripMenuItem
			});
			this->оПриложенииToolStripMenuItem->Name = L"оПриложенииToolStripMenuItem";
			this->оПриложенииToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->оПриложенииToolStripMenuItem->Text = L"О приложении";
			// 
			// краткаяИнформацияToolStripMenuItem
			// 
			this->краткаяИнформацияToolStripMenuItem->Name = L"краткаяИнформацияToolStripMenuItem";
			this->краткаяИнформацияToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->краткаяИнформацияToolStripMenuItem->Text = L"Краткая информация";
			// 
			// системныеТребованияToolStripMenuItem
			// 
			this->системныеТребованияToolStripMenuItem->Name = L"системныеТребованияToolStripMenuItem";
			this->системныеТребованияToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->системныеТребованияToolStripMenuItem->Text = L"Системные требования";
			// 
			// MyForm
			// 
			this->AccessibleName = L"MF";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 580);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Крипнот()";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void readTextFile() {

		//Чтение файла
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "*.txt|*.txt";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
				StreamReader^ sw = gcnew StreamReader(myStream);
				String ^str1 = "";
				str1 = sw->ReadToEnd();
				textBox1->Text = str1;
				myStream->Close();
				sw->Close();

			}
		}

	}


	void writeTextFile() {

		//Сохранение файла
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->InitialDirectory = "c:\\";
		saveFileDialog1->Filter = "*.txt|*.txt";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);

			sw->Write(textBox1->Text);
			sw->Close();

		}

	}


		


private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	

	}




private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}	




private: System::Void tXTToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	

	}


private: System::Void цветТекстаToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Изменяем цвет текста через colorDialog
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox1->SelectAll();
		textBox1->BackColor = colorDialog1->Color;
	}

}




private: System::Void цветФонаToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//изменяем цвет фона через colorDiaolog 
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox1->BackColor = colorDialog1->Color;
		
	}
}


private: System::Void шрифтToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	// изменяем размер, шрифт, жирный, курсивный 
	if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox1->SelectAll();
		textBox1->Font = fontDialog1->Font;
	}

}


private: System::Void очиститьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//очистка текстового поля
	textBox1->Clear();
}


private: System::Void открытьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Открытие txt файлов на чтение через OpenFileDialog
	readTextFile();
	
	
}

private: System::Void сохранитьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Запись данных в файл
	writeTextFile();
}


private: System::Void xORToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		//Шифруем перебором
		String^ text = textBox1->Text;
		textBox1->Text = Convert::ToString(encText(text));

}
private: System::Void xORToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Разшифровываем XOR

		//Запрашиваем ключ шифрования
		//String^ key = Microsoft::VisualBasic::Interaction::InputBox(L"Введите ключ шифрования", L"Title", L"DefResp", 500, 500);

		String^ endAlf = "$#^*%@!йцукенгшщзхъфывапролджэячт";
		String^ alf = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя" ;
		String^ encText =  "//\t";
		String ^ text = textBox1->Text; 
		//interior_ptr<const Char> ppchar = PtrToStringChars(text);
		//for (; *ppchar != L'\0'; ++ppchar) {
		//	
		//	for (int i = 0; i!=33; i++) {
		//		if (*ppchar == alf[i]) {
		//			encText += endAlf[i];
		//		} 
		//	}
		//	encText += *ppchar;

		//}
		for (int j = 0; j != sizeof(text)+1; j++ ) {

			for (int i = 1; i != 33; i++) {
				if (text[j] == alf[i]) {
					encText += endAlf[i];
				}
				else if (i == 33) {
					encText += alf[i];
				}
			}


		}
		textBox1->Text = Convert::ToString(encText);

	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	//richTextBox1->Size.Width = MyForm

}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void testToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}



private: System::Void выходToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(1);
}

private: System::Void зашифроватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Шифруем перебором
	String^ text = textBox1->Text;
	textBox1->Text = Convert::ToString(encText(text));
}


private: System::Void разшифроватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Разшифровываем 
	String^ text = textBox1->Text;
	textBox1->Text = Convert::ToString(decText(text));
}
};
}
