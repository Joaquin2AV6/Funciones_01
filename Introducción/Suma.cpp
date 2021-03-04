#include<iostream>
#include<conio.h>
using namespace std;
void suma (int a, int b)

{
    int c;
    c = a + b;
    cout<<"\nEl resultado es = "<<c<<endl;
}

int main()
{
   int a,b,c;

   cout<<"\nESTE PROGRAMA REALIZA LA SUMA DE DOS DIGITOS"<<endl;
   cout<<"\nDIGITE UN NUMERO : ";
   cin>>a;

   cout<<"\nDIGITE EL SIGUIENTE NUMERO : ";
   cin>>b;

   suma(a,b);//Llamando a la funcion

   getch();
   return 0;
}
