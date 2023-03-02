#include <iostream>
using namespace std;
int operacion1(int lado){
int are=0;
are=lado*lado;
return are;
}
int operacion2(int lado){
    int peri=0;
    peri=lado*4;
return peri;
}

int main(){
    int lado,area,perimetro;
    cout<<"Ingrese el lado de cuadrado"<<endl;
    cin>>lado;
    area=operacion1(lado);
    perimetro=operacion2(lado);
    cout<<"El perimetro del cuadrado es "<<perimetro<<endl;
    cout<<"El area del cuadrado es "<<area;
    return 0;
}