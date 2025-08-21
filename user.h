#pragma once
#include <string>
#include "schedule.h"
#include "budget.h"
#include "notice.h"

class friendUser;
//for general user
class User {
protected:
    std::string id;
    std::string name;
    std:: string role;
public:
    User(std::string uid,std::string uname,std::string urole)
        :id(uid),name(uname),role(urole){}//constructor
    virtual ~User(){}//destructor
    virtual void menu()=0;//pure vf
    std::string getId()const { return id; }//getfunc
    std::string getName()const { return name; }//getfunc
    std::string getRole()const { return role; }//getfunc
};
//for student
class Student:public User {
    public:
    Schedule schedule;
    Budget budget;
    NoticeBoard noticeBoard;
    Student(std::string uid,std::uname):User(uid,uname,"Student"){}//constructor
    void menu() override;
};
//for teacher
class Teacher:public User {
    public:
    Schedule official;
    Teacher(std::string uid,std::string uname):User(uid,uname,"Teacher"){}//constructor
    void menu() override;
};
//for friend
class FriendUser:public User{
    std::string password;
    public:
    FriendUser(std::string uid,std::string uname,std::string pass)
        :User(uid,uname,"Friend"),password(pass){}//constructor
        void menu() override;
    friend void resetFriendPassword(FriendUser &f);
};
