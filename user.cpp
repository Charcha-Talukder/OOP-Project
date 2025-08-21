#include "user.h"
#include<iostream>

void Student::menu() {
    std::cout<<"\nSTUDENT MENU\n";
    std::cout<<"1.Schedule\n2.Study\n3.Events\n4.Budget\n.5Notices\n6.Friend requests\n7.Perfect Routine\n0.Logout\n";
}
void Teacher::menu() {
    std::cout<<"\nTEACHER MENU\n";
    std::cout<<"\n1.Post Notice\n2.Add Official Event\n3.Show Official\n0.Logout\n";
}
void FriendUser::menu() {
    std::cout<<"\nFRIEND USER MENU\n";
    std::cout<<"\n1.Send Request\n2.My Requests\n0.Logout\n";
}
void resetFriendPassword(FriendUser &f) {
    stdcout<<"Enter new Password for "<<f.getName()<<":";
    std::string newPassword;
    getline(std::cin,newPassword);
    f.password(newPassword);
    std::cout<<"Password Reset.\n";
}
