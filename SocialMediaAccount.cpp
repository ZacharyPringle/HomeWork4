//
// Created by ZPringle on 11/21/2021.
//

#include "SocialMediaAccount.h"
#include <iostream>

using namespace std;

//adds a follower to the follower count and into an "array" creating new users or adding in existing profiles
template<class T>
void SocialMediaAccount<T>::addFollower(T user){
    ptr[followerCount] = user;
    followerCount++;
}

//adds a user the user followed to the followed count and into an "array" creating new users or adding in existing profiles
template<class T>
void SocialMediaAccount<T>::addFollowed(T user){
    ptr2[followedCount] = user;
    followedCount++;
}

//displays follower information if isPrivate is false and returns Private if isPrivate is true
template<class T>
void SocialMediaAccount<T>::displayFollowers() {
    for(int i=0; i<followerCount; i++) {
        if (isPrivate == false)
            cout << ptr[i] << endl;
        else
            cout << "Private" << endl;
    }
}