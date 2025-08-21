#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include "user.h"
int main() {
    string uid,pass;
    cout<<"===Welcome to EDU-SYNC===\n";
    cout<<"Enter Id: ";
    cin>>uid;
    cout<<"Enter password: ";
    cin>>pass;
    cin.ignore();
    cout<<"Who are you? (1->Student,2->Teacher,3->Friend)\n";
    int c;
    cin>>c;

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
