#pragma once
#include <Windows.h>
#include "MyForm.h"
namespace OOPLAB11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			
			
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(667, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hi! this program developed by Pantelii Maxim PZ-13";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Hi!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 205);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->Shown += gcnew System::EventHandler(this, &MyForm1::MyForm1_Shown);
			this->ControlAdded += gcnew System::Windows::Forms::ControlEventHandler(this, &MyForm1::MyForm1_ControlAdded);
			this->Enter += gcnew System::EventHandler(this, &MyForm1::MyForm1_Enter);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void MyForm1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		/*Sleep(1000);
		this->Hide()*/;
	}
	private: System::Void MyForm1_Shown(System::Object^ sender, System::EventArgs^ e) {	
		
	}
	private: System::Void MyForm1_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm^ tab = gcnew MyForm();
		tab->Show();
	}
};
}
