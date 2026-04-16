#include "Department.h"
#include <iostream>
#include <string>
using namespace std;


Department::Department(string departmentName){
    this->departmentName=departmentName;
}
void Department::addMember(UniversityMember* member){
    if(memberCount<10){
        members[memberCount]=member;
        memberCount++;
    }
}
void Department::displayAllRoles(){
    cout<<"Student:\n";
    cout<<"Staff:\n";
    cout<<"Teaching Assistant:\n";
}
