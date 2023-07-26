// constant member variables
#include <iostream>
using namespace std;
class fred
{
    const int size;

public:
    fred(int s) : size(s) {}
    void print()
    {
        cout << size << endl;
    }
};
int main()
{
    fred a(1), a2(2), a3(3);
    a.print();
    a2.print();
    a3.print();
    return 0;
}