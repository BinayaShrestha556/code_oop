//sum using friend class
#include<iostream>
class beta;
using namespace std;
class alpha{
    private:
    int data;
    public:
    void setData(int d){
        data=d;
    }
    friend int sum(alpha,beta);
};
class beta{
    private:
    int data;
    public:
    void setData(int d){
        data=d;

    }
    friend int sum(alpha,beta);
};
int sum(alpha a,beta b){
    return a.data+b.data;
}
int main(){
    alpha a;
    a.setData(7);
    beta b;
    b.setData(3);
    cout<<"sum= "<<sum(a,b);
    return 0;
}