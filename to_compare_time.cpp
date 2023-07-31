//compare 2 times using operater typecasting
#include <iostream>
using namespace std;
class Time{
    private:
    int minute ,second;
    public:
    Time (int a, int b){
        minute=a;
        second=b;
    }
    int operator <(Time time1){
        if((minute*60+second)>time1.minute*60+time1.second)
            return 1;
        else
        return 0;   
    }
};
int main(){
    Time time1(4,6),time2(3,4);
    if(time2<time1)
    cout << "1st time is smaller";
    else
    cout<<"2nd time is smaller";
    return 0;
}