#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    float result;
    int mul;
    cout << "No. of days taken by Mr. Brown to paint 1 house = 6" << endl;
    cout << "No. of days taken by Mr. Black to paint 1 house = 8" << endl;
    cout << "No. of days taken by Mr. Blue to paint 1 house = 12" << endl;
    cout << "No. of days Mr. Brown works=8" << endl;
    cout << "No. of days for which Mr. Black works = 6" << endl;

    mul = gcd(gcd(6, 8), 12);
    result = ((3 * mul - ((6 * mul) / 8.0) - ((8 * mul) / 6.0)) * 12.0) / mul;

    cout << "No. of days for which Mr. Blue will have to work = " << result << endl;

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);

    return gcd(a, b - a);
}
