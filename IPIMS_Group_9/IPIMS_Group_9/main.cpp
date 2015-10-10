#include "ScheduleAppointment.h"
#include "Registration.h"
#include "UpdateHealthcare.h"
#include "LoggingIn.h"
#include "PatientSearch.h"
#include "EditProfile.h"
#include "EmergencyAlert.h"
#include "Welcome.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPIMSGroup9::Registration formRegistration;
	Application::Run(%formRegistration);

	IPIMSGroup9::LoggingIn formLoggingIn;
	Application::Run(%formLoggingIn);

	IPIMS_Group_9::Welcome formWelcome;
	Application::Run(%formWelcome);

	IPIMS_Group_9::PatientSearch formPatientSearch;
	Application::Run(%formPatientSearch);

	IPIMS_Group_9::EditProfile formEditProfile;
	Application::Run(%formEditProfile);

	IPIMS_Group_9::EmergencyAlert formEmergencyAlert;
	Application::Run(%formEmergencyAlert);

}

