#include<iostream>
using namespace std;
struct currency
{
    int rupees;
    int paisa;

};
int main(){
currency c1,c3;
currency c2={123,123};
cout<<"enter rupees: ";cin>>c1.rupees;
cout<<"enter paisa: "; cin>>c1.paisa;

c3.paisa=c1.paisa+c2.paisa;
c3.rupees=c2.rupees+c1.rupees;
c3.paisa=c3.paisa%100;
c3.rupees=c3.rupees+c3.paisa/100;
cout<<"rs. "<<c1.rupees<<"\t"<<c1.paisa<<"paisa + ";
cout<<"rs. "<<c2.rupees<<"\t"<<c2.paisa<<"paisa = ";
cout<<"rs. "<<c3.rupees<<"\t"<<c3.paisa<<"paisa ";
return 0;
}