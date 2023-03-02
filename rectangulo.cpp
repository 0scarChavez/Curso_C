#include <iostream>
using namespace std;
int operacion1(int base, int altura){
 int ope =0;
 ope=base*altura;
 return ope;
}
int operacion2(int base, int altura){
    int peri=0;
    int peri2=0;
    peri=base+altura;
    peri2=peri*2;
return peri2;
}
int main ()
{
    int base,altura,area,perimetro;
    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<"Ingrese la altura"<<endl;
    cin>>altura;
    area=operacion1(base,altura);
    perimetro=operacion2(base,altura);
    cout<<"El perimetro de este rectangulo es "<<perimetro<<endl;
    cout<<"El area de ese rectangulo es " <<area;
    return 0;
}