#include <iostream>
using namespace std;

int costOfBlending(int x, int y);

int main()
{
    cout << "Initial cost of blending 1 gram=" << costOfBlending(2, 1) / 100.00 << " rupees" << endl;
    cout << "New cost of blending 1 gram=" << costOfBlending(1, 2) / 100.00 << " rupees" << endl;
    cout << "Difference in cost for 1 gram=" << (costOfBlending(2, 1) - costOfBlending(1, 2)) / 100.00 << " rupees" << endl;
    cout << "Difference in cost for 100 gram=" << costOfBlending(2, 1) - costOfBlending(1, 2) << " rupees" << endl;
    return 0;
}

int costOfBlending(int x, int y)
{
    int costOfNGram = x * 33 + y * 24;
    int costOfOneGram = (x * 33 + y * 24) / (x + y);
    return costOfOneGram;
}
