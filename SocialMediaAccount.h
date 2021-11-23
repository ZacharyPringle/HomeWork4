//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_SOCIALMEDIAACCOUNT_H
#define UNTITLED3_SOCIALMEDIAACCOUNT_H
#include <iostream>

using namespace std;

const int maxFollowers = 5;
const int maxFollowed = 5;

template<class T>
class SocialMediaAccount {
public:
    SocialMediaAccount():isPrivate(true), handler(""), followerCount(0), followedCount(0){ptr = new T [maxFollowers];}
    void setHandler(T handle){handler=handle;}
    void setIsPrivate(bool isPriv){isPrivate=isPriv;}
    T getHandler(){return handler;}
    T getFollowerCount(){return followerCount;}
    T getFollowedCount(){return followedCount;}
    bool getIsPrivate(){return isPrivate;}
    void addFollower(T user);
    void addFollowed(T user);
    void displayFollowers();
private:
    string handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount;
    int followedCount;
    bool isPrivate;
    T *ptr;
};


#endif //UNTITLED3_SOCIALMEDIAACCOUNT_H
