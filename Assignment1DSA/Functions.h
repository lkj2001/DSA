#include "CommonHead.h"
#include "Variables.h"
#include "StudentsName.h"

//Functions from external files

extern bool confirmOperation();
extern void askPassword();
extern void setConsultationSlot(extern int teachId);
extern void showConsultationSlot(extern int teachId);
extern Student* studentList(Student* head, string name, string pass);
extern void addStudent(Student* &head);

