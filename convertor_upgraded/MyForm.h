#pragma once

namespace convertorupgraded {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ firstTextBox;

	private: System::Windows::Forms::TextBox^ secondTextBox;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->firstTextBox = (gcnew System::Windows::Forms::TextBox());
			this->secondTextBox = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// firstTextBox
			// 
			this->firstTextBox->Location = System::Drawing::Point(43, 60);
			this->firstTextBox->Name = L"firstTextBox";
			this->firstTextBox->Size = System::Drawing::Size(186, 20);
			this->firstTextBox->TabIndex = 1;
			// 
			// secondTextBox
			// 
			this->secondTextBox->Location = System::Drawing::Point(43, 132);
			this->secondTextBox->Name = L"secondTextBox";
			this->secondTextBox->Size = System::Drawing::Size(186, 20);
			this->secondTextBox->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Microseconds", L"Nanoseconds", L"Picoseconds" });
			this->comboBox1->Location = System::Drawing::Point(43, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(186, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Microseconds", L"Nanoseconds", L"Picoseconds" });
			this->comboBox2->Location = System::Drawing::Point(43, 105);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(186, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(276, 261);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->secondTextBox);
			this->Controls->Add(this->firstTextBox);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Converter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
