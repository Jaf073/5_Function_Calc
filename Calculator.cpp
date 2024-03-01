#include "Calculator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //ProjectName::SourceFile form
    CppCalcTest::Calculator form;
    Application::Run(% form);
}