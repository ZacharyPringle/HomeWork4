//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_TWITTER_H
#define UNTITLED3_TWITTER_H
#include "SocialMediaAccount.h"

template<class T>
class Twitter: public SocialMediaAccount<T>{
public:
    int getRetweetCount(){return retweetCount;}
    void setRetweetCount(int num){retweetCount=num;}
    void RT(){retweetCount++;}
private:
    int retweetCount;

};


#endif //UNTITLED3_TWITTER_H
