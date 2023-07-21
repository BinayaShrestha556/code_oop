// add 2 complex number
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void getData()
    {
        cout << "enter complex number, real and imaginary numbers: ";
        cin >> real >> img;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void print()
    {
        cout << "the answer is: " << real << "+" << img << "i";
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3 = c1.add(c2);
    c3.print();
}