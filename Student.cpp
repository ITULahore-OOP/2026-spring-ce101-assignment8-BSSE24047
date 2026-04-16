#include "Student.h"
#include "UniversityMember.h"
#include <iostream>

Student::Student(string name, int memberID, double cgpa):UniversityMember(name, memberID){
    this->cgpa=cgpa;
}
double Student::getCGPA(){
    return cgpa;
}
void Student::updateCGPA(double newCGPA){
    if (cgpa>=0&&cgpa<=4){
        cgpa=newCGPA;
    }
}
void Student::displayRole() {
    cout<<"Role: Student"<<endl;
}




