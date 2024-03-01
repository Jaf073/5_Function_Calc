#pragma once

namespace CppCalcTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ Trace;

	protected:

	protected:

	private: System::Windows::Forms::TabPage^ CalcTab;
	private: System::Windows::Forms::TextBox^ txtDisplay;


	private: System::Windows::Forms::Button^ btnPERC;


	private: System::Windows::Forms::Button^ btnDIV;

	private: System::Windows::Forms::Button^ btnMIN;

	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnEQ;


	private: System::Windows::Forms::Button^ btnMUL;

	private: System::Windows::Forms::Button^ btnPL;

	private: System::Windows::Forms::Button^ btnC;

	private: System::Windows::Forms::Button^ btnDEC;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn2;



	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ bnt0;


	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ btn7;


	private: System::Windows::Forms::TabControl^ TabControl;
	private: System::Windows::Forms::Button^ btnTrace;
	private: System::Windows::Forms::TextBox^ txtToggle;
	private: System::Windows::Forms::ListBox^ TraceList;













	protected:



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
			this->Trace = (gcnew System::Windows::Forms::TabPage());
			this->TraceList = (gcnew System::Windows::Forms::ListBox());
			this->CalcTab = (gcnew System::Windows::Forms::TabPage());
			this->txtToggle = (gcnew System::Windows::Forms::TextBox());
			this->btnTrace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnPERC = (gcnew System::Windows::Forms::Button());
			this->btnDIV = (gcnew System::Windows::Forms::Button());
			this->btnMIN = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnEQ = (gcnew System::Windows::Forms::Button());
			this->btnMUL = (gcnew System::Windows::Forms::Button());
			this->btnPL = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnDEC = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->bnt0 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->Trace->SuspendLayout();
			this->CalcTab->SuspendLayout();
			this->TabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// Trace
			// 
			this->Trace->BackColor = System::Drawing::Color::LightGray;
			this->Trace->Controls->Add(this->TraceList);
			this->Trace->Location = System::Drawing::Point(4, 29);
			this->Trace->Name = L"Trace";
			this->Trace->Padding = System::Windows::Forms::Padding(3);
			this->Trace->Size = System::Drawing::Size(449, 483);
			this->Trace->TabIndex = 1;
			this->Trace->Text = L"Trace Logic";
			// 
			// TraceList
			// 
			this->TraceList->FormattingEnabled = true;
			this->TraceList->ItemHeight = 20;
			this->TraceList->Location = System::Drawing::Point(6, 6);
			this->TraceList->Name = L"TraceList";
			this->TraceList->Size = System::Drawing::Size(436, 464);
			this->TraceList->TabIndex = 0;
			// 
			// CalcTab
			// 
			this->CalcTab->BackColor = System::Drawing::Color::Gainsboro;
			this->CalcTab->Controls->Add(this->txtToggle);
			this->CalcTab->Controls->Add(this->btnTrace);
			this->CalcTab->Controls->Add(this->txtDisplay);
			this->CalcTab->Controls->Add(this->btnPERC);
			this->CalcTab->Controls->Add(this->btnDIV);
			this->CalcTab->Controls->Add(this->btnMIN);
			this->CalcTab->Controls->Add(this->btnCE);
			this->CalcTab->Controls->Add(this->btnEQ);
			this->CalcTab->Controls->Add(this->btnMUL);
			this->CalcTab->Controls->Add(this->btnPL);
			this->CalcTab->Controls->Add(this->btnC);
			this->CalcTab->Controls->Add(this->btnDEC);
			this->CalcTab->Controls->Add(this->btn3);
			this->CalcTab->Controls->Add(this->btn6);
			this->CalcTab->Controls->Add(this->btn9);
			this->CalcTab->Controls->Add(this->btn2);
			this->CalcTab->Controls->Add(this->btn5);
			this->CalcTab->Controls->Add(this->btn8);
			this->CalcTab->Controls->Add(this->bnt0);
			this->CalcTab->Controls->Add(this->btn1);
			this->CalcTab->Controls->Add(this->btn4);
			this->CalcTab->Controls->Add(this->btn7);
			this->CalcTab->Location = System::Drawing::Point(4, 29);
			this->CalcTab->Name = L"CalcTab";
			this->CalcTab->Padding = System::Windows::Forms::Padding(3);
			this->CalcTab->Size = System::Drawing::Size(449, 483);
			this->CalcTab->TabIndex = 0;
			this->CalcTab->Text = L"Calculator";
			this->CalcTab->Click += gcnew System::EventHandler(this, &Calculator::CalcTab_Click);
			// 
			// txtToggle
			// 
			this->txtToggle->Location = System::Drawing::Point(360, 17);
			this->txtToggle->Name = L"txtToggle";
			this->txtToggle->Size = System::Drawing::Size(73, 26);
			this->txtToggle->TabIndex = 3;
			this->txtToggle->Text = L"True";
			// 
			// btnTrace
			// 
			this->btnTrace->BackColor = System::Drawing::Color::DarkGray;
			this->btnTrace->Location = System::Drawing::Point(228, 6);
			this->btnTrace->Name = L"btnTrace";
			this->btnTrace->Size = System::Drawing::Size(126, 48);
			this->btnTrace->TabIndex = 2;
			this->btnTrace->Text = L"Trace Logic:";
			this->btnTrace->UseVisualStyleBackColor = false;
			this->btnTrace->Click += gcnew System::EventHandler(this, &Calculator::EnterLogic);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(6, 74);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(431, 62);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnPERC
			// 
			this->btnPERC->BackColor = System::Drawing::Color::DarkGray;
			this->btnPERC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPERC->Location = System::Drawing::Point(362, 396);
			this->btnPERC->Name = L"btnPERC";
			this->btnPERC->Size = System::Drawing::Size(75, 75);
			this->btnPERC->TabIndex = 0;
			this->btnPERC->Text = L"%";
			this->btnPERC->UseVisualStyleBackColor = false;
			this->btnPERC->Click += gcnew System::EventHandler(this, &Calculator::btnPercent);
			// 
			// btnDIV
			// 
			this->btnDIV->BackColor = System::Drawing::Color::DarkGray;
			this->btnDIV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDIV->Location = System::Drawing::Point(360, 315);
			this->btnDIV->Name = L"btnDIV";
			this->btnDIV->Size = System::Drawing::Size(75, 75);
			this->btnDIV->TabIndex = 0;
			this->btnDIV->Text = L"/";
			this->btnDIV->UseVisualStyleBackColor = false;
			this->btnDIV->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btnMIN
			// 
			this->btnMIN->BackColor = System::Drawing::Color::DarkGray;
			this->btnMIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMIN->Location = System::Drawing::Point(360, 234);
			this->btnMIN->Name = L"btnMIN";
			this->btnMIN->Size = System::Drawing::Size(75, 75);
			this->btnMIN->TabIndex = 0;
			this->btnMIN->Text = L"-";
			this->btnMIN->UseVisualStyleBackColor = false;
			this->btnMIN->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::DarkGray;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(360, 153);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 75);
			this->btnCE->TabIndex = 0;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &Calculator::EnterCE);
			// 
			// btnEQ
			// 
			this->btnEQ->BackColor = System::Drawing::Color::DarkGray;
			this->btnEQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEQ->Location = System::Drawing::Point(281, 396);
			this->btnEQ->Name = L"btnEQ";
			this->btnEQ->Size = System::Drawing::Size(75, 75);
			this->btnEQ->TabIndex = 0;
			this->btnEQ->Text = L"=";
			this->btnEQ->UseVisualStyleBackColor = false;
			this->btnEQ->Click += gcnew System::EventHandler(this, &Calculator::EnterEqual);
			// 
			// btnMUL
			// 
			this->btnMUL->BackColor = System::Drawing::Color::DarkGray;
			this->btnMUL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMUL->Location = System::Drawing::Point(279, 315);
			this->btnMUL->Name = L"btnMUL";
			this->btnMUL->Size = System::Drawing::Size(75, 75);
			this->btnMUL->TabIndex = 0;
			this->btnMUL->Text = L"*";
			this->btnMUL->UseVisualStyleBackColor = false;
			this->btnMUL->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btnPL
			// 
			this->btnPL->BackColor = System::Drawing::Color::DarkGray;
			this->btnPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPL->Location = System::Drawing::Point(279, 234);
			this->btnPL->Name = L"btnPL";
			this->btnPL->Size = System::Drawing::Size(75, 75);
			this->btnPL->TabIndex = 0;
			this->btnPL->Text = L"+";
			this->btnPL->UseVisualStyleBackColor = false;
			this->btnPL->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::DarkGray;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(279, 153);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 75);
			this->btnC->TabIndex = 0;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &Calculator::EnterC);
			// 
			// btnDEC
			// 
			this->btnDEC->BackColor = System::Drawing::Color::DarkGray;
			this->btnDEC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDEC->Location = System::Drawing::Point(170, 396);
			this->btnDEC->Name = L"btnDEC";
			this->btnDEC->Size = System::Drawing::Size(75, 75);
			this->btnDEC->TabIndex = 0;
			this->btnDEC->Text = L".";
			this->btnDEC->UseVisualStyleBackColor = false;
			this->btnDEC->Click += gcnew System::EventHandler(this, &Calculator::EnterDecimal);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::DarkGray;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(168, 315);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 75);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::DarkGray;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(168, 234);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 75);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::DarkGray;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(168, 153);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 75);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::DarkGray;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(87, 315);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 75);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::DarkGray;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(87, 234);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 75);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::DarkGray;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(87, 153);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 75);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// bnt0
			// 
			this->bnt0->BackColor = System::Drawing::Color::DarkGray;
			this->bnt0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bnt0->Location = System::Drawing::Point(8, 396);
			this->bnt0->Name = L"bnt0";
			this->bnt0->Size = System::Drawing::Size(154, 75);
			this->bnt0->TabIndex = 0;
			this->bnt0->Text = L"0";
			this->bnt0->UseVisualStyleBackColor = false;
			this->bnt0->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::DarkGray;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(6, 315);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 75);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::DarkGray;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(6, 234);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 75);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::DarkGray;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(6, 153);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 75);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculator::NumPress);
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->CalcTab);
			this->TabControl->Controls->Add(this->Trace);
			this->TabControl->Location = System::Drawing::Point(0, 1);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(457, 516);
			this->TabControl->TabIndex = 0;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(458, 519);
			this->Controls->Add(this->TabControl);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->Trace->ResumeLayout(false);
			this->CalcTab->ResumeLayout(false);
			this->CalcTab->PerformLayout();
			this->TabControl->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	//Set double values for math operations
	double FirstDig, SecondDig, Result;

	//set a string to determine which operator is used later
	String^ operators;

	//set bool values for later use
	bool FirstVal = true;
	bool BlankText = true;

	bool Trace_Val = true;
	int Dec_Count = 0; //decimal count to count every trace logic point

	//function to calculate result 
	double Calculate(double x, double y, String^ op) {
			if (op == "*") {
				return(x * y);
			}
			else if (op == "/"){
				return(x / y);
			}
			else if (op == "+") {
				return(x + y);
			}
			else if (op == "-") {
				return(x - y);
			}
			else {
				return(99999);
			}
	}

	//function to add to trace logic
	void TraceLogic(String^ Trace_Text) {
		if (Trace_Val) {
			TraceList->Items->Add("[" + (System::Convert::ToString(++Dec_Count)) + "] " + Trace_Text);
		}
	}

	//Functions I do not need but the program is forcing me to use 
	//because it throws an error without them :(
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void CalcTab_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	//Everything under this are relevent to making calculator work


	//Number has been pressed
