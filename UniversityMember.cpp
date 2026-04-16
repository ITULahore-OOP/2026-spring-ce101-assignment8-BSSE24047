#include "UniversityMember.h"

#include <iostream>
#include <string>
using namespace std;

UniversityMember::UniversityMember(string name, int memberID){
    this->name=name;
    this->memberID=memberID;
}

UniversityMember::~UniversityMember(){
    cout<<"Destructor"<<endl;
}
int UniversityMember::getMemberID(){
    return memberID;
}
string UniversityMember::getName(){
    return name;
}