#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    void add(Distance x, Distance y)
    {
        feet = x.feet + y.feet;
        inch = x.inch + y.inch;
        feet = feet + x.inch / 12;
        inch = inch % 12;
    }
    Distance(int x, int y)
    {
        feet = x;
        inch = y;
    }
    void print()
    {
        cout << feet << "feet\t" << inch << "inch\t";
    }
};
int main()
{
    int a, b, c, d;
    cout << "enter feet and inch seperated by space";
    cin >> a >> b;
    cout << "enter feet and inch seperated by space";
    cin >> c >> d;
    Distance d1(a, b), d2(c, d), d3(0, 0);
    d3.add(d1, d2);
    d3.print();
    return 0;
}