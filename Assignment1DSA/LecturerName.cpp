#include "CommonHead.h"
#include "Variables.h"


struct teacher
{
	string name;
	int consultationSlot;

}; 
teacher sccm[3] = { {"Bridget", 0}, {"Ken", 0}, {"Micheal", 0} };
void LecturerName()
{
	switch (memberID)
	{
	case 10: cout << "Welcome Bridget Merliza" << endl;
		break;

	case 11: cout << "Welcome Johann Lim" << endl;
		break;

	case 12: cout << "Welcome Yap Chin Kein" << endl;
		break;

	case 13: cout << "Welcome Micheal Ooi" << endl;
		break;

	case 14: cout << "Welcome Lai Ze Ren" << endl;
		break;

	case 15: cout << "Welcome Norah Khor" << endl;
		break;

	case 16: cout << "Welcome Tan Chin Ike" << endl;
		break;

	case 17: cout << "Welcome Chong Wei Shern" << endl;
		break;

	case 18: cout << "Welcome Ng Yiing Y'ng" << endl;
		break;

	case 19: cout << "Welcome Kevin Wong" << endl;
		break;

	default: cout << "Welcome Lecturer" << endl;
		break;
	}
}