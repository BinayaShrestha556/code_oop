// testimg access specifiers
#include <iostream>
using namespace std;
class Test
{
private:
    int x;

public:
    int y;
    void getdata()
    {
        cout << "enter x and y " << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "x= " << x << "y= " << y;
    }
};
int main()
{
    Test t;
    t.getdata();
    t.display();
    /*cout<<"enter value of x: ";
    cin>>t.x;  //generates error*/
    cout << "enter the value of y: ";
    cin >> t.y; // doesnt generate error3
    return 0;
}