//
// Created by ZPringle on 11/21/2021.
//

#ifndef UNTITLED3_TWITTER_H
#define UNTITLED3_TWITTER_H
#include "SocialMediaAccount.h"

template<class T>
class Twitter: public SocialMediaAccount<T>{
public:
    int getRetweetCount(){return retweetCount;}//returns the retweet count
    void setRetweetCount(int num){retweetCount=num;}//sets the retweet count
    void RT(){retweetCount++;}//adds 1 to the retweet count
private:
    int retweetCount=0;

};


#endif //UNTITLED3_TWITTER_H
