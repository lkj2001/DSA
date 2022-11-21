#include "CommonHead.h"
#include "Functions.h"
#include "LecturerName.h"

void setConsultationSlot(int teachId)
{
	//need more validation with current date (ex: able to set for the next 3 days only), currently one can set whenever
	int tempMonth, tempDay, tempHour;
	ConsultationSlot* newSlot = new ConsultationSlot;
	do {
		cout << "Input month : ";
		cin >> tempMonth;
		if (tempMonth < 1 || tempMonth > 12)
		{
			cout << "Invalid month. Please re-enter\n";
		}
	} while (tempMonth < 1 || tempMonth > 12);

	//need more validation as now we can input date like 31/2 which is never xdd
	do {
		cout << "Input day : ";
		cin >> tempDay;
		if (tempDay < 1 || tempDay > 31)
			cout << "Invalid day. Please re-enter\n";
	} while (tempDay < 1 || tempDay > 31);

	//allows from 08:00 to 18:00
	do {
		cout << "Input hour : ";
		cin >> tempHour;
		if (tempHour < 8 || tempHour > 18)
			cout << "Invalid hour. Please re-enter\n";
	} while (tempHour < 8 || tempHour > 18);

	newSlot->day = tempDay;
	newSlot->month = tempMonth;
	newSlot->hour = tempHour;
	newSlot->studentName = "No current student";

	cout << "\nSelected date are " << newSlot->day << "/" << newSlot->month << "\t" << newSlot->hour << ":00" << "\n\n";
	//using push system for now, later probably change to sort by date and hour and stuff
	newSlot->next = sccm[teachId].consultationSlot;
	sccm[teachId].consultationSlot = newSlot;
}

void showConsultationSlot(int teachId)
{
	Teacher temp = sccm[teachId];
	cout << sccm[teachId].name << "\tAvailablle slots are \n\n";
	while (sccm[teachId].consultationSlot != NULL) {
		cout << sccm[teachId].consultationSlot->day << "/" << sccm[teachId].consultationSlot->month << "\t" << sccm[teachId].consultationSlot->hour << ":00" << endl;
		sccm[teachId].consultationSlot = sccm[teachId].consultationSlot->next;
	}
	sccm[teachId] = temp;
}

//int main()
//{
//	//for testing purpose, there are no teacherid yet, so use the array index to determine what teacher's u want to show and to add slots
//	setConsultationSlot(0);
//	setConsultationSlot(0);
//	showConsultationSlot(0);
//	setConsultationSlot(1);
//	showConsultationSlot(0);
//	showConsultationSlot(1);
//
//	
//
//}