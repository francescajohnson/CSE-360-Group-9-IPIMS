#include "LoggingIn.h"

namespace IPIMS_Group_9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButtonResearchStaff;
	private: System::Windows::Forms::RadioButton^  radioButtonLabStaff;
	private: System::Windows::Forms::RadioButton^  radioButtonOfficeStaff;
	private: System::Windows::Forms::RadioButton^  radioButtonNurse;
	private: System::Windows::Forms::RadioButton^  radioButtonDoctor;
	private: System::Windows::Forms::RadioButton^  radioButtonPatient;
	private: System::Windows::Forms::GroupBox^  groupBoxPersonalInformation;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::Label^  labelIdNumber;
	private: System::Windows::Forms::TextBox^  textBoxIdNumber;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxGender;
	private: System::Windows::Forms::Label^  labelGender;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::GroupBox^  groupBoxAddressInformation;
	private: System::Windows::Forms::TextBox^  textBoxCity;
	private: System::Windows::Forms::Label^  labelCity;
	private: System::Windows::Forms::TextBox^  textBoxStreetAddress;
	private: System::Windows::Forms::Label^  labelStreetAddress;
	private: System::Windows::Forms::TextBox^  textBoxZipCode;
	private: System::Windows::Forms::Label^  labelZipCode;
	private: System::Windows::Forms::TextBox^  textBoxState;
	private: System::Windows::Forms::Label^  labelState;
	private: System::Windows::Forms::GroupBox^  groupBoxContactInformation;
	private: System::Windows::Forms::TextBox^  textBoxEmailAddress;
	private: System::Windows::Forms::Label^  labelEmailAddress;
	private: System::Windows::Forms::TextBox^  textBoxPhoneNumber;
	private: System::Windows::Forms::Label^  labelPhoneNumber;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::TextBox^  textBoxUsername;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::Button^  buttonRegister;
	private: System::Windows::Forms::GroupBox^  groupBoxMedicalInformation;
	private: System::Windows::Forms::TextBox^  textBoxMedicalHistory;
	private: System::Windows::Forms::Label^  labelMedicalHistory;
	private: System::Windows::Forms::TextBox^  textBoxHealthInsuranceNumber;
	private: System::Windows::Forms::Label^  labelHealthInsuranceNumber;
	private: System::Windows::Forms::TextBox^  textBoxHealthInsurance;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelRegistration;
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
			this->radioButtonResearchStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLabStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOfficeStaff = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNurse = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDoctor = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPatient = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxPersonalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelIdNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxIdNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGender = (gcnew System::Windows::Forms::TextBox());
			this->labelGender = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->groupBoxAddressInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxZipCode = (gcnew System::Windows::Forms::TextBox());
			this->labelZipCode = (gcnew System::Windows::Forms::Label());
			this->textBoxState = (gcnew System::Windows::Forms::TextBox());
			this->labelState = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxStreetAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelStreetAddress = (gcnew System::Windows::Forms::Label());
			this->groupBoxContactInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEmailAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelEmailAddress = (gcnew System::Windows::Forms::Label());
			this->textBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->groupBoxMedicalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMedicalHistory = (gcnew System::Windows::Forms::TextBox());
			this->labelMedicalHistory = (gcnew System::Windows::Forms::Label());
			this->textBoxHealthInsuranceNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelHealthInsuranceNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxHealthInsurance = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelRegistration = (gcnew System::Windows::Forms::Label());
