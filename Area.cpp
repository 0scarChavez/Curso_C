#include <iostream>
using namespace std;
int areafuncion(int base, int altura){
 int operacion =0;
 operacion=base*altura;
 return operacion;
}
int perimetrofuncion(int base, int altura){
    int operacion1=0;
    int operacion2=0;
    operacion1=base+altura;
    operacion2=operacion1*2;
return operacion2;
}
int main ()
{
    int base,altura,area,perimetro;
    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<"Ingrese la altura"<<endl;
    cin>>altura;
    area=areafuncion(base,altura);
    perimetro=perimetrofuncion(base,altura);
    cout<<"El perimetro de este rectangulo es "<<perimetro<<endl;
    cout<<"El area de ese rectangulo es " <<area;
    return 0;
}
