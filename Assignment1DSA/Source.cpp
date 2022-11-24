#include "CommonHead.h"
#include "Functions.h"
#include "Variables.h"
#include "StudentsName.h"


int teachId; //must include here as teachId does not have value inside yet
Student* studentHead = NULL;
int main() {

    
    int choice;
    string password;
    cout << "Please enter your ID: " << endl;
    cin >> memberID;
    if (memberID > 0 && memberID < 1000)
        askPassword();
    //cout << "Enter your password: " << endl;
    if (memberID > 0 && memberID < 10) //1-9
    {
        cout << "------- Admin -------" << endl;
        cout << "1. View Report" << endl;
        cout << "2. View Past Consultation" << endl;
        cout << "3. View Lecturer Consultation" << endl;
        cout << "4. Add New Students" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter the number you would like to proceed: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 4: addStudent(studentHead);
        }
    }
    else if (memberID > 9 && memberID < 100) //10-99 
        //Only input 10-20
    {
        cout << "------- Lecturer -------" << endl;
        cout << endl;
        cout << "1. Set Available Slots" << endl;
        cout << "2. View Consultation Booked" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter the number you would like to proceed: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1: setConsultationSlot(teachId);

        case 2: showConsultationSlot(teachId);

        case 3: exit(0);
        }
    }
    else if (memberID > 99 && memberID < 1000) //100-999
    {
        cout << "------- Student -------" << endl;
        cout << "1. View Available Slots" << endl;
        cout << "2. View Past Consultation" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter the number you would like to proceed: " << endl;
        cin >> choice;
    }
    else
    {
        cout << "Sorry, ID can't be found" << endl;
    }


}