// program showing the use of nested class
#include <iostream>
using namespace std;
class Employee
{
private:
    int eid, salary;
    char name[20];

public:
    void getdata()
    {
        cout << "enter id, name and salary of an emoloyee: \n";
        cin >> eid >> name >> salary;
        cout << "enter date of birth of an employee \n";
        db.getDOB();
    }
    void display()
    {
        cout << "employee id: " << eid << "\nname: " << name << "\nsalary: " << salary;
        cout << "\nDOB: ";
        db.displayDOB();
    }
    class DOB
    {
        int y, m, d;

    public:
        void getDOB()
        {
            cout << "enter year: ";
            cin >> y;
            cout << "enter month : ";
            cin >> m;
            cout << "enter day: ";
            cin >> d;
        }
        void displayDOB()
        {
            cout << y << "-" << m << "-" << d;
        }
    };
    DOB db;
};
int main()
{
    Employee e;
    e.getdata();
    cout << "###employee details###\n";
    e.display();
    return 0;
}