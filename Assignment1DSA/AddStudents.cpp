#include "CommonHead.h"
#include "StudentsName.h" //not sure how to do this, explain later
#include "Variables.h" //nedd the curStudentCount

//can hardcode some students in
//to immediately have students, do addingStudent(studentHead, *insert desired name*, *insert desired Password*)
Student* studentList(Student* head, string name, string pass)
{
	Student* newStudent = new Student;
	newStudent->id = 100 + curStudentCount;
	curStudentCount++;
	newStudent->name = name;
	newStudent->password = pass;
	newStudent->nxtStudent = head;
	head = newStudent;
	return head;
}

//to add the students with cin
void addStudent(Student* &head)
{
	string name, pass, confirmPass;
	int decision = 0; //for later on
	do
	{
		cout << "Input the Name of Student: ";
		cin >> name;
		do
		{
			cout << "Input the Password: ";
			cin >> pass;
			cout << "Confirm the Password (Re-input): ";
			cin >> confirmPass;
			if (pass != confirmPass)
				cout << "\nThe passwords are different. Please re-enter\n";
		} while (pass != confirmPass);
		char confirm;
		do {
			cout << "Name : " << name << endl;
			cout << "Password : " << pass << endl;
			cout << "\nConfirm Add (Y/N) : ";
			cin >> confirm;
			confirm = toupper(confirm);
			if (confirm == 'Y')
			{
				head = studentList(head, name, pass);
				cout << "Student added Succesfully :)" << endl;
				//return head;
			}
			else if (confirm == 'N')
			{
				do
				{
					cout << "What Now?" << endl;
					cout << "1. To Re-input" << endl;
					cout << "2. To Exit" << endl;
					cout << "Input Decision: ";
					cin >> decision;
					if (decision < 1 && decision > 2)
						cout << "Please input either 1 or 2. Thank You" << endl;
				} while (decision < 1 && decision > 2);
			}
			else
				cout << "Please input either Y or N" << endl;
		} while (confirm != 'Y' && confirm != 'N');
	} while (decision == 1);
	//return head;
}

//This will be deleted later, for now, its to check whether the students data got in or not, and it also shows password which is weird XD
void displayStudent(Student* head)
{
	while (head != NULL)
	{
		cout << "ID: " << head->id << endl;
		cout << "Name : " << head->name << endl;
		cout << "Password : " << head->password << endl;
		head = head->nxtStudent;
	}
}


