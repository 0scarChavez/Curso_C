#include <iostream>
using namespace std;

int operacion(int año)
{
int operacion1=0;
operacion1=2023-año;
return operacion1;
}

int main(){
int año=0;
int edad=0;

cout<<" ingrese el año de nacimiento"<<endl;
cin>>año;
edad=operacion(año);
cout<<"tu edad es "<<edad<<"\n";
if(edad<18){
cout<<"Eres menor de edad";
}
else
cout<<"Eres mayor de edad";

 return 0;
}
