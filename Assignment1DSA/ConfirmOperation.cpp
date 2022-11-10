#include "CommonHead.h"
#include "Variables.h"

//Function triggered everytime a 'Y' and 'N' operation is needed
bool confirmOperation()
{
    char confirmCode;
    do
    {
        cin >> confirmCode;
        confirmCode = toupper(confirmCode);
        if (confirmCode != 'Y' && confirmCode != 'N')
            cout << "Error. Please enter an appropriate code. (Y/N)" << endl;
    } while (confirmCode != 'Y' && confirmCode != 'N');

    if (confirmCode == 'Y')
        return true;
    return false;
}