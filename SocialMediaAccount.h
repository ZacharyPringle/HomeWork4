//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_SOCIALMEDIAACCOUNT_H
#define UNTITLED3_SOCIALMEDIAACCOUNT_H
#include <iostream>

using namespace std;

const int maxFollowers=100;
const int maxFollowed=100;

template<class T>
class SocialMediaAccount {
public:
    SocialMediaAccount():isPrivate(true), followerCount(0), followedCount(0){ptr = new T [maxFollowers]; ptr2 = new T [maxFollowed];}
    //SocialMediaAccount(T hand, bool isPriv):isPrivate(isPriv), handler(hand), followerCount(0), followedCount(0){ptr = new T [maxFollowers]; ptr2 = new T [maxFollowed];}
    void setHandler(T handle){handler=handle;}
    void setIsPrivate(bool isPriv){isPrivate=isPriv;}
    T getHandler(){return handler;}
    int getFollowerCount(){return followerCount;}
    int getFollowedCount(){return followedCount;}
    bool getIsPrivate(){return isPrivate;}
    void addFollower(T user);
    void addFollowed(T user);
    void displayFollowers();
    T & operator [](int index){return ptr[index];}
protected:
    T handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount;
    int followedCount;
    bool isPrivate;
    T *ptr;
    T *ptr2;
};


#endif //UNTITLED3_SOCIALMEDIAACCOUNT_H
