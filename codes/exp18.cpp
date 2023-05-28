#include <iostream>
using namespace std;

int main()
{
    float avg_speed, t1, t2, answer;

    cout << "Enter average speed of passenger train: ";
    cin >> avg_speed;
    cout << endl;

    cout << "Enter time after which passenger train leaves: ";
    cin >> t1;
    cout << endl;

    cout << "Enter the time after which passenger train overtakes: ";
    cin >> t2;
    cout << endl;
    
    cout << "Distance travelled by passenger train at t2=" << avg_speed * t2 << endl;
    cout << "Average Speed of freight train=" << (avg_speed * t2) / (t1 + t2) << endl;
}
