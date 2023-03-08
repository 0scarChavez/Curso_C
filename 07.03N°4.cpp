#include <iostream>
using namespace std;

int main (){
    int *p,*q;
    int x=4;
    p=&x;
    q=&x;
    x=x+3;
    cout<<*p<<endl;
    *p= 8;
    cout<<p<<endl<<q<<endl<<x<<endl<<*p<<endl<<*q<<endl;



    return 0;
}