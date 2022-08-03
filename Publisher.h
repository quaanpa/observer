#ifndef PUBLISHER_H_INCLUDED
#define PUBLISHER_H_INCLUDED
#include<iostream>
#include<vector>
#include<algorithm>
#include"iPublisher.h"


class Publisher : public iPublisher
{
private:
    std::vector<iSubcriber*> member;
    std::vector<iSubcriber*>::iterator subcribe;
public:

    Publisher();
    void registerSubcriber(iSubcriber * sub);
    void removeSubcriber(iSubcriber * sub);
    void notify();
};

Publisher :: Publisher(){}

void Publisher :: registerSubcriber(iSubcriber *sub)
{
    member.push_back(sub);
}

void Publisher :: removeSubcriber(iSubcriber * sub)
{
    subcribe = std::find(member.begin(), member.end(), sub);
    member.erase(subcribe);
}

void Publisher :: notify()
{
    for(auto & sub : member)
        {
            sub->update();
        }
}

#endif // PUBLISHER_H_INCLUDED
