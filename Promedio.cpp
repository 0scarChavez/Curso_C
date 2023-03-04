#include <iostream>
using namespace std;
float result(float a,float b,float c){
float re= 0;
float fin=0;
re=a+b+c;
fin=re/3;
return fin;
}
int rango(float promedio){
int v=0;
if (promedio>=18){
v=1;
}
if (promedio<18 and promedio>15){
v=2;
}
if (promedio<=15 and promedio>11){
v=3;
}
if (promedio<=11 and promedio>5){
v=4;
}
if (promedio<5){
v=5;
}
}




int main(){
float a,b,c;
float promedio;
int operacion;
cout<<"introduce tu primera nota"<<endl;
cin>>a;
cout<<"introduce tu segunda nota"<<endl;
cin>>b;
cout<<"introduce tu tercera nota"<<endl;
cin>>c;
promedio=result(a,b,c);
cout<<promedio<<endl;
switch (operacion)
{
case 1:
cout<<"A";
    break;

case 2:
cout<<"B";
    break;

case 3:
cout<<"C";
    break;

case 4:
cout<<"F";

    break;

case 5:
cout<<":(  F";
    break;
    }
    return 0;
}
