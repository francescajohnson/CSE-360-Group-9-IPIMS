#pragma once

namespace IPIMS_Group_9 {
	//...
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScheduleAppointment
	/// </summary>
	public ref class ScheduleAppointment : public System::Windows::Forms::Form
	{
	public:
		ScheduleAppointment(void)
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
		~ScheduleAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelScheduleAppointment;
	private: System::Windows::Forms::GroupBox^  groupBoxPersonalInformation;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;
	private: System::Windows::Forms::Label^  labelSymptoms;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendarScheduling;
	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;
	private: System::Windows::Forms::Button^  buttonScheduleAppointment;
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
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
			this->labelScheduleAppointment = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersonalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendarScheduling = (gcnew System::Windows::Forms::MonthCalendar());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->buttonScheduleAppointment = (gcnew System::Windows::Forms::Button());
			this->groupBoxPersonalInformation->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelScheduleAppointment
			// 
			this->labelScheduleAppointment->AutoSize = true;
			this->labelScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelScheduleAppointment->Location = System::Drawing::Point(12, 30);
			this->labelScheduleAppointment->Name = L"labelScheduleAppointment";
			this->labelScheduleAppointment->Size = System::Drawing::Size(331, 36);
			this->labelScheduleAppointment->TabIndex = 1;
			this->labelScheduleAppointment->Text = L"Schedule Appointments";
			// 
			// groupBoxPersonalInformation
			// 
			this->groupBoxPersonalInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->labelSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPersonalInformation->Location = System::Drawing::Point(12, 69);
			this->groupBoxPersonalInformation->Name = L"groupBoxPersonalInformation";
			this->groupBoxPersonalInformation->Size = System::Drawing::Size(564, 167);
			this->groupBoxPersonalInformation->TabIndex = 5;
			this->groupBoxPersonalInformation->TabStop = false;
			this->groupBoxPersonalInformation->Text = L"Personal Information:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(392, 41);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(467, 38);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			this->textBoxDateOfBirth->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxDateOfBirth_TextClick);
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Location = System::Drawing::Point(73, 64);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSymptoms->Size = System::Drawing::Size(465, 97);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"What are the symptoms\?";
			this->textBoxSymptoms->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxSymptoms_TextClick);
			this->textBoxSymptoms->TextChanged += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxSymptoms_TextChanged);
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->AutoSize = true;
			this->labelSymptoms->Location = System::Drawing::Point(9, 67);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(58, 13);
			this->labelSymptoms->TabIndex = 6;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(266, 38);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(120, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			this->textBoxLastName->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxLastName_TextClick);
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 38);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			this->textBoxFirstName->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxFirstName_TextClick);
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(199, 41);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(7, 41);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->comboBoxDoctorSelection);
			this->groupBox1->Controls->Add(this->monthCalendarScheduling);
			this->groupBox1->Controls->Add(this->checkBoxEmergencyAlert);
			this->groupBox1->Location = System::Drawing::Point(12, 242);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(563, 220);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calendar and Doctor Selection for Appointment Scheduling:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(323, 86);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(234, 100);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Emergency Alert Conditions Include:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 78);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
			// 
			// comboBoxDoctorSelection
			// 
			this->comboBoxDoctorSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxDoctorSelection->FormattingEnabled = true;
			this->comboBoxDoctorSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Dr. Thomas Smith", L"Dr. Susan Enriquez",
					L"Dr. Linda Chattin"
			});
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(273, 25);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(284, 26);
			this->comboBoxDoctorSelection->TabIndex = 2;
			this->comboBoxDoctorSelection->Text = L"Select the Doctor for your Appointment";
			// 
			// monthCalendarScheduling
			// 
			this->monthCalendarScheduling->Location = System::Drawing::Point(5, 25);
			this->monthCalendarScheduling->Name = L"monthCalendarScheduling";
			this->monthCalendarScheduling->TabIndex = 0;
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->AutoSize = true;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(398, 191);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(160, 24);
			this->checkBoxEmergencyAlert->TabIndex = 19;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			// 
			// buttonScheduleAppointment
			// 
			this->buttonScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonScheduleAppointment->Location = System::Drawing::Point(381, 489);
			this->buttonScheduleAppointment->Name = L"buttonScheduleAppointment";
			this->buttonScheduleAppointment->Size = System::Drawing::Size(206, 35);
			this->buttonScheduleAppointment->TabIndex = 18;
			this->buttonScheduleAppointment->Text = L"Schedule Appointment";
			this->buttonScheduleAppointment->UseVisualStyleBackColor = true;
			this->buttonScheduleAppointment->Click += gcnew System::EventHandler(this, &ScheduleAppointment::buttonScheduleAppointment_Click);
			// 
			// ScheduleAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 536);
			this->Controls->Add(this->buttonScheduleAppointment);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->labelScheduleAppointment);
			this->Name = L"ScheduleAppointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonScheduleAppointment_Click(System::Object^  sender, System::EventArgs^  e) {
		// add code here for when the schedule appointments button is selected.
		if (checkBoxEmergencyAlert->Checked)
			MessageBox::Show("Our staff will contact you as soon as possible");
		else
			MessageBox::Show("Your appointment has been scheduled.");
	}
	private: System::Void textBoxSymptoms_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBoxSymptoms->SelectAll();
	}
	private: System::Void textBoxSymptoms_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxSymptoms->SelectAll();
	}
	private: System::Void textBoxDateOfBirth_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxDateOfBirth->SelectAll();
	}
	private: System::Void textBoxFirstName_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxFirstName->SelectAll();
	}
	private: System::Void textBoxLastName_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxLastName->SelectAll();
	}

	};
}
