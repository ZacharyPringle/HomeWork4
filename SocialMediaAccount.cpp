//
// Created by ZPringle on 11/21/2021.
//

#include "SocialMediaAccount.h"
#include <iostream>

using namespace std;

template<class T>
void SocialMediaAccount<T>::addFollower(T user){
    ptr[followerCount] = user;
    followerCount++;
}
template<class T>
void SocialMediaAccount<T>::addFollowed(T user){
    ptr[followedCount] = user;
    followedCount++;
}
template<class T>
void SocialMediaAccount<T>::displayFollowers() {
    for(int i=0; i<followerCount; i++)
        cout<<ptr[i]<<endl;
}