//not sure how to do this, need to explain later
#include "CommonHead.h"


extern struct BookedSlot;
//students structure
extern struct Student
{
	int id;
	string name, password;
	BookedSlot* bookedSlot;
	Student* nxtStudent;
};

extern struct BookedSlot
{
	int day, month, hour;
	string studentName;
	BookedSlot* next;
};
