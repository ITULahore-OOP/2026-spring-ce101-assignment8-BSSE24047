#include <iostream>
#include <string>
#include "AccessCard.h"
#include "Department.h"
#include "Staff.h"
#include "Student.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "UniversityMember.h"
using namespace std;

int main(){
    Student s1("Hassan",101,3.8);
    UniversityMember* m1 = &s1;
    m1->displayRole();

    s1.updateCGPA(3.1);

    cout << "\n=====ACCESS CARD=====" << endl;
    AccessCard AC("6105",1);
    AC.displayCardInfo();

    cout << "\n=====STAFF=====" << endl;
    AccessCard card1("AC=101",1);
    Staff st("Ahmad",102,10000,card1);
    UniversityMember*m2=&st;
    m2->displayRole();
    st.displayCard();

    cout << "\n===== TEACHING ASSISTANT =====" << endl;
    TeachingAssistant TA("Amna",103,3.5,20000,card1,60);
    UniversityMember*m3=&TA;
    m3->displayRole();

    TA.gradeAssignment(87);      
    TA.gradeAssignment("B");     

    cout << "\n===== TUTORING SESSION =====" << endl;
    TutoringSession session(0,60,&TA,&s1);
    session.displaySession();

    cout << "\n===== DEPARTMENT =====" << endl;
    Department d("Engineering");
    d.addMember(&s1);
    d.addMember(&st);
    d.addMember(&TA);
    d.displayAllRoles();

    return 0;
}