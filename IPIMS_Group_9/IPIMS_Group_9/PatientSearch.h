#pragma once

namespace IPIMS_Group_9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientSearch
	/// </summary>
	public ref class PatientSearch : public System::Windows::Forms::Form
	{
	public:
		PatientSearch(void)
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
		~PatientSearch()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::Label^  labelPatientSearch;














	private: System::Windows::Forms::Button^  buttonSearch;
	private: System::Windows::Forms::GroupBox^  groupBoxPatientInformation;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::TextBox^  textBoxZipCode;
	private: System::Windows::Forms::Label^  labelZipCode;
	private: System::Windows::Forms::TextBox^  textBoxState;
	private: System::Windows::Forms::Label^  labelState;
	private: System::Windows::Forms::TextBox^  textBoxCity;
	private: System::Windows::Forms::Label^  labelCity;
	private: System::Windows::Forms::TextBox^  textBoxStreetAddress;
	private: System::Windows::Forms::TextBox^  textBoxPhoneNumber;
	private: System::Windows::Forms::Label^  labelPhoneNumber;
	private: System::Windows::Forms::Label^  labelStreetAddress;
	private: System::Windows::Forms::TextBox^  textBoxEmailAddress;
	private: System::Windows::Forms::GroupBox^  groupBoxContactInformation;
	private: System::Windows::Forms::Label^  labelEmailAddress;
	private: System::Windows::Forms::GroupBox^  groupBoxAddressInformation;


























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
			this->labelPatientSearch = (gcnew System::Windows::Forms::Label());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->groupBoxPatientInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->textBoxZipCode = (gcnew System::Windows::Forms::TextBox());
			this->labelZipCode = (gcnew System::Windows::Forms::Label());
			this->textBoxState = (gcnew System::Windows::Forms::TextBox());
			this->labelState = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxStreetAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->labelStreetAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxEmailAddress = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxContactInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelEmailAddress = (gcnew System::Windows::Forms::Label());
			this->groupBoxAddressInformation = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxPatientInformation->SuspendLayout();
			this->groupBoxContactInformation->SuspendLayout();
			this->groupBoxAddressInformation->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelPatientSearch
			// 
			this->labelPatientSearch->AutoSize = true;
			this->labelPatientSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPatientSearch->Location = System::Drawing::Point(12, 37);
			this->labelPatientSearch->Name = L"labelPatientSearch";
			this->labelPatientSearch->Size = System::Drawing::Size(252, 36);
			this->labelPatientSearch->TabIndex = 23;
			this->labelPatientSearch->Text = L"Search for Patient";
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->Location = System::Drawing::Point(442, 455);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(140, 35);
			this->buttonSearch->TabIndex = 30;
			this->buttonSearch->Text = L"Initiate Search";
			this->buttonSearch->UseVisualStyleBackColor = true;
			// 
			// groupBoxPatientInformation
			// 
			this->groupBoxPatientInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPatientInformation->Controls->Add(this->labelLastName);
			this->groupBoxPatientInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPatientInformation->Location = System::Drawing::Point(12, 76);
			this->groupBoxPatientInformation->Name = L"groupBoxPatientInformation";
			this->groupBoxPatientInformation->Size = System::Drawing::Size(564, 78);
			this->groupBoxPatientInformation->TabIndex = 25;
			this->groupBoxPatientInformation->TabStop = false;
			this->groupBoxPatientInformation->Text = L"Patient Information:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(132, 46);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(207, 43);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(351, 17);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(205, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 17);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(205, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(284, 20);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(7, 20);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// textBoxZipCode
			// 
			this->textBoxZipCode->Location = System::Drawing::Point(395, 46);
			this->textBoxZipCode->Name = L"textBoxZipCode";
			this->textBoxZipCode->Size = System::Drawing::Size(82, 20);
			this->textBoxZipCode->TabIndex = 14;
			this->textBoxZipCode->Text = L"54321";
			// 
			// labelZipCode
			// 
			this->labelZipCode->AutoSize = true;
			this->labelZipCode->Location = System::Drawing::Point(336, 49);
			this->labelZipCode->Name = L"labelZipCode";
			this->labelZipCode->Size = System::Drawing::Size(53, 13);
			this->labelZipCode->TabIndex = 13;
			this->labelZipCode->Text = L"Zip Code:";
			// 
			// textBoxState
			// 
			this->textBoxState->Location = System::Drawing::Point(219, 46);
			this->textBoxState->Name = L"textBoxState";
			this->textBoxState->Size = System::Drawing::Size(82, 20);
			this->textBoxState->TabIndex = 9;
			this->textBoxState->Text = L"Arizona";
			// 
			// labelState
			// 
			this->labelState->AutoSize = true;
			this->labelState->Location = System::Drawing::Point(186, 49);
			this->labelState->Name = L"labelState";
			this->labelState->Size = System::Drawing::Size(35, 13);
			this->labelState->TabIndex = 8;
			this->labelState->Text = L"State:";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(92, 46);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(82, 20);
			this->textBoxCity->TabIndex = 7;
			this->textBoxCity->Text = L"Tempe";
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(59, 49);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(27, 13);
			this->labelCity->TabIndex = 6;
			this->labelCity->Text = L"City:";
			// 
			// textBoxStreetAddress
			// 
			this->textBoxStreetAddress->Location = System::Drawing::Point(92, 17);
			this->textBoxStreetAddress->Name = L"textBoxStreetAddress";
			this->textBoxStreetAddress->Size = System::Drawing::Size(464, 20);
			this->textBoxStreetAddress->TabIndex = 4;
			this->textBoxStreetAddress->Text = L"1234 West Main Street";
			// 
			// textBoxPhoneNumber
			// 
			this->textBoxPhoneNumber->Location = System::Drawing::Point(92, 17);
			this->textBoxPhoneNumber->Name = L"textBoxPhoneNumber";
			this->textBoxPhoneNumber->Size = System::Drawing::Size(82, 20);
			this->textBoxPhoneNumber->TabIndex = 4;
			this->textBoxPhoneNumber->Text = L"623-555-1234";
			// 
			// labelPhoneNumber
			// 
			this->labelPhoneNumber->AutoSize = true;
			this->labelPhoneNumber->Location = System::Drawing::Point(7, 20);
			this->labelPhoneNumber->Name = L"labelPhoneNumber";
			this->labelPhoneNumber->Size = System::Drawing::Size(81, 13);
			this->labelPhoneNumber->TabIndex = 0;
			this->labelPhoneNumber->Text = L"Phone Number:";
			// 
			// labelStreetAddress
			// 
			this->labelStreetAddress->AutoSize = true;
			this->labelStreetAddress->Location = System::Drawing::Point(7, 20);
			this->labelStreetAddress->Name = L"labelStreetAddress";
			this->labelStreetAddress->Size = System::Drawing::Size(79, 13);
			this->labelStreetAddress->TabIndex = 0;
			this->labelStreetAddress->Text = L"Street Address:";
			// 
			// textBoxEmailAddress
			// 
			this->textBoxEmailAddress->Location = System::Drawing::Point(92, 46);
			this->textBoxEmailAddress->Name = L"textBoxEmailAddress";
			this->textBoxEmailAddress->Size = System::Drawing::Size(169, 20);
			this->textBoxEmailAddress->TabIndex = 7;
			this->textBoxEmailAddress->Text = L"Tempe";
			// 
			// groupBoxContactInformation
			// 
			this->groupBoxContactInformation->Controls->Add(this->textBoxEmailAddress);
			this->groupBoxContactInformation->Controls->Add(this->labelEmailAddress);
			this->groupBoxContactInformation->Controls->Add(this->textBoxPhoneNumber);
			this->groupBoxContactInformation->Controls->Add(this->labelPhoneNumber);
			this->groupBoxContactInformation->Location = System::Drawing::Point(12, 250);
			this->groupBoxContactInformation->Name = L"groupBoxContactInformation";
			this->groupBoxContactInformation->Size = System::Drawing::Size(278, 84);
			this->groupBoxContactInformation->TabIndex = 27;
			this->groupBoxContactInformation->TabStop = false;
			this->groupBoxContactInformation->Text = L"Contact Information:";
			// 
			// labelEmailAddress
			// 
			this->labelEmailAddress->AutoSize = true;
			this->labelEmailAddress->Location = System::Drawing::Point(12, 49);
			this->labelEmailAddress->Name = L"labelEmailAddress";
			this->labelEmailAddress->Size = System::Drawing::Size(76, 13);
			this->labelEmailAddress->TabIndex = 6;
			this->labelEmailAddress->Text = L"Email Address:";
			// 
			// groupBoxAddressInformation
			// 
			this->groupBoxAddressInformation->Controls->Add(this->textBoxZipCode);
			this->groupBoxAddressInformation->Controls->Add(this->labelZipCode);
			this->groupBoxAddressInformation->Controls->Add(this->textBoxState);
			this->groupBoxAddressInformation->Controls->Add(this->labelState);
			this->groupBoxAddressInformation->Controls->Add(this->textBoxCity);
			this->groupBoxAddressInformation->Controls->Add(this->labelCity);
			this->groupBoxAddressInformation->Controls->Add(this->textBoxStreetAddress);
			this->groupBoxAddressInformation->Controls->Add(this->labelStreetAddress);
			this->groupBoxAddressInformation->Location = System::Drawing::Point(12, 160);
			this->groupBoxAddressInformation->Name = L"groupBoxAddressInformation";
			this->groupBoxAddressInformation->Size = System::Drawing::Size(564, 84);
			this->groupBoxAddressInformation->TabIndex = 26;
			this->groupBoxAddressInformation->TabStop = false;
			this->groupBoxAddressInformation->Text = L"Address Information:";
			// 
			// PatientSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->labelPatientSearch);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->groupBoxPatientInformation);
			this->Controls->Add(this->groupBoxContactInformation);
			this->Controls->Add(this->groupBoxAddressInformation);
			this->Name = L"PatientSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBoxPatientInformation->ResumeLayout(false);
			this->groupBoxPatientInformation->PerformLayout();
			this->groupBoxContactInformation->ResumeLayout(false);
			this->groupBoxContactInformation->PerformLayout();
			this->groupBoxAddressInformation->ResumeLayout(false);
			this->groupBoxAddressInformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
