// find area and perimeter of a rectangle.
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l, b;

public:
    void setdata(int x, int y)
    {
        l = x;
        b = y;
    }
    void showdata()
    {
        cout << "length= " << l << " breadth= " << b;
    }
    int findarea()
    {
        return l * b;
    }
    int find_perimeter()
    {
        return 2 * (l + b);
    }
};
int main()
{
    Rectangle r1;
    r1.setdata(8, 9);
    r1.showdata();
    cout << "\narea is " << r1.findarea() << "\nperimeter is " << r1.find_perimeter();
    return 0;
}
