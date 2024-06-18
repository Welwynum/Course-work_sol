#pragma once

#include <cstdlib>
#include <ctime>
namespace CppCLRWinFormsProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	int RandomNumber() {
		//randomness is achieved using time
		srand(static_cast<unsigned int>(time(0)));

		return (rand() % 30) + 1;
	}
	int attempts = 0;






	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
	private: System::Windows::Forms::Button^ One;


	protected:

	protected:




	private: System::Windows::Forms::Button^ Zero;



	private: System::Windows::Forms::Button^ Nine;

	private: System::Windows::Forms::Button^ Six;

	private: System::Windows::Forms::Button^ Three;
	private: System::Windows::Forms::Button^ Eight;


	private: System::Windows::Forms::Button^ Five;
	private: System::Windows::Forms::Button^ Seven;


	private: System::Windows::Forms::Button^ Four;

	private: System::Windows::Forms::Button^ Two;






	private: System::Windows::Forms::Label^ resultsLabel;
	private: System::Windows::Forms::Button^ btnGuess;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Zero = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->Four = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->resultsLabel = (gcnew System::Windows::Forms::Label());
			this->btnGuess = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// One
			// 
			this->One->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->One->Location = System::Drawing::Point(351, 360);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(93, 75);
			this->One->TabIndex = 0;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = true;
			this->One->Click += gcnew System::EventHandler(this, &Form1::One_Click);
			// 
			// Zero
			// 
			this->Zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Zero->Location = System::Drawing::Point(549, 522);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(93, 75);
			this->Zero->TabIndex = 4;
			this->Zero->Text = L"0";
			this->Zero->UseVisualStyleBackColor = true;
			this->Zero->Click += gcnew System::EventHandler(this, &Form1::Zero_Click);
			// 
			// Nine
			// 
			this->Nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Nine->Location = System::Drawing::Point(450, 522);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(93, 75);
			this->Nine->TabIndex = 6;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = true;
			this->Nine->Click += gcnew System::EventHandler(this, &Form1::Nine_Click);
			// 
			// Six
			// 
			this->Six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Six->Location = System::Drawing::Point(450, 441);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(93, 75);
			this->Six->TabIndex = 7;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = true;
			this->Six->Click += gcnew System::EventHandler(this, &Form1::Six_Click);
			// 
			// Three
			// 
			this->Three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Three->Location = System::Drawing::Point(549, 360);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(93, 75);
			this->Three->TabIndex = 8;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = true;
			this->Three->Click += gcnew System::EventHandler(this, &Form1::Three_Click);
			// 
			// Eight
			// 
			this->Eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Eight->Location = System::Drawing::Point(351, 522);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(93, 75);
			this->Eight->TabIndex = 9;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = true;
			this->Eight->Click += gcnew System::EventHandler(this, &Form1::Eight_Click);
			// 
			// Five
			// 
			this->Five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Five->Location = System::Drawing::Point(351, 441);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(93, 75);
			this->Five->TabIndex = 10;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = true;
			this->Five->Click += gcnew System::EventHandler(this, &Form1::Five_Click);
			// 
			// Seven
			// 
			this->Seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Seven->Location = System::Drawing::Point(549, 441);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(93, 75);
			this->Seven->TabIndex = 11;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = true;
			this->Seven->Click += gcnew System::EventHandler(this, &Form1::Seven_Click);
			// 
			// Four
			// 
			this->Four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Four->Location = System::Drawing::Point(648, 360);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(93, 75);
			this->Four->TabIndex = 12;
			this->Four->Text = L"4";
			this->Four->UseVisualStyleBackColor = true;
			this->Four->Click += gcnew System::EventHandler(this, &Form1::Four_Click);
			// 
			// Two
			// 
			this->Two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Two->Location = System::Drawing::Point(450, 360);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(93, 75);
			this->Two->TabIndex = 13;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = true;
			this->Two->Click += gcnew System::EventHandler(this, &Form1::Two_Click);
			// 
			// resultsLabel
			// 
			this->resultsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->resultsLabel->Location = System::Drawing::Point(351, 320);
			this->resultsLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->resultsLabel->Name = L"resultsLabel";
			this->resultsLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->resultsLabel->Size = System::Drawing::Size(390, 37);
			this->resultsLabel->TabIndex = 17;
			this->resultsLabel->Text = L"0";
			this->resultsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnGuess
			// 
			this->btnGuess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btnGuess->Location = System::Drawing::Point(648, 441);
			this->btnGuess->Name = L"btnGuess";
			this->btnGuess->Size = System::Drawing::Size(93, 156);
			this->btnGuess->TabIndex = 18;
			this->btnGuess->Text = L"Guess";
			this->btnGuess->UseVisualStyleBackColor = true;
			this->btnGuess->Click += gcnew System::EventHandler(this, &Form1::btnGuess_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(346, 286);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 32);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"Your guess:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"Rules: 1)Numbers from 1 to 30";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"2)Unlimited tries";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(158, 20);
			this->textBox4->TabIndex = 22;
			this->textBox4->Text = L"3)Have fun!";
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Red;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->btnClear->Location = System::Drawing::Point(747, 360);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(93, 237);
			this->btnClear->TabIndex = 23;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 656);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnGuess);
			this->Controls->Add(this->resultsLabel);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->One);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		int THE_number = RandomNumber();
	private: System::Void One_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "1";
		}
		else
		{
			resultsLabel->Text += "1";
		}
	}
	private: System::Void Zero_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "0";
		}
		else
		{
			resultsLabel->Text += "0";
		}
	}

	private: System::Void Two_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "2";
		}
		else
		{
			resultsLabel->Text += "2";
		}
	}
	private: System::Void Four_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "4";
		}
		else
		{
			resultsLabel->Text += "4";
		}
	}
	private: System::Void Five_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "5";
		}
		else
		{
			resultsLabel->Text += "5";
		}
	}
	private: System::Void Six_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "6";
		}
		else
		{
			resultsLabel->Text += "6";
		}
	}
	private: System::Void Seven_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "7";
		}
		else
		{
			resultsLabel->Text += "7";
		}
	}
	private: System::Void Eight_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "8";
		}
		else
		{
			resultsLabel->Text += "8";
		}
	}
	private: System::Void Nine_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "9";
		}
		else
		{
			resultsLabel->Text += "9";
		}
	}
	private: System::Void Three_Click(System::Object^ sender, System::EventArgs^ e) {
		if (resultsLabel->Text == "0") {
			resultsLabel->Text = "3";
		}
		else
		{
			resultsLabel->Text += "3";
		}
	}
	private: System::Void btnGuess_Click(System::Object^ sender, System::EventArgs^ e) {

		char notZero = this->resultsLabel->Text[0];
		int number = System::Convert::ToInt32(this->resultsLabel->Text);
		int guess = Convert::ToInt32(this->resultsLabel->Text);

		if (notZero == '0') {
			MessageBox::Show("Enter at least something, pretty please.");
			return;
		}
		if (number >= 31) {
			MessageBox::Show("Shoot lower, invalid input.");
			resultsLabel->Text = "0";
			return;
		}
		if (guess > THE_number) {
			MessageBox::Show("Too high! Try again.");
			attempts++;
			resultsLabel->Text = "0";
		}
		else if (guess < THE_number) {
			MessageBox::Show("Too low! Try again.");
			attempts++;
			resultsLabel->Text = "0";
		}
		else {
			MessageBox::Show("Congratulations! You've guessed the correct number " + THE_number + " in " + attempts + " attempts!");
			MessageBox::Show("Now try to guess new one!");
			GenerateNewRandomNumber();
			attempts = 0;
			resultsLabel->Text = "0";
		}
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		resultsLabel->Text = "0";
		
	}
		   void GenerateNewRandomNumber() {
			   THE_number = RandomNumber(); 
		   }
};
}
