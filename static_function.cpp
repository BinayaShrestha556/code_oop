// porgram to use static method for displaying count.
#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    char name[20];
    static int count;

public:
    void getdata()
    {
        cout << "enter roll and name: ";
        cin >> roll >> name;
        count++;
    }
    static void displaycount()
    {
        cout << "count: " << count << "\n";
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    Student::displaycount();
    s1.getdata();
    s2.getdata();
    s3.getdata();
    Student::displaycount();
    return 0;
}