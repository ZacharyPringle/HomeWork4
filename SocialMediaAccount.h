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
    SocialMediaAccount():isPrivate(true), followerCount(0), followedCount(0){ptr = new T [maxFollowers]; ptr2 = new T [maxFollowed];}//default constructor for social media accounts
    void setHandler(T handle){handler=handle;} //sets name/handle of the user
    void setIsPrivate(bool isPriv){isPrivate=isPriv;} //sets account private or not private
    T getHandler(){return handler;} //returns the handler
    int getFollowerCount(){return followerCount;} //returns amount of followers
    int getFollowedCount(){return followedCount;} //returns amount of people the account follows
    bool getIsPrivate(){return isPrivate;} //returns if the account is private or not
    void addFollower(T user);//adds a follower to the follower count and into an "array" creating new users or adding in existing profiles
    void addFollowed(T user);//adds a user the user followed to the followed count and into an "array" creating new users or adding in existing profiles
    virtual void displayFollowers(); //displays follower information if isPrivate is false and returns Private if isPrivate is true
    T & operator [](int index){return ptr[index];}//allows the formation of an array when calling the created users
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