private: System::Void NumPress(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	TraceLogic("BUTTON: " + Numbers->Text);

	TraceLogic("IF: check for empty display, then put number on display");
	if (BlankText){ //if display is empty, replace the value
		txtDisplay->Text = Numbers->Text;
	}
	else { //otherwise add value to next digit
		txtDisplay->Text += Numbers->Text;
	}

	BlankText = false;
}

	//Operator has been pressed
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	TraceLogic("BUTTON: " + NumbersOp->Text);

	operators = NumbersOp->Text; //save operator being used

	TraceLogic("IF: find type of operator, # of values, and/or # of times operator has been pressed");
	if ((BlankText) && (operators == "-")) {//if there are no numbers, - is a neg (not a sub)
		TraceLogic("IF: determine if operator is minus or negative");
		if (txtDisplay->Text->Contains("-")) {
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		else {
			txtDisplay->Text = "-" + txtDisplay->Text;
		}
	}
	
	else if (txtDisplay->Text == "") {//check if operator was double pressed
		TraceLogic("Error: Operator presseed twice");
		txtDisplay->Text = "Error: Operator presseed twice";
	}

	else if (FirstVal) {//check if input is the first value
		TraceLogic("FUNC: Save 1st Value");
		FirstDig = Double::Parse(txtDisplay->Text); //turn first number types into text
		txtDisplay->Text = ""; //clear the textbox

		FirstVal = false; //no longer the first value
	}
	else {// now calculate for multiple numbers
		TraceLogic("FUNC: replace 1st value with the result of 1st and 2nd");
		SecondDig = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = ""; //clear the textbox

		FirstDig = Calculate(FirstDig, SecondDig, operators);//convert 1st dig to the result of the two
		BlankText = true;
	}
}

	//Decimal has been pressed
