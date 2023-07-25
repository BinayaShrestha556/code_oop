// nesting of member function
#include <iostream>
using namespace std;
class Total
{
private:
    float principle, time, rate;
    float find_interest()
    {
        return principle * time * rate / 100;
    }

public:
    void setdata(float p, float t, float r)
    {
        principle = p;
        time = t;
        rate = r;
    }
    float findtotal()
    {
        return principle + find_interest();
    }
};
int main()
{
    Total r1;
    float p, t, r, a;
    cout << "enter principle time and rate: ";
    cin >> p >> t >> r;
    r1.setdata(p, t, r);
    cout << "total amount is " << r1.findtotal();
    return 0;
}