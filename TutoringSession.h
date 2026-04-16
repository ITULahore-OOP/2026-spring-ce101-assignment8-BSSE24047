#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {

    private: 
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;  //Association
    Student* student; //Association

    public: 
    TutoringSession(int sessionID, double durationMinutes,TeachingAssistant*ta, Student*student);
    double getDuration();
    void displaySession();
    TutoringSession operator+(const TutoringSession& other); //member
    friend bool operator>(const TutoringSession s1,TutoringSession s2); //nonmember
};




#endif