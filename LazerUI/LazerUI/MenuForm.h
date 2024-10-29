#pragma once

namespace LazerUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::Label^ Test;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->Test = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(311, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ƒлина волны:";
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(323, 171);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 1;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MenuForm::StartButton_Click);
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(311, 98);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(100, 22);
			this->Input->TabIndex = 2;
			// 
			// Test
			// 
			this->Test->AutoSize = true;
			this->Test->Location = System::Drawing::Point(522, 231);
			this->Test->Name = L"Test";
			this->Test->Size = System::Drawing::Size(46, 17);
			this->Test->TabIndex = 3;
			this->Test->Text = L"label2";
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(760, 395);
			this->Controls->Add(this->Test);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->label1);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Test->Text = this->Input->Text;
}
};
}
