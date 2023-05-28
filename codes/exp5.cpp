#include <iostream>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    Time() {}
    Time(int hh, int mm, int ss)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }
    void disp()
    {
        cout << hh << ":" << mm << ":" << ss;
    }
    void sum(Time t1, Time t2)
    {
        ss = t1.ss + t2.ss;
        mm = ss / 60;
        ss = ss % 60;
        mm = mm + t1.mm + t2.mm;
        hh = mm / 60;
        mm = mm % 60;
        hh = hh + t1.hh + t2.hh;
    }
};

int main()
{
    printf("Syeda Reeha Quasar 14114802719 \n");

    Time t1(2, 22, 34);
    cout << "The Time T1 Is: ";
    t1.disp();
    Time t2(4, 33, 50);
    cout << "\n\nThe Time T2 Is: ";
    t2.disp();
    Time t3;
    t3.sum(t1, t2);
    cout << "\n\nThe Resultant Time Is: ";
    t3.disp();
}