<<<<<<< HEAD
=======
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->patientServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatePatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAppointmentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ePrescriptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchRecordsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
>>>>>>> origin/master
			this->groupBox1->SuspendLayout();
			this->groupBoxPersonalInformation->SuspendLayout();
			this->groupBoxAddressInformation->SuspendLayout();
			this->groupBoxContactInformation->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxMedicalInformation->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonResearchStaff);
			this->groupBox1->Controls->Add(this->radioButtonLabStaff);
			this->groupBox1->Controls->Add(this->radioButtonOfficeStaff);
			this->groupBox1->Controls->Add(this->radioButtonNurse);
			this->groupBox1->Controls->Add(this->radioButtonDoctor);
			this->groupBox1->Controls->Add(this->radioButtonPatient);
			this->groupBox1->Location = System::Drawing::Point(17, 85);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(752, 49);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please select Your classification below:";
			// 
			// radioButtonResearchStaff
			// 
			this->radioButtonResearchStaff->AutoSize = true;
			this->radioButtonResearchStaff->Location = System::Drawing::Point(616, 25);
			this->radioButtonResearchStaff->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonResearchStaff->Name = L"radioButtonResearchStaff";
			this->radioButtonResearchStaff->Size = System::Drawing::Size(123, 21);
			this->radioButtonResearchStaff->TabIndex = 5;
			this->radioButtonResearchStaff->Text = L"Research Staff";
			this->radioButtonResearchStaff->UseVisualStyleBackColor = true;
			this->radioButtonResearchStaff->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonResearchStaff_CheckedChanged);
			// 
			// radioButtonLabStaff
			// 
			this->radioButtonLabStaff->AutoSize = true;
			this->radioButtonLabStaff->Location = System::Drawing::Point(495, 25);
			this->radioButtonLabStaff->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonLabStaff->Name = L"radioButtonLabStaff";
			this->radioButtonLabStaff->Size = System::Drawing::Size(86, 21);
			this->radioButtonLabStaff->TabIndex = 4;
			this->radioButtonLabStaff->Text = L"Lab Staff";
			this->radioButtonLabStaff->UseVisualStyleBackColor = true;
			this->radioButtonLabStaff->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonLabStaff_CheckedChanged);
			// 
			// radioButtonOfficeStaff
			// 
			this->radioButtonOfficeStaff->AutoSize = true;
			this->radioButtonOfficeStaff->Location = System::Drawing::Point(373, 25);
			this->radioButtonOfficeStaff->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonOfficeStaff->Name = L"radioButtonOfficeStaff";
			this->radioButtonOfficeStaff->Size = System::Drawing::Size(99, 21);
			this->radioButtonOfficeStaff->TabIndex = 3;
			this->radioButtonOfficeStaff->Text = L"Office Staff";
			this->radioButtonOfficeStaff->UseVisualStyleBackColor = true;
			this->radioButtonOfficeStaff->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonOfficeStaff_CheckedChanged);
			// 
			// radioButtonNurse
			// 
			this->radioButtonNurse->AutoSize = true;
			this->radioButtonNurse->Location = System::Drawing::Point(252, 25);
			this->radioButtonNurse->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonNurse->Name = L"radioButtonNurse";
			this->radioButtonNurse->Size = System::Drawing::Size(67, 21);
			this->radioButtonNurse->TabIndex = 2;
			this->radioButtonNurse->Text = L"Nurse";
			this->radioButtonNurse->UseVisualStyleBackColor = true;
			this->radioButtonNurse->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonNurse_CheckedChanged);
			// 
			// radioButtonDoctor
			// 
			this->radioButtonDoctor->AutoSize = true;
			this->radioButtonDoctor->Location = System::Drawing::Point(131, 25);
			this->radioButtonDoctor->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonDoctor->Name = L"radioButtonDoctor";
			this->radioButtonDoctor->Size = System::Drawing::Size(71, 21);
			this->radioButtonDoctor->TabIndex = 1;
			this->radioButtonDoctor->Text = L"Doctor";
			this->radioButtonDoctor->UseVisualStyleBackColor = true;
			this->radioButtonDoctor->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonDoctor_CheckedChanged);
			// 
			// radioButtonPatient
			// 
			this->radioButtonPatient->AutoSize = true;
			this->radioButtonPatient->Location = System::Drawing::Point(9, 25);
			this->radioButtonPatient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButtonPatient->Name = L"radioButtonPatient";
			this->radioButtonPatient->Size = System::Drawing::Size(73, 21);
			this->radioButtonPatient->TabIndex = 0;
			this->radioButtonPatient->Text = L"Patient";
			this->radioButtonPatient->UseVisualStyleBackColor = true;
			this->radioButtonPatient->CheckedChanged += gcnew System::EventHandler(this, &Registration::radioButtonPatient_CheckedChanged);
			// 
			// groupBoxPersonalInformation
			// 
			this->groupBoxPersonalInformation->Controls->Add(this->labelIdNumber);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxIdNumber);
			this->groupBoxPersonalInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxGender);
			this->groupBoxPersonalInformation->Controls->Add(this->labelGender);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPersonalInformation->Location = System::Drawing::Point(17, 143);
			this->groupBoxPersonalInformation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxPersonalInformation->Name = L"groupBoxPersonalInformation";
			this->groupBoxPersonalInformation->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxPersonalInformation->Size = System::Drawing::Size(752, 103);
			this->groupBoxPersonalInformation->TabIndex = 2;
			this->groupBoxPersonalInformation->TabStop = false;
			this->groupBoxPersonalInformation->Text = L"Personal Information:";
			// 
			// labelIdNumber
			// 
			this->labelIdNumber->AutoSize = true;
			this->labelIdNumber->Location = System::Drawing::Point(568, 60);
			this->labelIdNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelIdNumber->Name = L"labelIdNumber";
			this->labelIdNumber->Size = System::Drawing::Size(25, 17);
			this->labelIdNumber->TabIndex = 11;
			this->labelIdNumber->Text = L"ID:";
			// 
			// textBoxIdNumber
			// 
			this->textBoxIdNumber->Location = System::Drawing::Point(604, 57);
			this->textBoxIdNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxIdNumber->Name = L"textBoxIdNumber";
			this->textBoxIdNumber->Size = System::Drawing::Size(95, 22);
			this->textBoxIdNumber->TabIndex = 10;
			this->textBoxIdNumber->Text = L"999-99-9999";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(233, 60);
			this->labelDateOfBirth->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(91, 17);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(333, 57);
			this->textBoxDateOfBirth->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(93, 22);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxGender
			// 
			this->textBoxGender->Location = System::Drawing::Point(97, 57);
			this->textBoxGender->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxGender->Name = L"textBoxGender";
			this->textBoxGender->Size = System::Drawing::Size(108, 22);
			this->textBoxGender->TabIndex = 7;
			this->textBoxGender->Text = L"Male / Female";
			// 
			// labelGender
			// 
			this->labelGender->AutoSize = true;
			this->labelGender->Location = System::Drawing::Point(27, 60);
			this->labelGender->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelGender->Name = L"labelGender";
			this->labelGender->Size = System::Drawing::Size(60, 17);
			this->labelGender->TabIndex = 6;
			this->labelGender->Text = L"Gender:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(468, 21);
			this->textBoxLastName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(272, 22);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(97, 21);
			this->textBoxFirstName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(272, 22);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			this->textBoxFirstName->TextChanged += gcnew System::EventHandler(this, &Registration::textBoxFirstName_TextChanged);
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(379, 25);
			this->labelLastName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(80, 17);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(9, 25);
			this->labelFirstName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(80, 17);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
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
			this->groupBoxAddressInformation->Location = System::Drawing::Point(17, 254);
			this->groupBoxAddressInformation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxAddressInformation->Name = L"groupBoxAddressInformation";
			this->groupBoxAddressInformation->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxAddressInformation->Size = System::Drawing::Size(752, 103);
			this->groupBoxAddressInformation->TabIndex = 12;
			this->groupBoxAddressInformation->TabStop = false;
			this->groupBoxAddressInformation->Text = L"Address Information:";
			// 
			// textBoxZipCode
			// 
			this->textBoxZipCode->Location = System::Drawing::Point(527, 57);
			this->textBoxZipCode->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxZipCode->Name = L"textBoxZipCode";
			this->textBoxZipCode->Size = System::Drawing::Size(108, 22);
			this->textBoxZipCode->TabIndex = 14;
			this->textBoxZipCode->Text = L"54321";
			// 
			// labelZipCode
			// 
			this->labelZipCode->AutoSize = true;
			this->labelZipCode->Location = System::Drawing::Point(448, 60);
			this->labelZipCode->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelZipCode->Name = L"labelZipCode";
			this->labelZipCode->Size = System::Drawing::Size(69, 17);
			this->labelZipCode->TabIndex = 13;
			this->labelZipCode->Text = L"Zip Code:";
			// 
			// textBoxState
			// 
			this->textBoxState->Location = System::Drawing::Point(292, 57);
			this->textBoxState->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxState->Name = L"textBoxState";
			this->textBoxState->Size = System::Drawing::Size(108, 22);
			this->textBoxState->TabIndex = 9;
			this->textBoxState->Text = L"Arizona";
			// 
			// labelState
			// 
			this->labelState->AutoSize = true;
			this->labelState->Location = System::Drawing::Point(248, 60);
			this->labelState->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelState->Name = L"labelState";
			this->labelState->Size = System::Drawing::Size(45, 17);
			this->labelState->TabIndex = 8;
			this->labelState->Text = L"State:";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(123, 57);
			this->textBoxCity->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(108, 22);
			this->textBoxCity->TabIndex = 7;
			this->textBoxCity->Text = L"Tempe";
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(79, 60);
			this->labelCity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(35, 17);
			this->labelCity->TabIndex = 6;
			this->labelCity->Text = L"City:";
			// 
			// textBoxStreetAddress
			// 
			this->textBoxStreetAddress->Location = System::Drawing::Point(123, 21);
			this->textBoxStreetAddress->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxStreetAddress->Name = L"textBoxStreetAddress";
			this->textBoxStreetAddress->Size = System::Drawing::Size(617, 22);
			this->textBoxStreetAddress->TabIndex = 4;
			this->textBoxStreetAddress->Text = L"1234 West Main Street";
			// 
			// labelStreetAddress
			// 
			this->labelStreetAddress->AutoSize = true;
			this->labelStreetAddress->Location = System::Drawing::Point(9, 25);
			this->labelStreetAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelStreetAddress->Name = L"labelStreetAddress";
			this->labelStreetAddress->Size = System::Drawing::Size(106, 17);
			this->labelStreetAddress->TabIndex = 0;
			this->labelStreetAddress->Text = L"Street Address:";
			// 
			// groupBoxContactInformation
			// 
			this->groupBoxContactInformation->Controls->Add(this->textBoxEmailAddress);
			this->groupBoxContactInformation->Controls->Add(this->labelEmailAddress);
			this->groupBoxContactInformation->Controls->Add(this->textBoxPhoneNumber);
			this->groupBoxContactInformation->Controls->Add(this->labelPhoneNumber);
			this->groupBoxContactInformation->Location = System::Drawing::Point(17, 364);
			this->groupBoxContactInformation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxContactInformation->Name = L"groupBoxContactInformation";
			this->groupBoxContactInformation->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxContactInformation->Size = System::Drawing::Size(371, 103);
			this->groupBoxContactInformation->TabIndex = 15;
			this->groupBoxContactInformation->TabStop = false;
			this->groupBoxContactInformation->Text = L"Contact Information:";
			// 
			// textBoxEmailAddress
			// 
			this->textBoxEmailAddress->Location = System::Drawing::Point(123, 57);
			this->textBoxEmailAddress->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxEmailAddress->Name = L"textBoxEmailAddress";
			this->textBoxEmailAddress->Size = System::Drawing::Size(224, 22);
			this->textBoxEmailAddress->TabIndex = 7;
			this->textBoxEmailAddress->Text = L"Tempe";
			// 
			// labelEmailAddress
			// 
			this->labelEmailAddress->AutoSize = true;
			this->labelEmailAddress->Location = System::Drawing::Point(16, 60);
			this->labelEmailAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelEmailAddress->Name = L"labelEmailAddress";
			this->labelEmailAddress->Size = System::Drawing::Size(102, 17);
			this->labelEmailAddress->TabIndex = 6;
			this->labelEmailAddress->Text = L"Email Address:";
			// 
			// textBoxPhoneNumber
			// 
			this->textBoxPhoneNumber->Location = System::Drawing::Point(123, 21);
			this->textBoxPhoneNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPhoneNumber->Name = L"textBoxPhoneNumber";
			this->textBoxPhoneNumber->Size = System::Drawing::Size(108, 22);
			this->textBoxPhoneNumber->TabIndex = 4;
			this->textBoxPhoneNumber->Text = L"623-555-1234";
			// 
			// labelPhoneNumber
			// 
			this->labelPhoneNumber->AutoSize = true;
			this->labelPhoneNumber->Location = System::Drawing::Point(9, 25);
			this->labelPhoneNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPhoneNumber->Name = L"labelPhoneNumber";
			this->labelPhoneNumber->Size = System::Drawing::Size(107, 17);
			this->labelPhoneNumber->TabIndex = 0;
			this->labelPhoneNumber->Text = L"Phone Number:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxPassword);
			this->groupBox2->Controls->Add(this->labelPassword);
			this->groupBox2->Controls->Add(this->textBoxUsername);
			this->groupBox2->Controls->Add(this->labelUsername);
			this->groupBox2->Location = System::Drawing::Point(396, 364);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(371, 103);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login Information:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(95, 57);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(267, 22);
			this->textBoxPassword->TabIndex = 7;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(12, 60);
			this->labelPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(73, 17);
			this->labelPassword->TabIndex = 6;
			this->labelPassword->Text = L"Password:";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Location = System::Drawing::Point(95, 21);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(267, 22);
			this->textBoxUsername->TabIndex = 4;
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(9, 25);
			this->labelUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(77, 17);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"Username:";
			// 
			// buttonRegister
			// 
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegister->Location = System::Drawing::Point(599, 517);
			this->buttonRegister->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(163, 43);
			this->buttonRegister->TabIndex = 17;
			this->buttonRegister->Text = L"Register";
			this->buttonRegister->UseVisualStyleBackColor = true;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &Registration::buttonRegister_Click);
			// 
			// groupBoxMedicalInformation
			// 
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxMedicalHistory);
			this->groupBoxMedicalInformation->Controls->Add(this->labelMedicalHistory);
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxHealthInsuranceNumber);
			this->groupBoxMedicalInformation->Controls->Add(this->labelHealthInsuranceNumber);
			this->groupBoxMedicalInformation->Controls->Add(this->textBoxHealthInsurance);
			this->groupBoxMedicalInformation->Controls->Add(this->label2);
			this->groupBoxMedicalInformation->Location = System::Drawing::Point(16, 475);
			this->groupBoxMedicalInformation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxMedicalInformation->Name = L"groupBoxMedicalInformation";
			this->groupBoxMedicalInformation->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxMedicalInformation->Size = System::Drawing::Size(545, 127);
			this->groupBoxMedicalInformation->TabIndex = 16;
			this->groupBoxMedicalInformation->TabStop = false;
			this->groupBoxMedicalInformation->Text = L"Medical Information:";
			this->groupBoxMedicalInformation->Visible = false;
			// 
			// textBoxMedicalHistory
			// 
			this->textBoxMedicalHistory->Location = System::Drawing::Point(139, 87);
			this->textBoxMedicalHistory->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxMedicalHistory->Name = L"textBoxMedicalHistory";
			this->textBoxMedicalHistory->Size = System::Drawing::Size(397, 22);
			this->textBoxMedicalHistory->TabIndex = 8;
			// 
			// labelMedicalHistory
			// 
			this->labelMedicalHistory->AutoSize = true;
			this->labelMedicalHistory->Location = System::Drawing::Point(21, 91);
			this->labelMedicalHistory->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMedicalHistory->Name = L"labelMedicalHistory";
			this->labelMedicalHistory->Size = System::Drawing::Size(108, 17);
			this->labelMedicalHistory->TabIndex = 7;
			this->labelMedicalHistory->Text = L"Medical History:";
			// 
			// textBoxHealthInsuranceNumber
			// 
			this->textBoxHealthInsuranceNumber->Location = System::Drawing::Point(139, 53);
			this->textBoxHealthInsuranceNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxHealthInsuranceNumber->Name = L"textBoxHealthInsuranceNumber";
			this->textBoxHealthInsuranceNumber->Size = System::Drawing::Size(209, 22);
			this->textBoxHealthInsuranceNumber->TabIndex = 6;
			this->textBoxHealthInsuranceNumber->Text = L"Insurance Phone Number";
			// 
			// labelHealthInsuranceNumber
			// 
			this->labelHealthInsuranceNumber->AutoSize = true;
			this->labelHealthInsuranceNumber->Location = System::Drawing::Point(68, 57);
			this->labelHealthInsuranceNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHealthInsuranceNumber->Name = L"labelHealthInsuranceNumber";
			this->labelHealthInsuranceNumber->Size = System::Drawing::Size(60, 17);
			this->labelHealthInsuranceNumber->TabIndex = 5;
			this->labelHealthInsuranceNumber->Text = L"Contact:";
			// 
			// textBoxHealthInsurance
			// 
			this->textBoxHealthInsurance->Location = System::Drawing::Point(139, 21);
			this->textBoxHealthInsurance->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxHealthInsurance->Name = L"textBoxHealthInsurance";
			this->textBoxHealthInsurance->Size = System::Drawing::Size(209, 22);
			this->textBoxHealthInsurance->TabIndex = 4;
			this->textBoxHealthInsurance->Text = L"Insurance Provider";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Health Insurance:";
			// 
			// labelRegistration
			// 
			this->labelRegistration->AutoSize = true;
			this->labelRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRegistration->Location = System::Drawing::Point(16, 37);
			this->labelRegistration->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRegistration->Name = L"labelRegistration";
			this->labelRegistration->Size = System::Drawing::Size(217, 42);
			this->labelRegistration->TabIndex = 0;
			this->labelRegistration->Text = L"Registration";
			// 
