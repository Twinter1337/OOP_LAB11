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
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
			
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->SuspendLayout();
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1101, 468);
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

		}
#pragma endregion
	
	private: System::Void MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void MyForm1_Enter(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MyForm1_Shown(System::Object^ sender, System::EventArgs^ e) {	
		Sleep(2000);
		this->Hide();
		MyForm^ tab = gcnew MyForm();
		tab->Show();
	}
	private: System::Void MyForm1_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
