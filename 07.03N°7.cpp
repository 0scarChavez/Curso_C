#include <iostream>
using namespace std;

int main (){
int *p,*q;
int a=20;
p=&a;
q=p;
q++;
cout<<" "<<endl<<p;
cout<<" "<<endl<<q;

return 0;
}