private: System::Void EnterDecimal(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: decimal");

	TraceLogic("IF: determine if text already has decimal in it");
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text += ".";
	}
	else {
		TraceLogic("Error: More than one decimal in display");
		txtDisplay->Text = "Error: Too many decimals";
	}
	BlankText = false;
}

	//Equal sign has been pressed
private: System::Void EnterEqual(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: =");
	
	SecondDig = Double::Parse(txtDisplay->Text); //turn next number into text

	TraceLogic("FUNC: Calculate result and output to display");
	Result = Calculate(FirstDig, SecondDig, operators);
	txtDisplay->Text = System::Convert::ToString(Result);

	FirstDig = Result; //set result to first digit to continue operations

	//clear values
	TraceLogic("Func: Clear Values");
	SecondDig = 0;
	FirstVal = true;
	BlankText = true;
	Dec_Count = 0;
}

	//Clear has been pressed
private: System::Void EnterC(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: Clear");
	TraceLogic("FUNC: Clear display, values, count, and operators");

	//clear everything
	txtDisplay->Text = "";
	FirstDig = 0;
	SecondDig = 0;
	Dec_Count = 0;
	operators = "";
	BlankText = true;
}

	//Clear Entry has been pressed
private: System::Void EnterCE(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: Clear Entry");
	TraceLogic("FUNC: Clear display");

	//clear display
	txtDisplay->Text = "";
	BlankText = true;
}

	//Toggle Trace Logic has been pressed
