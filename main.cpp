#include <iostream>
#include "Twitter.h"
#include "Instagram.h"

struct Profile{
    int userID;
    string username;
};

ostream & operator<<(ostream &obj, Profile p){
    obj<<p.userID << " " << p.username << endl;
    return obj;
}

using namespace std;

int main() {
    Profile p1{1,"Joe"}, p2{2,"Smith"};
    Twitter<string> TS;
    Twitter<Profile> TP;
    Instagram<string> IS;
    Instagram<Profile> IP;
    TP.addFollower(p1);


    return 0;
}
