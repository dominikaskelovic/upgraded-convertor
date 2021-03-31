#include "MyForm.h"
#include "Micro.h"
#include "Nano.h"
#include "Pico.h"
#include <string>
#include <iostream>
#include <windows.h>

using namespace convertorupgraded;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void convertorupgraded::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Micro micro;
	if (comboBox1->Text == "Microseconds" && comboBox2->Text == "Microseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(micro.ConvertToMicro(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Microseconds" && comboBox2->Text == "Nanoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(micro.ConvertToNano(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Microseconds" && comboBox2->Text == "Picoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(micro.ConvertToPico(System::Convert::ToDouble(firstTextBox->Text)));
	}

	Nano nano;
	if (comboBox1->Text == "Nanoseconds" && comboBox2->Text == "Microseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(nano.ConvertToMicro(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Nanoseconds" && comboBox2->Text == "Nanoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(nano.ConvertToNano(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Nanoseconds" && comboBox2->Text == "Picoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(nano.ConvertToPico(System::Convert::ToDouble(firstTextBox->Text)));
	}


	Pico pico;
	if (comboBox1->Text == "Picoseconds" && comboBox2->Text == "Microseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(pico.ConvertToMicro(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Picoseconds" && comboBox2->Text == "Nanoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(pico.ConvertToNano(System::Convert::ToDouble(firstTextBox->Text)));
	}
	if (comboBox1->Text == "Picoseconds" && comboBox2->Text == "Picoseconds")
	{
		//	Assign micro to micro result to secondTextBox
		secondTextBox->Text = System::Convert::ToString(pico.ConvertToPico(System::Convert::ToDouble(firstTextBox->Text)));
	}



	return System::Void();
}
