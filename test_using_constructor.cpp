#include <iostream>
using namespace std;
class Tree{
    private:
    int r,b;
    public:
    Tree(int,int);
    };
    Tree::Tree(int a,int c)
    {
    r=a;
    b=c;
    cout<< r<<" "<< b;
    }
int main(){
        Tree a(45,67);

}
