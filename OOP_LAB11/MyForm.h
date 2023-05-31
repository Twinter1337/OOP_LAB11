#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace OOPLAB11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm() {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menu;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_table;
	private: System::Windows::Forms::Panel^ panel_tool;
	private: System::Windows::Forms::Button^ button_get_val;

	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_fill;
	private: System::Windows::Forms::Label^ j_label;

	private: System::Windows::Forms::Label^ i_label;
	private: System::Windows::Forms::Label^ Colums_label;
	private: System::Windows::Forms::Label^ Row_label;
	private: System::Windows::Forms::TextBox^ text_box_new_val;
	private: System::Windows::Forms::TextBox^ text_box_j;
	private: System::Windows::Forms::TextBox^ text_box_i;
	private: System::Windows::Forms::TextBox^ text_box_colums;
	private: System::Windows::Forms::TextBox^ text_box_rows;
	private: System::Windows::Forms::Button^ button_set_val;

	private: System::Windows::Forms::Label^ new_val_label;
	private: System::Windows::Forms::TableLayoutPanel^ table;
	private: System::Windows::Forms::TextBox^ text_box_val_is;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;





	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_table = (gcnew System::Windows::Forms::Panel());
			this->table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel_tool = (gcnew System::Windows::Forms::Panel());
			this->text_box_val_is = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->new_val_label = (gcnew System::Windows::Forms::Label());
			this->j_label = (gcnew System::Windows::Forms::Label());
			this->i_label = (gcnew System::Windows::Forms::Label());
			this->Colums_label = (gcnew System::Windows::Forms::Label());
			this->Row_label = (gcnew System::Windows::Forms::Label());
			this->text_box_new_val = (gcnew System::Windows::Forms::TextBox());
			this->text_box_j = (gcnew System::Windows::Forms::TextBox());
			this->text_box_i = (gcnew System::Windows::Forms::TextBox());
			this->text_box_colums = (gcnew System::Windows::Forms::TextBox());
			this->text_box_rows = (gcnew System::Windows::Forms::TextBox());
			this->button_set_val = (gcnew System::Windows::Forms::Button());
			this->button_get_val = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_fill = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menu->SuspendLayout();
			this->panel_table->SuspendLayout();
			this->panel_tool->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::Info;
			this->menu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(951, 30);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 26);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->readToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->writeToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(58, 26);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fillToolStripMenuItem_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::getValueToolStripMenuItem_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setValueToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 26);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// panel_table
			// 
			this->panel_table->BackColor = System::Drawing::SystemColors::Info;
			this->panel_table->Controls->Add(this->table);
			this->panel_table->Location = System::Drawing::Point(12, 41);
			this->panel_table->Name = L"panel_table";
			this->panel_table->Size = System::Drawing::Size(594, 516);
			this->panel_table->TabIndex = 1;
			// 
			// table
			// 
			this->table->BackColor = System::Drawing::SystemColors::ControlLight;
			this->table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->table->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->table->ColumnCount = 1;
			this->table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->table->Location = System::Drawing::Point(0, 0);
			this->table->Name = L"table";
			this->table->RowCount = 1;
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->table->Size = System::Drawing::Size(594, 516);
			this->table->TabIndex = 0;
			this->table->CellPaint += gcnew System::Windows::Forms::TableLayoutCellPaintEventHandler(this, &MyForm::table_CellPaint);
			// 
			// panel_tool
			// 
			this->panel_tool->BackColor = System::Drawing::SystemColors::Info;
			this->panel_tool->Controls->Add(this->text_box_val_is);
			this->panel_tool->Controls->Add(this->label1);
			this->panel_tool->Controls->Add(this->new_val_label);
			this->panel_tool->Controls->Add(this->j_label);
			this->panel_tool->Controls->Add(this->i_label);
			this->panel_tool->Controls->Add(this->Colums_label);
			this->panel_tool->Controls->Add(this->Row_label);
			this->panel_tool->Controls->Add(this->text_box_new_val);
			this->panel_tool->Controls->Add(this->text_box_j);
			this->panel_tool->Controls->Add(this->text_box_i);
			this->panel_tool->Controls->Add(this->text_box_colums);
			this->panel_tool->Controls->Add(this->text_box_rows);
			this->panel_tool->Controls->Add(this->button_set_val);
			this->panel_tool->Controls->Add(this->button_get_val);
			this->panel_tool->Controls->Add(this->button_clear);
			this->panel_tool->Controls->Add(this->button_fill);
			this->panel_tool->Location = System::Drawing::Point(612, 41);
			this->panel_tool->Name = L"panel_tool";
			this->panel_tool->Size = System::Drawing::Size(334, 516);
			this->panel_tool->TabIndex = 2;
			// 
			// text_box_val_is
			// 
			this->text_box_val_is->Location = System::Drawing::Point(203, 335);
			this->text_box_val_is->Name = L"text_box_val_is";
			this->text_box_val_is->Size = System::Drawing::Size(100, 22);
			this->text_box_val_is->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(102, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Value is:";
			// 
			// new_val_label
			// 
			this->new_val_label->AutoSize = true;
			this->new_val_label->Location = System::Drawing::Point(85, 255);
			this->new_val_label->Name = L"new_val_label";
			this->new_val_label->Size = System::Drawing::Size(75, 16);
			this->new_val_label->TabIndex = 13;
			this->new_val_label->Text = L"New Value:";
			// 
			// j_label
			// 
			this->j_label->AutoSize = true;
			this->j_label->Location = System::Drawing::Point(184, 206);
			this->j_label->Name = L"j_label";
			this->j_label->Size = System::Drawing::Size(13, 16);
			this->j_label->TabIndex = 12;
			this->j_label->Text = L"j:";
			// 
			// i_label
			// 
			this->i_label->AutoSize = true;
			this->i_label->Location = System::Drawing::Point(41, 206);
			this->i_label->Name = L"i_label";
			this->i_label->Size = System::Drawing::Size(13, 16);
			this->i_label->TabIndex = 11;
			this->i_label->Text = L"i:";
			// 
			// Colums_label
			// 
			this->Colums_label->AutoSize = true;
			this->Colums_label->Location = System::Drawing::Point(203, 46);
			this->Colums_label->Name = L"Colums_label";
			this->Colums_label->Size = System::Drawing::Size(52, 16);
			this->Colums_label->TabIndex = 10;
			this->Colums_label->Text = L"Colums";
			// 
			// Row_label
			// 
			this->Row_label->AutoSize = true;
			this->Row_label->Location = System::Drawing::Point(57, 46);
			this->Row_label->Name = L"Row_label";
			this->Row_label->Size = System::Drawing::Size(41, 16);
			this->Row_label->TabIndex = 9;
			this->Row_label->Text = L"Rows";
			this->Row_label->Click += gcnew System::EventHandler(this, &MyForm::Row_label_Click);
			// 
			// text_box_new_val
			// 
			this->text_box_new_val->Location = System::Drawing::Point(203, 249);
			this->text_box_new_val->Name = L"text_box_new_val";
			this->text_box_new_val->Size = System::Drawing::Size(100, 22);
			this->text_box_new_val->TabIndex = 8;
			this->text_box_new_val->TextChanged += gcnew System::EventHandler(this, &MyForm::text_box_new_val_TextChanged);
			// 
			// text_box_j
			// 
			this->text_box_j->Location = System::Drawing::Point(203, 200);
			this->text_box_j->Name = L"text_box_j";
			this->text_box_j->Size = System::Drawing::Size(100, 22);
			this->text_box_j->TabIndex = 7;
			this->text_box_j->TextChanged += gcnew System::EventHandler(this, &MyForm::text_box_j_TextChanged);
			// 
			// text_box_i
			// 
			this->text_box_i->Location = System::Drawing::Point(60, 200);
			this->text_box_i->Name = L"text_box_i";
			this->text_box_i->Size = System::Drawing::Size(100, 22);
			this->text_box_i->TabIndex = 6;
			this->text_box_i->TextChanged += gcnew System::EventHandler(this, &MyForm::text_box_i_TextChanged);
			// 
			// text_box_colums
			// 
			this->text_box_colums->Location = System::Drawing::Point(203, 65);
			this->text_box_colums->Name = L"text_box_colums";
			this->text_box_colums->Size = System::Drawing::Size(100, 22);
			this->text_box_colums->TabIndex = 5;
			this->text_box_colums->TextChanged += gcnew System::EventHandler(this, &MyForm::text_box_rows_TextChanged_1);
			// 
			// text_box_rows
			// 
			this->text_box_rows->Location = System::Drawing::Point(60, 65);
			this->text_box_rows->Name = L"text_box_rows";
			this->text_box_rows->Size = System::Drawing::Size(100, 22);
			this->text_box_rows->TabIndex = 4;
			this->text_box_rows->TextChanged += gcnew System::EventHandler(this, &MyForm::text_box_rows_TextChanged_1);
			// 
			// button_set_val
			// 
			this->button_set_val->Location = System::Drawing::Point(203, 277);
			this->button_set_val->Name = L"button_set_val";
			this->button_set_val->Size = System::Drawing::Size(100, 23);
			this->button_set_val->TabIndex = 3;
			this->button_set_val->Text = L"Set Value";
			this->button_set_val->UseVisualStyleBackColor = true;
			this->button_set_val->Click += gcnew System::EventHandler(this, &MyForm::button_set_val_Click);
			// 
			// button_get_val
			// 
			this->button_get_val->Location = System::Drawing::Point(203, 363);
			this->button_get_val->Name = L"button_get_val";
			this->button_get_val->Size = System::Drawing::Size(100, 23);
			this->button_get_val->TabIndex = 2;
			this->button_get_val->Text = L"Get Value";
			this->button_get_val->UseVisualStyleBackColor = true;
			this->button_get_val->Click += gcnew System::EventHandler(this, &MyForm::button_get_val_Click);
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(203, 118);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(100, 23);
			this->button_clear->TabIndex = 1;
			this->button_clear->Text = L"Clear";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// button_fill
			// 
			this->button_fill->Location = System::Drawing::Point(60, 118);
			this->button_fill->Name = L"button_fill";
			this->button_fill->Size = System::Drawing::Size(100, 23);
			this->button_fill->TabIndex = 0;
			this->button_fill->Text = L"Fill";
			this->button_fill->UseVisualStyleBackColor = true;
			this->button_fill->Click += gcnew System::EventHandler(this, &MyForm::button_fill_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"C:\\files\\input_file.txt";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(951, 562);
			this->Controls->Add(this->panel_tool);
			this->Controls->Add(this->panel_table);
			this->Controls->Add(this->menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menu;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Table";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->panel_table->ResumeLayout(false);
			this->panel_tool->ResumeLayout(false);
			this->panel_tool->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Row_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_fill_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < table->ColumnCount; i++) {
			for (int j = 0; j < table->RowCount; j++) {
				Control^ ctrl = table->GetControlFromPosition(i, j);
				table->Controls->Remove(ctrl);
			}
		}

		for (int i = 0; i < table->ColumnCount; i++) {
			for (int j = 0; j < table->RowCount; j++) {
				this->table->Controls->Add(gcnew Label(), i, j);
				if ((i >= (table->ColumnCount / 2) && j < (table->RowCount / 2)) || (i < (table->ColumnCount / 2) && j >= (table->RowCount / 2))) {
					table->GetControlFromPosition(i, j)->Text = "0";
				}
				else {
					table->GetControlFromPosition(i, j)->Text = "0";
				}
			}
		}
	}
	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < table->ColumnCount; i++) {
			for (int j = 0; j < table->RowCount; j++) {
				Control^ ctrl = table->GetControlFromPosition(i, j);
				table->Controls->Remove(ctrl);
			}
		}
	}
	private: System::Void text_box_i_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_box_j_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_box_new_val_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_get_val_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, j;
		try {
			i = i.Parse(text_box_i->Text);
			j = j.Parse(text_box_j->Text);
		}
		catch (...) {
			i = table->RowCount;
			j = table->ColumnCount;
		}
		if (table->Controls->Count == 0) {
			MessageBox::Show("\tNo value to get!\t");
			return;
		}

		if ((i < table->RowCount && j < table->ColumnCount) || (i > table->RowCount && j > table->ColumnCount)) {
			text_box_val_is->Text = table->GetControlFromPosition(j, i)->Text;
			MessageBox::Show("\t   Value is " + table->GetControlFromPosition(j, i)->Text + "!\t");
		}
		else {
			MessageBox::Show("\tIncotect i or j!\t");
		}

	}
	private: System::Void button_set_val_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, j;
		try {
			i = i.Parse(text_box_i->Text);
			j = j.Parse(text_box_j->Text);
		}
		catch (...) {
			i = table->RowCount;
			j = table->ColumnCount;
		}
		if (table->Controls->Count == 0) {
			MessageBox::Show("\tNo cells to fill!\t");
			return;
		}

		if ((i < table->RowCount && j < table->ColumnCount) || (i > table->RowCount && j > table->ColumnCount)) {
			try {
				int new_val = new_val.Parse(text_box_new_val->Text);
				if (new_val > 1 || new_val < 0) {
					throw exception();
				}
			}
			catch (...) {
				MessageBox::Show("\tIncotect value!\t");
				return;
			}
			table->GetControlFromPosition(j, i)->Text = text_box_new_val->Text;
			MessageBox::Show("\tValue changed!\t");
		}
		else {
			MessageBox::Show("\tIncotect i or j!\t");
		}
	}
	private: System::Void table_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file_name;

		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			file_name = openFileDialog1->FileName;
		}
		else {
			return;
		}

		try {
			for (int i = 0; i < table->ColumnCount; i++) {
				for (int j = 0; j < table->RowCount; j++) {
					Control^ ctrl = table->GetControlFromPosition(i, j);
					table->Controls->Remove(ctrl);
				}
			}
			text_box_rows->Text = "0";
			text_box_colums->Text = "0";
			StreamReader^ file = File::OpenText(file_name);
			String^ info = file->ReadLine();

			int row = row.Parse(info);
			text_box_rows->Text = info;
			info = file->ReadLine();
			int col = col.Parse(info);
			text_box_colums->Text = info;
			table->RowCount = row;
			table->ColumnCount = col;

			for (int i = 0; i < table->ColumnCount; i++) {
				for (int j = 0; j < table->RowCount; j++) {
					info = file->ReadLine();
					try {
						int new_val = new_val.Parse(info);
						if (new_val > 1 || new_val < 0) {
							throw exception();
						}
					}
					catch (...) {
						MessageBox::Show("\tIncotect value!\t");
						file->Close();
						return;
					}
					this->table->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50));
					this->table->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50));
					this->table->Controls->Add(gcnew Label(), i, j);
					table->GetControlFromPosition(i, j)->Text = info;
				}
			}
			file->Close();
		}
		catch (...) {
			MessageBox::Show(this, "file wasn`t open!\t");
			return;
		}
	}
	private: System::Void table_CellPaint(System::Object^ sender, System::Windows::Forms::TableLayoutCellPaintEventArgs^ e) {
	}
	private: System::Void text_box_rows_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		int rows;
		try {
			rows = rows.Parse(this->text_box_rows->Text);
			table->RowCount = rows;
			for (int i = 0; i < rows; i++) {
				this->table->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50));
			}
		}
		catch (...) {
			for (int i = 0; i < table->ColumnCount; i++) {
				for (int j = 0; j < table->RowCount; j++) {
					Control^ ctrl = table->GetControlFromPosition(i, j);
					table->Controls->Remove(ctrl);
				}
			}
			table->RowCount = 1;
			rows = 0;
		}

		int colums;
		try {
			colums = colums.Parse(this->text_box_colums->Text);
			table->ColumnCount = colums;
			for (int i = 0; i < colums; i++) {
				this->table->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50));
			}
		}
		catch (...) {
			for (int i = 0; i < table->ColumnCount; i++) {
				for (int j = 0; j < table->RowCount; j++) {
					Control^ ctrl = table->GetControlFromPosition(i, j);
					table->Controls->Remove(ctrl);
				}
			}
			table->ColumnCount = 1;
			colums = 0;
		}
	}
	private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file_name;

		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			file_name = saveFileDialog1->FileName;
		}
		else {
			return;
		}

		StreamWriter^ file_save = gcnew StreamWriter(file_name);
		try {
			file_save->WriteLine(text_box_rows->Text);
			file_save->WriteLine(text_box_colums->Text);

			for (int i = 0; i < table->ColumnCount; i++) {
				for (int j = 0; j < table->RowCount; j++) {
					file_save->WriteLine(table->GetControlFromPosition(i, j)->Text);
				}
			}

			file_save->Close();
		}
		catch (...) {
			MessageBox::Show("\tThe table is empty!\t");
			file_save->Close();
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button_fill_Click(sender, e);
	}
	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button_clear_Click(sender, e);
	}
	private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button_get_val_Click(sender, e);
	}

	private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button_set_val_Click(sender, e);
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("File:\nRead - reading table from your file.\n" +
			"Write - writing table in your file.\n" +
			"Exit - exit program.\n" + "\nTable:\nFill - filling all cells in the table by 0.\n" +
			"Set value - setting value by new in i j cell.\n" +
			"Get value - getting value by new in i j cell.\n" +
			"Clear - clearing all values from cells.\n");
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}

};
}
