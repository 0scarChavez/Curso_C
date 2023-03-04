#include <iostream>
using namespace std;

int suma(int a, int b)
{
    int c = a + b;
    return c;
}

int resta(int a, int b)
{
    int c = a - b;
    return c;
}

int multiplicacion(int a, int b)
{
    int c = a * b;
    return c;
}

int division(int a, int b)
{
    int c = a / b;

    return c;
}

int main()
{
    cout << "ingrese una opcion: "<<endl;
    cout<<"1: Suma"<<endl;
    cout<<"2: Resta"<<endl;
    cout<<"3: Multiplicacion"<<endl;
    cout<<"4: Division"<<endl;
    int opcion;
    int valor1 = 0, valor2 = 0, resultado = 0;
    cin >> opcion;
   
    switch (opcion)
    {
    case 1:
       cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = suma(valor1, valor2);
        cout << "El resultado de la suma es : " << resultado;

        break;
    case 2:
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = resta(valor1, valor2);
        cout << "El resultado de la resta es : " << resultado;

        break;
    case 3:
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = multiplicacion(valor1, valor2);
        cout << "El resultado de la multiplicacion es : " << resultado;

        break;
        ;
    case 4:
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = division(valor1, valor2);
        cout << "El resultado de la division es : " << resultado;

        break;
    default:
        cout << "ingrese una opción valida";
        break;
    }
    return 0;
}
