#include "Staff.h"

#include <iostream>
using namespace std;


Staff::Staff(string name, int memberID, double salary, AccessCard access)
    :UniversityMember(name,memberID), access(access){
        this->salary=salary;
        // this->access=access;
    }
double Staff::getSalary(){
    return salary;
}
void Staff::displayRole() {
    cout<<"Role: Staff"<<endl;
}
void Staff::displayCard(){
    cout<<"Access Card: "<<endl;
    access.displayCardInfo();
}

