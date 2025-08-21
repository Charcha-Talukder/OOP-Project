#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include "user.h"
int main() {
    std::string uid,pass;
    std::cout<<"===Welcome to EDU-SYNC===\n";
    std::cout<<"Enter Id: ";
    std::cin>>uid;
    std::cout<<"Enter password: ";
    std::cin>>pass;
    std::cin.ignore();
    std::cout<<"Who are you? (1->Student,2->Teacher,3->Friend)\n";
    int c;
    std::cin>>c;

    User *u=NULL;
    if(c==1) {
        u=new Student(uid,"Student");
    }
    else if(c==2) {
        u=new Teacher(uid,"Teacher");
    }
    else if(c==3) {
        u=new FriendUser(uid,"Friend",pass);
    }

    if(u!=NULL) {
        u->menu();
    }
    delete u;
    return 0;
}
