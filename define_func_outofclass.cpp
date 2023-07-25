// defining function out of class
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, bredth;

public:
    void setdata(int l, int b)
    {
        length = l;
        bredth = b;
    }
    void showdata();
    int findarea();
    int findperimeter();
};
void Rectangle::showdata()
{
    cout << "length is: " << length << "  breadth is: " << bredth;
}
int Rectangle::findarea()
{
    return length * bredth;
}
int Rectangle::findperimeter()
{
    return 2 * (length + bredth);
}
int main()
{
    Rectangle r;
    r.setdata(34, 45);
    r.showdata();
    cout << "\nthe area is: " << r.findarea() << "   the perimeter is: " << r.findperimeter();
    return 0;
}