#ifndef OBSERVER_H_INCLUDED
#define OBSERVER_H_INCLUDED

class iSubcriber
{
public:
    virtual void update;
};
class iPublisher
{
public:
    virtual void registerSubcriber;
    virtual void removeSubcriber;
    virtual void notify;
};

class Subcriber : class iSubcriber
{

};

class Publisher : class iPublisher
{

};

#endif // OBSERVER_H_INCLUDED
