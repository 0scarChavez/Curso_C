#include <iostream>
using namespace std;

int main (){
 int *p,*q;
 int a =-123;
 int b;
 p=&a;
 q=p;

 cout<<p<<endl<<q<<endl<<&p<<endl<<&q<<endl;
b=*p;
cout<<b;

return 0;
}