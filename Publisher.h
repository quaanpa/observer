#ifndef PUBLISHER_H_INCLUDED
#define PUBLISHER_H_INCLUDED
#include<iostream>
#include<vector>
#include"iPublisher.h"


class Publisher : class iPublisher
{
private:
    vector<iSubcriber> member;
public:

    Publisher();
    ~Publisher();
    void registerSubcriber(iSubcriber * sub)
    {
        member.pushback(sub);
    }
    void removeSubcriber(iSubcriber * sub)
    {
        member.erase(sub);
    }
    void notify()
    {
        for(auto & sub : member)
        {
            sub->update();
        }
    }
};

#endif // PUBLISHER_H_INCLUDED
