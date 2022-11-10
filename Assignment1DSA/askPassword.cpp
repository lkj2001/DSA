#include "CommonHead.h"
#include "Variables.h"

int memberID;
void askPassword() {

    int ch, tryCount = 0;
    string user, password, p;
start:
    if (tryCount > 3) {
        cout << "Sorry, you've tried too many times.";
        ch = 13;
    }
    else
        cout << "Enter your password:";
    while (true) {
        ch = _getch();
        if (ch == 13)
            break;
        else if (ch == '\b') {
            password.pop_back();

        }
        else if (ch != 13) {
            password.push_back(ch);
            cout << '*';
        }
    }

    if (memberID > 0 && memberID < 1000 && password == "123456") {
        cout << endl << "Login Successfull!" << endl << endl;
    }
    else {
        cout << endl << "ID and password does not match" << endl << endl;
        tryCount++;
        goto start;
    }
};