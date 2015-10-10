#pragma once

namespace IPIMS_Group_9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmergencyAlert
	/// </summary>
	public ref class EmergencyAlert : public System::Windows::Forms::Form
	{
	public:
		EmergencyAlert(void)
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
		~EmergencyAlert()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
























	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Label^  labelEmergencyAlert;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;
	private: System::Windows::Forms::Label^  labelSymptoms;
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->labelEmergencyAlert = (gcnew System::Windows::Forms::Label());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 281);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(424, 215);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Emergency Alert Conditions Include:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 156);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(442, 281);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(115, 35);
			this->buttonClear->TabIndex = 36;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &EmergencyAlert::buttonClear_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSave->Location = System::Drawing::Point(442, 461);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(115, 35);
			this->buttonSave->TabIndex = 35;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &EmergencyAlert::buttonSave_Click);
			// 
			// labelEmergencyAlert
			// 
			this->labelEmergencyAlert->AutoSize = true;
			this->labelEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEmergencyAlert->Location = System::Drawing::Point(12, 37);
			this->labelEmergencyAlert->Name = L"labelEmergencyAlert";
			this->labelEmergencyAlert->Size = System::Drawing::Size(408, 36);
			this->labelEmergencyAlert->TabIndex = 34;
			this->labelEmergencyAlert->Text = L"Send Doctor Emergency Alert";
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxSymptoms->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSymptoms->Location = System::Drawing::Point(90, 84);
			this->textBoxSymptoms->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxSymptoms->Size = System::Drawing::Size(489, 192);
			this->textBoxSymptoms->TabIndex = 33;
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelSymptoms->Font = (gcnew System::Drawing::Font(L"Arial", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSymptoms->Location = System::Drawing::Point(11, 84);
			this->labelSymptoms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(75, 22);
			this->labelSymptoms->TabIndex = 32;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(441, 422);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(138, 31);
			this->checkBoxEmergencyAlert->TabIndex = 31;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			// 
			// EmergencyAlert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->labelEmergencyAlert);
			this->Controls->Add(this->textBoxSymptoms);
			this->Controls->Add(this->labelSymptoms);
			this->Controls->Add(this->checkBoxEmergencyAlert);
			this->Name = L"EmergencyAlert";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSymptoms->Text = "";
		this->checkBoxEmergencyAlert->Checked = false;
	}

	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBoxSymptoms->Text)
		{
			if (checkBoxEmergencyAlert->Checked)
				MessageBox::Show("Our staff will contact you as soon as possible");
			else
				MessageBox::Show("The symptoms have been saved.");
		}
		else
			MessageBox::Show("Please enter data");
	}
	};
}
