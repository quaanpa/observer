#ifndef IPUBLISHER_H_INCLUDED
#define IPUBLISHER_H_INCLUDED

class iPublisher
{
public:
    virtual void registerSubcriber() = 0;
    virtual void removeSubcriber() = 0;
    virtual void notify() = 0;
};
#endif // IPUBLISHER_H_INCLUDED
