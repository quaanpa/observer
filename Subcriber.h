#ifndef SUBCRIBER_H_INCLUDED
#define SUBCRIBER_H_INCLUDED
#include<iostream>
#include"iSubcriber.h"

class Subcriber : class iSubcriber
{
    Subcriber()
    {

    }

    void update()
    {
        std :: cout << "New message!";
    }
};
#endif // SUBCRIBER_H_INCLUDED
