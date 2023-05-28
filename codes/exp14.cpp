#include <iostream>
using namespace std;
int hexValue(char ch);
int main()
{
    string hex;
    long dec;
    int i;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;
    cout << endl;
    dec = 0;
    for (i = 0; i < hex.length(); i++)
    {
        int digit = hexValue(hex.at(i));
        if (digit == -1)
        {
            cout << "Error: Input is not a hexadecimal number.";
            return 0;
        }
        dec = 16 * dec + digit;
    }
    cout << "Base-10 value: " << dec;
}

int hexValue(char ch)
{
    switch (ch)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case 'a':
    case 'A':
        return 10;
    case 'b':
    case 'B':
        return 11;
    case 'c':
    case 'C':
        return 12;
    case 'd':
    case 'D':
        return 13;
    case 'e':
    case 'E':
        return 14;
    case 'f':
    case 'F':
        return 15;
    default:
        return -1;
    }
}
