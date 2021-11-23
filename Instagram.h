//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_INSTAGRAM_H
#define UNTITLED3_INSTAGRAM_H
#include "SocialMediaAccount.h"

template<class T>
class Instagram: public SocialMediaAccount<T>{
public:
    int getLikeCount(){return likeCount;}//returns like count
    void setLikeCount(int num){likeCount=num;}//sets the like count
    void Like(){likeCount++;}//adds 1 to the like count
private:
    int likeCount=0;

};

#endif //UNTITLED3_INSTAGRAM_H
