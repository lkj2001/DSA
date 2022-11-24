//not sure how to do this, need to explain later
#include "CommonHead.h"


extern struct BookedSlot;
//students structure
extern struct Student
{
	extern int id;
	extern string name, password;
	extern BookedSlot* bookedSlot;
	extern Student* nxtStudent;
};

extern struct BookedSlot
{
	extern int day, month, hour;
	extern string studentName;
	extern BookedSlot* next;
};
