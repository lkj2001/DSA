#include "CommonHead.h"
#include "Variables.h"


struct ConsultationSlot;
//lecturer structure
struct Teacher
{
	string name;
	ConsultationSlot* consultationSlot;
};

struct ConsultationSlot
{
	int day, month, hour;
	string studentName;
	ConsultationSlot* next;
};

//currently hardcoded and only works for 5 teachers
Teacher sccm[5] = { {"Bridget", NULL}, {"Ken Yap", NULL}, {"Ze Ren", NULL}, {"Chan YT", NULL}, {"Johann", NULL} };