//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_INSTAGRAM_H
#define UNTITLED3_INSTAGRAM_H
#include "SocialMediaAccount.h"

template<class T>
class Instagram: public SocialMediaAccount<T>{
public:
    int getLikeCount(){return likeCount;}
    void setRetweetCount(int num){likeCount=num;}
    void Like(){likeCount++;}
private:
    int likeCount;

};

#endif //UNTITLED3_INSTAGRAM_H
