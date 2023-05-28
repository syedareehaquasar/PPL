#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(){};
    Complex(int i, int j)
    {
        real = i;
        img = j;
    }
    void show()
    {
        cout << real << " + i" << img;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return (temp);
    }
    Complex operator*(Complex);
};
Complex Complex::operator*(Complex c)
{
    double real1, real2;
    real1 = real;
    real2 = c.real;
    real = (real * c.real) - (img * c.img);
    img = (real1 * c.img) + (img * real2);
    Complex temp;
    temp.real = real;
    temp.img = img;
    return temp;
}
int main()
{
    printf("Syeda Reeha Quasar 14114802719 \n");

    Complex c1(5, 6), c2(7, 8), c3, c4;
    cout << "The 1st no. is: ";
    c1.show();
    cout << "\n\nThe 2nd no. is: ";
    c2.show();
    c3 = c1 + c2;
    cout << "\n\nSum is: ";
    c3.show();
    c4 = c1 * c2;
    cout << "\n\nMultiplication is: ";
    c4.show();
}