<<<<<<< HEAD
=======
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->patientServicesToolStripMenuItem,
					this->reportsToolStripMenuItem, this->toolsToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip->Size = System::Drawing::Size(792, 28);
			this->menuStrip->TabIndex = 20;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// patientServicesToolStripMenuItem
			// 
			this->patientServicesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->searchForPatientToolStripMenuItem,
					this->updatePatientToolStripMenuItem, this->viewAppointmentsToolStripMenuItem, this->ePrescriptionToolStripMenuItem
			});
			this->patientServicesToolStripMenuItem->Name = L"patientServicesToolStripMenuItem";
			this->patientServicesToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->patientServicesToolStripMenuItem->Text = L"Patient Services";
			// 
			// searchForPatientToolStripMenuItem
			// 
			this->searchForPatientToolStripMenuItem->Name = L"searchForPatientToolStripMenuItem";
			this->searchForPatientToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->searchForPatientToolStripMenuItem->Text = L"Search for Patient";
			// 
			// updatePatientToolStripMenuItem
			// 
			this->updatePatientToolStripMenuItem->Name = L"updatePatientToolStripMenuItem";
			this->updatePatientToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->updatePatientToolStripMenuItem->Text = L"Update Patient";
			// 
			// viewAppointmentsToolStripMenuItem
			// 
			this->viewAppointmentsToolStripMenuItem->Name = L"viewAppointmentsToolStripMenuItem";
			this->viewAppointmentsToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->viewAppointmentsToolStripMenuItem->Text = L"View Appointments";
			// 
			// ePrescriptionToolStripMenuItem
			// 
			this->ePrescriptionToolStripMenuItem->Name = L"ePrescriptionToolStripMenuItem";
			this->ePrescriptionToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->ePrescriptionToolStripMenuItem->Text = L"E-Prescription";
			// 
			// reportsToolStripMenuItem
			// 
			this->reportsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->searchRecordsToolStripMenuItem });
			this->reportsToolStripMenuItem->Name = L"reportsToolStripMenuItem";
			this->reportsToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->reportsToolStripMenuItem->Text = L"Records";
			// 
			// searchRecordsToolStripMenuItem
			// 
			this->searchRecordsToolStripMenuItem->Name = L"searchRecordsToolStripMenuItem";
			this->searchRecordsToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->searchRecordsToolStripMenuItem->Text = L"Search Records";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editProfileInformationToolStripMenuItem });
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// editProfileInformationToolStripMenuItem
			// 
			this->editProfileInformationToolStripMenuItem->Name = L"editProfileInformationToolStripMenuItem";
			this->editProfileInformationToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->editProfileInformationToolStripMenuItem->Text = L"Edit Profile Information";
			// 
