#include <iostream>

using namespace std;

struct Consultationslot;
//lecturer structure
struct Teacher
{
	string name;
	Consultationslot* consultationslot;
};

struct Consultationslot
{
	int day, month, hour;
	string studentname;
	Consultationslot* next;
};

//currently hardcoded and only works for 5 teachers
Teacher sccm[5] = { {"bridget", NULL}, {"ken yap", NULL}, {"ze ren", NULL}, {"chan yt", NULL}, {"johann", NULL} };

void setconsultationslot(int teachid)
{
	//need more validation with current date (ex: able to set for the next 3 days only), currently one can set whenever
	int tempmonth, tempday, temphour;
	Consultationslot* newslot = new Consultationslot;
	do {
		cout << "input month : ";
		cin >> tempmonth;
		if (tempmonth < 1 || tempmonth > 12)
		{
			cout << "invalid month. please re-enter\n";
		}
	} while (tempmonth < 1 || tempmonth > 12);

	//need more validation as now we can input date like 31/2 which is never xdd
	do {
		cout << "input day : ";
		cin >> tempday;
		if (tempday < 1 || tempday > 31)
			cout << "invalid day. please re-enter\n";
	} while (tempday < 1 || tempday > 31);

	//allows from 08:00 to 18:00
	do {
		cout << "input hour : ";
		cin >> temphour;
		if (temphour < 8 || temphour > 18)
			cout << "invalid hour. please re-enter\n";
	} while (temphour < 8 || temphour > 18);

	newslot->day = tempday;
	newslot->month = tempmonth;
	newslot->hour = temphour;
	newslot->studentname = "no current student";

	cout << "\nselected date are " << newslot->day << "/" << newslot->month << "\t" << newslot->hour << ":00" << "\n\n";
	//using push system for now, later probably change to sort by date and hour and stuff
	newslot->next = sccm[teachid].consultationslot;
	sccm[teachid].consultationslot = newslot;
}

void showconsultationslot(int teachid)
{
	Teacher temp = sccm[teachid];
	cout << sccm[teachid].name << "\tavailablle slots are \n\n";
	while (sccm[teachid].consultationslot != NULL) {
		cout << sccm[teachid].consultationslot->day << "/" << sccm[teachid].consultationslot->month << "\t" << sccm[teachid].consultationslot->hour << ":00" << endl;
		sccm[teachid].consultationslot = sccm[teachid].consultationslot->next;
	}
	sccm[teachid] = temp;
}

int main()
{
	//for testing purpose, there are no teacherid yet, so use the array index to determine what teacher's u want to show and to add slots
	setconsultationslot(0);
	setconsultationslot(0);
	showconsultationslot(0);
	setconsultationslot(1);
	showconsultationslot(0);
	showconsultationslot(1);

}