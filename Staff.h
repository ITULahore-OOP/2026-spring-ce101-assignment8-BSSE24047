#ifndef STAFF_H
#define STAFF_H

#include "AccessCard.h" //composition
#include "UniversityMember.h" //virtual inheritance


class Staff: public virtual UniversityMember {
    private:
    double salary;
    AccessCard access;

    public:
    Staff(string name, int memberID, double salary, AccessCard access);
    double getSalary();
    void displayRole()override;
    void displayCard();

};





#endif