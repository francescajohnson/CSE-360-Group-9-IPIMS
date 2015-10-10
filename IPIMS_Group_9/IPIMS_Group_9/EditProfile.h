#pragma once

namespace IPIMS_Group_9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditProfile
	/// </summary>
	public ref class EditProfile : public System::Windows::Forms::Form
	{
	public:
		EditProfile(void)
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
		~EditProfile()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  labelEmailAddress;
	private: System::Windows::Forms::TextBox^  textBoxPhoneNumber;
	private: System::Windows::Forms::Label^  labelPhoneNumber;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  labelConfirmPassword;
	private: System::Windows::Forms::TextBox^  textBoxPasswordInitial;
	private: System::Windows::Forms::GroupBox^  groupBoxMedicalInformation;
	private: System::Windows::Forms::TextBox^  textBoxMedicalHistory;
	private: System::Windows::Forms::Label^  labelMedicalHistory;
	private: System::Windows::Forms::TextBox^  textBoxHealthInsuranceNumber;
	private: System::Windows::Forms::Label^  labelHealthInsuranceNumber;
	private: System::Windows::Forms::TextBox^  textBoxHealthInsurance;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonEditProfile;
	private: System::Windows::Forms::TextBox^  textBoxEmailAddress;
	private: System::Windows::Forms::GroupBox^  groupBoxContactInformation;
	private: System::Windows::Forms::Label^  labelEditProfile;
	private: System::Windows::Forms::GroupBox^  groupBoxAddressInformation;
	private: System::Windows::Forms::TextBox^  textBoxZipCode;
	private: System::Windows::Forms::Label^  labelZipCode;
	private: System::Windows::Forms::TextBox^  textBoxState;
	private: System::Windows::Forms::Label^  labelState;
	private: System::Windows::Forms::TextBox^  textBoxCity;
	private: System::Windows::Forms::Label^  labelCity;
	private: System::Windows::Forms::TextBox^  textBoxStreetAddress;
	private: System::Windows::Forms::Label^  labelStreetAddress;
	private: System::Windows::Forms::Label^  labelPassword;
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
			this->labelEmailAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxPasswordInitial = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxMedicalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMedicalHistory = (gcnew System::Windows::Forms::TextBox());
			this->labelMedicalHistory = (gcnew System::Windows::Forms::Label());
			this->textBoxHealthInsuranceNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelHealthInsuranceNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxHealthInsurance = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEditProfile = (gcnew System::Windows::Forms::Button());
			this->textBoxEmailAddress = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxContactInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelEditProfile = (gcnew System::Windows::Forms::Label());
			this->groupBoxAddressInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxZipCode = (gcnew System::Windows::Forms::TextBox());
			this->labelZipCode = (gcnew System::Windows::Forms::Label());
			this->textBoxState = (gcnew System::Windows::Forms::TextBox());
			this->labelState = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxStreetAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelStreetAddress = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBoxMedicalInformation->SuspendLayout();
			this->groupBoxContactInformation->SuspendLayout();
			this->groupBoxAddressInformation->SuspendLayout();
			this->SuspendLayout();
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelPassword);
			this->groupBox2->Controls->Add(this->textBoxPassword);
			this->groupBox2->Controls->Add(this->labelConfirmPassword);
			this->groupBox2->Controls->Add(this->textBoxPasswordInitial);
			this->groupBox2->Location = System::Drawing::Point(12, 76);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(278, 84);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login Information:";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(6, 20);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(96, 13);
			this->labelPassword->TabIndex = 8;
			this->labelPassword->Text = L"Change Password:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(103, 46);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(169, 20);
			this->textBoxPassword->TabIndex = 7;
			this->textBoxPassword->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditProfile::textBoxPassword_Validating);
			// 
			// labelConfirmPassword
			// 
			this->labelConfirmPassword->AutoSize = true;
			this->labelConfirmPassword->Location = System::Drawing::Point(9, 49);
			this->labelConfirmPassword->Name = L"labelConfirmPassword";
			this->labelConfirmPassword->Size = System::Drawing::Size(94, 13);
			this->labelConfirmPassword->TabIndex = 6;
			this->labelConfirmPassword->Text = L"Confirm Password:";
			// 
			// textBoxPasswordInitial
			// 
			this->textBoxPasswordInitial->Location = System::Drawing::Point(103, 17);
			this->textBoxPasswordInitial->Name = L"textBoxPasswordInitial";
			this->textBoxPasswordInitial->Size = System::Drawing::Size(169, 20);
			this->textBoxPasswordInitial->TabIndex = 4;
			// 
			// groupBoxMedicalInformation
			// 
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxMedicalHistory);
			this->groupBoxMedicalInformation->Controls->Add(this->labelMedicalHistory);
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxHealthInsuranceNumber);
			this->groupBoxMedicalInformation->Controls->Add(this->labelHealthInsuranceNumber);
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxHealthInsurance);
			this->groupBoxMedicalInformation->Controls->Add(this->label2);
			this->groupBoxMedicalInformation->Location = System::Drawing::Point(12, 346);
			this->groupBoxMedicalInformation->Name = L"groupBoxMedicalInformation";
			this->groupBoxMedicalInformation->Size = System::Drawing::Size(409, 103);
			this->groupBoxMedicalInformation->TabIndex = 27;
			this->groupBoxMedicalInformation->TabStop = false;
			this->groupBoxMedicalInformation->Text = L"Medical Information:";
			this->groupBoxMedicalInformation->Visible = false;
			this->groupBoxMedicalInformation->VisibleChanged += gcnew System::EventHandler(this, &EditProfile::groupBoxMedicalInformation_VisibleChanged);
			// 
			// textBoxMedicalHistory
			// 
			this->textBoxMedicalHistory->Location = System::Drawing::Point(104, 71);
			this->textBoxMedicalHistory->Name = L"textBoxMedicalHistory";
			this->textBoxMedicalHistory->Size = System::Drawing::Size(299, 20);
			this->textBoxMedicalHistory->TabIndex = 8;
			// 
			// labelMedicalHistory
			// 
			this->labelMedicalHistory->AutoSize = true;
			this->labelMedicalHistory->Location = System::Drawing::Point(16, 74);
			this->labelMedicalHistory->Name = L"labelMedicalHistory";
			this->labelMedicalHistory->Size = System::Drawing::Size(82, 13);
			this->labelMedicalHistory->TabIndex = 7;
			this->labelMedicalHistory->Text = L"Medical History:";
			// 
			// textBoxHealthInsuranceNumber
			// 
			this->textBoxHealthInsuranceNumber->Location = System::Drawing::Point(104, 43);
			this->textBoxHealthInsuranceNumber->Name = L"textBoxHealthInsuranceNumber";
			this->textBoxHealthInsuranceNumber->Size = System::Drawing::Size(158, 20);
			this->textBoxHealthInsuranceNumber->TabIndex = 6;
			this->textBoxHealthInsuranceNumber->Text = L"Insurance Phone Number";
			// 
			// labelHealthInsuranceNumber
			// 
			this->labelHealthInsuranceNumber->AutoSize = true;
			this->labelHealthInsuranceNumber->Location = System::Drawing::Point(51, 46);
			this->labelHealthInsuranceNumber->Name = L"labelHealthInsuranceNumber";
			this->labelHealthInsuranceNumber->Size = System::Drawing::Size(47, 13);
			this->labelHealthInsuranceNumber->TabIndex = 5;
			this->labelHealthInsuranceNumber->Text = L"Contact:";
			// 
			// textBoxHealthInsurance
			// 
			this->textBoxHealthInsurance->Location = System::Drawing::Point(104, 17);
			this->textBoxHealthInsurance->Name = L"textBoxHealthInsurance";
			this->textBoxHealthInsurance->Size = System::Drawing::Size(158, 20);
			this->textBoxHealthInsurance->TabIndex = 4;
			this->textBoxHealthInsurance->Text = L"Insurance Provider";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Health Insurance:";
			// 
			// buttonEditProfile
			// 
			this->buttonEditProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEditProfile->Location = System::Drawing::Point(460, 455);
			this->buttonEditProfile->Name = L"buttonEditProfile";
			this->buttonEditProfile->Size = System::Drawing::Size(122, 35);
			this->buttonEditProfile->TabIndex = 28;
			this->buttonEditProfile->Text = L"Edit Profile";
			this->buttonEditProfile->UseVisualStyleBackColor = true;
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
			this->groupBoxContactInformation->Location = System::Drawing::Point(12, 256);
			this->groupBoxContactInformation->Name = L"groupBoxContactInformation";
			this->groupBoxContactInformation->Size = System::Drawing::Size(278, 84);
			this->groupBoxContactInformation->TabIndex = 25;
			this->groupBoxContactInformation->TabStop = false;
			this->groupBoxContactInformation->Text = L"Contact Information:";
			// 
			// labelEditProfile
			// 
			this->labelEditProfile->AutoSize = true;
			this->labelEditProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEditProfile->Location = System::Drawing::Point(12, 37);
			this->labelEditProfile->Name = L"labelEditProfile";
			this->labelEditProfile->Size = System::Drawing::Size(160, 36);
			this->labelEditProfile->TabIndex = 21;
			this->labelEditProfile->Text = L"Edit Profile";
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
			this->groupBoxAddressInformation->Location = System::Drawing::Point(12, 166);
			this->groupBoxAddressInformation->Name = L"groupBoxAddressInformation";
			this->groupBoxAddressInformation->Size = System::Drawing::Size(564, 84);
			this->groupBoxAddressInformation->TabIndex = 24;
			this->groupBoxAddressInformation->TabStop = false;
			this->groupBoxAddressInformation->Text = L"Address Information:";
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
			// labelStreetAddress
			// 
			this->labelStreetAddress->AutoSize = true;
			this->labelStreetAddress->Location = System::Drawing::Point(7, 20);
			this->labelStreetAddress->Name = L"labelStreetAddress";
			this->labelStreetAddress->Size = System::Drawing::Size(79, 13);
			this->labelStreetAddress->TabIndex = 0;
			this->labelStreetAddress->Text = L"Street Address:";
			// 
			// EditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBoxMedicalInformation);
			this->Controls->Add(this->buttonEditProfile);
			this->Controls->Add(this->groupBoxContactInformation);
			this->Controls->Add(this->labelEditProfile);
			this->Controls->Add(this->groupBoxAddressInformation);
			this->Name = L"EditProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBoxMedicalInformation->ResumeLayout(false);
			this->groupBoxMedicalInformation->PerformLayout();
			this->groupBoxContactInformation->ResumeLayout(false);
			this->groupBoxContactInformation->PerformLayout();
			this->groupBoxAddressInformation->ResumeLayout(false);
			this->groupBoxAddressInformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBoxPassword_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		// add error messages to finish this validating function
		/*
		This is only part of the code..  look at the following link
		// http://stackoverflow.com/questions/15950227/how-can-i-utilize-validating-validated-event-in-button-class
		*/
		textBoxPassword->Text = textBoxPasswordInitial->Text;
	}
	private: System::Void groupBoxMedicalInformation_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {

		// add function to display only if the user is a patient

	}

	};
}
