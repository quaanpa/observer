#include <iostream>
#include <vector>
#include"Publisher.h"
#include"Subcriber.h"




using namespace std;

int main()
{
    Publisher pub;
    Subcriber sub1;
    Subcriber sub2;

    pub.registerSubcriber(&sub1);
    pub.registerSubcriber(&sub2);
    pub.notify();
    pub.removeSubcriber(&sub2);
    pub.notify();

    return 0;
}