private: System::Void EnterLogic(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: Toggle");
	TraceLogic("FUNC: Toggle Trace Value");
	if (Trace_Val) { //toggle trace value
		txtToggle->Text = "False";
		Trace_Val = false;
		TraceList->Items->Clear();
	}

	else {
		txtToggle->Text = "True";
		Trace_Val = true;
		Dec_Count = 0;
	}
}

private: System::Void btnPercent(System::Object^ sender, System::EventArgs^ e) {
	TraceLogic("BUTTON: %");
	TraceLogic("IF: number is second value");
	if (!FirstVal && (txtDisplay->Text != "")) {
		TraceLogic("FUNC: convert 2nd value to be the % of the 1st");
		SecondDig = Double::Parse(txtDisplay->Text);
		SecondDig = FirstDig * (SecondDig / 100);

		TraceLogic("FUNC: calculate result");
		Result = Calculate(FirstDig, SecondDig, operators);
		txtDisplay->Text = System::Convert::ToString(Result);

		FirstDig = Result; //set result to first digit to continue operations

		//clear values
		TraceLogic("FUNC: Clear Values");
		SecondDig = 0;
		FirstVal = true;
		BlankText = true;
		Dec_Count = 0;
	}
	else {
		TraceLogic("Error: % was pressed before 2nd value was inserted");
		txtDisplay->Text = "Error: Not 2nd Value";
	}
		
}
};
}
