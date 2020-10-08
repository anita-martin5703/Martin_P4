// Anita Martin
// amartin98@cnm.edu
// First GUI: SimpleCalc

// MyForm.h

#pragma once
#include "SimpleCalc.h"

namespace MartinP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	SimpleCalc calc;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdd;
	protected:




	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::TextBox^ txtResults;
	private: System::Windows::Forms::Label^ lblOps;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnClear;






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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(401, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"              Welcome to the C++ Calculator\r\n\r\nEnter two numbers and press the op"
				L"eration button.";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::SteelBlue;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Constantia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAdd->Location = System::Drawing::Point(32, 164);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(99, 49);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(32, 81);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(57, 27);
			this->txtNum1->TabIndex = 5;
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(154, 81);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(57, 27);
			this->txtNum2->TabIndex = 6;
			// 
			// txtResults
			// 
			this->txtResults->Location = System::Drawing::Point(252, 81);
			this->txtResults->Multiline = true;
			this->txtResults->Name = L"txtResults";
			this->txtResults->Size = System::Drawing::Size(183, 50);
			this->txtResults->TabIndex = 7;
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Location = System::Drawing::Point(115, 84);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(16, 19);
			this->lblOps->TabIndex = 8;
			this->lblOps->Text = L"\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(214, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 42);
			this->label3->TabIndex = 9;
			this->label3->Text = L"=";
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::Color::SteelBlue;
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Constantia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSubtract->Location = System::Drawing::Point(176, 164);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(99, 49);
			this->btnSubtract->TabIndex = 10;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::SteelBlue;
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Constantia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMultiply->Location = System::Drawing::Point(32, 238);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(99, 49);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::SteelBlue;
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Constantia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDivide->Location = System::Drawing::Point(176, 238);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(99, 49);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::SlateGray;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClear->Location = System::Drawing::Point(336, 204);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(99, 49);
			this->btnClear->TabIndex = 13;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(469, 310);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->txtResults);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Anita Martin P4 Simple Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void Calculate(char operation) {
	double n1 = Convert::ToDouble(txtNum1->Text);
	double n2 = Convert::ToDouble(txtNum2->Text);

	calc.SetOperation(operation, n1, n2);
	txtResults->Text = gcnew String(calc.GetResults().c_str());
	lblOps->Text = Convert::ToChar(operation).ToString();
}

private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('-');
}
private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('*');
}
private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('/');
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('+');

}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNum1->Clear();
	txtNum2->Clear();
	txtResults->Clear();
	lblOps->Text = "?";

}
};
}