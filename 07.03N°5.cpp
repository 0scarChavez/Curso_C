#include <iostream>
using namespace std;

int main (){
int a=58;
int*p;
p=&a;
int **q=&p;

cout<<a<<endl<<p<<endl<<q<<endl;
cout<<*p<<endl<<**q<<endl;



return 0;
}