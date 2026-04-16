#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <iostream>
#include <string>
using namespace std;

class UniversityMember{
    private: 
    string name;
    int memberID;

    public:
    
    UniversityMember(string name,int memberID);
    ~UniversityMember();
    int getMemberID();
    string getName();
    virtual void displayRole()=0; //pure virtual function.
};



#endif
