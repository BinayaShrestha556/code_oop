// program to enter employee id and salary and print them
#include <iostream>
const int MAX = 200;
using namespace std;
class Employee
{
private:
    int salary;
    int id;

public:
    void getdata()
    {
        cout << "enter employee id: ";
        cin >> id;
        cout << "\nenter salary: ";
        cin >> salary;
    }
    void displaydata()
    {
        cout << "\nId is: " << id << "\t salary is: " << salary;
    }
};
int main()
{
    Employee r[MAX];
    int n = 0;
    char ch;
    do
    {
        r[n].getdata();
        cout << "\ndo you want to enter more? If no enter 'n' or 'N'";
        cin >> ch;
        n++;

    } while (ch != 'n' || ch != 'n');
    for (int i = 0; i < n; i++)
    {
        r[i].displaydata();
    }
    return 0;
}