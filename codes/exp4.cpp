#include <iostream>
using namespace std;
class Counter
{
private:
    // static data member as count
    static int count;

public:
    // default constructor
    Counter()
    {
        count++;
    }
    // static member function
    static void Print()
    {
        cout << "\nTotal objects are: " << count;
    }
};
// count initialization with 0
int Counter ::count = 0;
int main()
{
    printf("Syeda Reeha Quasar 14114802719 \n");

    Counter OB1;
    OB1.Print();
    Counter OB2;
    OB2.Print();
    Counter OB3;
    OB3.Print();
    return 0;
}
