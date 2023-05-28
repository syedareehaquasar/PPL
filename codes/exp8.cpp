#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string ques[50], ans[50];
    for (int i = 0, j = 1; i < 50; i++, j++)
    {
        stringstream s1, s2;
        s1 << i;
        s2 << j;
        ques[i] = "1+";
        ques[i] += s1.str();
        ans[i] = s2.str();
    }
    for (int i = 0; i < 50; i++)
        cout << ques[i] << "=" << ans[i] << endl;
    return 0;
}
