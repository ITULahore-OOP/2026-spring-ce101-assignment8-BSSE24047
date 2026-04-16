#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "UniversityMember.h"
using namespace std;

class Student: public virtual UniversityMember {
    private: 
    double cgpa;

    public:
    Student(string name, int memberID, double cgpa);
    double getCGPA();
    void updateCGPA(double newCGPA);
    void displayRole() override;

};






#endif