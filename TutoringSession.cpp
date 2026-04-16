#include "TutoringSession.h"

TutoringSession::TutoringSession
    (int sessionID, double durationMinutes,TeachingAssistant* ta, Student* student) {
        this->sessionID=sessionID;
        this->durationMinutes=durationMinutes;
        this-> ta=ta;
        this->student=student;
}
double TutoringSession::getDuration(){
    return durationMinutes;
}
void TutoringSession::displaySession(){
    cout<<"Session ID: "<<sessionID<<endl;
    cout<<"Duration: "<<getDuration()<<endl;
    cout<<"Teaching Assistant: "<<ta->getName();
    cout<<"Student: "<<student->getName();
}
TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    return TutoringSession(
        this->sessionID+other.sessionID,              
        this->durationMinutes+other.durationMinutes,  
        this->ta,                                      
        this->student                                  
    );
}
bool operator>(const TutoringSession s1,TutoringSession s2){
    return(s1.durationMinutes>s2.durationMinutes);
}