>>>>>>> origin/master
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(594, 502);
=======
			this->ClientSize = System::Drawing::Size(792, 618);
			this->Controls->Add(this->menuStrip);
>>>>>>> origin/master
			this->Controls->Add(this->groupBoxMedicalInformation);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBoxContactInformation);
			this->Controls->Add(this->groupBoxAddressInformation);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->labelRegistration);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->groupBoxAddressInformation->ResumeLayout(false);
			this->groupBoxAddressInformation->PerformLayout();
			this->groupBoxContactInformation->ResumeLayout(false);
			this->groupBoxContactInformation->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBoxMedicalInformation->ResumeLayout(false);
			this->groupBoxMedicalInformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButtonPatient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "Social Security Number:";
		labelIdNumber->Location = System::Drawing::Point(327, 49);
		groupBoxMedicalInformation->Visible = true;
	}


	private: System::Void radioButtonDoctor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "ID:";
		labelIdNumber->Location = System::Drawing::Point(426, 49);
		groupBoxMedicalInformation->Visible = false;
	}
	private: System::Void radioButtonNurse_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "ID:";
		labelIdNumber->Location = System::Drawing::Point(426, 49);
		groupBoxMedicalInformation->Visible = false;
	}
	private: System::Void radioButtonOfficeStaff_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "ID:";
		labelIdNumber->Location = System::Drawing::Point(426, 49);
		groupBoxMedicalInformation->Visible = false;
	}
	private: System::Void radioButtonLabStaff_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "ID:";
		labelIdNumber->Location = System::Drawing::Point(426, 49);
		groupBoxMedicalInformation->Visible = false;
	}
	private: System::Void radioButtonResearchStaff_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		labelIdNumber->Text = "ID:";
		labelIdNumber->Location = System::Drawing::Point(426, 49);
		groupBoxMedicalInformation->Visible = false;
	}
	private: System::Void buttonRegister_Click(System::Object^  sender, System::EventArgs^  e) {
		// Add code here for when the register button is pressed
		this->Close();
		IPIMS_Group_9::LoggingIn^ formLoggingIn = gcnew LoggingIn(); 
		formLoggingIn->ShowDialog();
		this->Show();
		/*
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Group9IPIMS";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from database.edata;", conDataBase);
		MySqlDataReader^ myReader;
		try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		}
		catch (Exception^ ex){
		MessageBox::Show(ex->Message);
		}
		*/


	}
	private: System::Void textBoxFirstName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};

}
