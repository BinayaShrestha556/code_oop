//this pointer example
#include<iostream>
#include<string.h>
using namespace std;
class person{
    string name;
    int age;
    public:
    void setdata(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"name: "<<this->name<<endl<<"age: "<<this->age<<endl;
        

    }
    person isElder(person p){
        if (age>p.age)
        return *this;
        else 
        return p;
    }
};
int main(){
    person p,p1,p2;
    p1.setdata("binaya",18);
    p2.setdata("noone",19);
    p=p1.isElder(p2);
    cout<<"elder is "<<endl;
    p.display();
    return 0;
    
}