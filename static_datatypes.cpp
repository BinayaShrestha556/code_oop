// program to find number of object
#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    static int count; // static data member
public:
    void getdata()
    {
        cout << "\nenter roll and name : ";
        cin >> roll >> name;
        count++;
    }
    void displaycount()
    {
        cout << "\ncount is: " << count;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();
    s1.getdata();
    s1.displaycount();
    s2.getdata();
    s2.displaycount();
    s3.getdata();
    s3.displaycount();
    return 0;
}
