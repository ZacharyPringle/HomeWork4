/***************************************************************************
* Author : Zachary Pringle                                                 *
* Program : hw4                                                            *
* Date Created : November 19, 2021                                         *
* Date Last Modified : November 22, 2021                                   *
* Usage : No command line arguments                                        *
* Problem:                                                                 *
* Create profiles for different social media accounts                      *
*  - Use class social media account that is a template class               *
*  - Use classes Twitter and Instagram as children of socil media account  *
*  - create a struct profile class than can be passed in the template class*
***************************************************************************/

#include <iostream>
#include "Twitter.h"
#include "Twitter.cpp"
#include "Instagram.h"
#include "Instagram.cpp"
#include "SocialMediaAccount.cpp"
#include "SocialMediaAccount.h"

using namespace std;

struct Profile{
    int userID;
    string username;
};

ostream & operator<<(ostream &obj, Profile p){
    obj<<p.userID << " " << p.username;
    return obj;
}

int main() {
    Profile p1{1,"Joe"}, p2{2,"Smith"}, p3{3, "Jimmy"}, p4{4,"Jerry"};
    Twitter<string> TS;
        TS.addFollower("Joe");
        TS.addFollower("Jill");
        TS.addFollower("Bill");
        TS.RT();
        TS.getRetweetCount();
        TS.setIsPrivate(false);
            cout << TS.getIsPrivate() << endl;
        TS.setRetweetCount(10);
            cout << TS.getRetweetCount() << endl;
        TS.addFollowed("Jill");
            cout << TS.getFollowerCount() << endl;
            cout << TS.getFollowedCount() << endl;
        TS.setHandler("Zachary");
            cout << TS.getHandler() << endl;
        TS.displayFollowers();
            cout << TS[0] << endl;
        //TS[0].setIsPrivate(false);

        cout<<"\n___________________________________________________\n" << endl;

    Twitter<Profile> TP;
        TP.addFollower(p1);
        TP.addFollower(p2);
        TP.addFollower(p3);
        TP.addFollower(p4);
        TP.displayFollowers();
        TP.addFollowed(p1);
        TP.addFollowed(p2);
        TP.RT();
        TP.RT();
            cout << TP.getRetweetCount() << endl;
            cout << TP.getFollowerCount() << endl;
            cout << TP.getFollowedCount() << endl;
            cout << TP[0] << endl;

    cout<<"\n___________________________________________________\n" << endl;

    Instagram<string> IS;
        IS.addFollower("George");
        IS.addFollower("Gary");
        IS.addFollower("Harper");
        IS.addFollower("Felicia");
        IS.displayFollowers();
            cout << IS[0] << " " << IS[1] << endl;
            cout << IS.getFollowerCount() << endl;
        IS.Like();
        IS.Like();
        IS.Like();
        IS.Like();
        IS.getLikeCount();
        IS.addFollowed("Timmy");
        IS.addFollowed("Tammy");
        IS.addFollowed("Tommy");
        IS.addFollowed("Tom");
        IS.addFollowed("Thomas");
            cout << IS.getFollowedCount() << endl;

    cout<<"\n___________________________________________________\n" << endl;

    Instagram<Profile> IP;
        IP.setLikeCount(100);
        IP.Like();
        IP.Like();
            cout << IP.getLikeCount() << endl;
        IP.addFollower(p1);
        IP.addFollower(p2);
        IP.addFollower(p3);
        IP.addFollower(p4);
        IP.displayFollowers();
        IP.addFollowed(p1);
        IP.addFollowed(p2);
        IP.addFollowed(p3);
        IP.addFollowed(p4);
            cout << IP.getFollowerCount() << " " << IP.getFollowedCount() << endl;



    return 0;
}
