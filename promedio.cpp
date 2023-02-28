#include <iostream>
using namespace std;
float result(float a,float b,float c){
float re= 0;
float fin=0;
re=a+b+c;
fin=re/3;
return fin;
}
int main(){
float a,b,c;
float promedio;
cout<<"introduce tu primera nota"<<endl;
cin>>a;
cout<<"introduce tu segunda nota"<<endl;
cin>>b;
cout<<"introduce tu tercera nota"<<endl;
cin>>c;
promedio=result(a,b,c);
cout<<promedio<<endl;
if(promedio<=10.5){
cout<<"DESAPROBADO";
}
else {
    cout<<"APROBADO";
}

    return 0;
}