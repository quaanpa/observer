#ifndef IPUBLISHER_H_INCLUDED
#define IPUBLISHER_H_INCLUDED
#include"iSubcriber.h"

class iPublisher
{
public:
    virtual void registerSubcriber(iSubcriber * sub) = 0;
    virtual void removeSubcriber(iSubcriber * sub) = 0;
    virtual void notify() = 0;
};
#endif // IPUBLISHER_H_INCLUDED
