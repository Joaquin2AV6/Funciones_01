#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int Factorial(int a)
{

  int resultado = 1;
  cout<<"\nDigite el numero : ";
  cin>>a;

  for(int i = 1; i<=a;i++){
  resultado = resultado * i;
  }

  cout<<"\nEl factorial del numero es = "<<resultado<<endl;
    system("pause");
    return resultado;
}

int main ()
{
    int a;
    cout<<"\nOBTENIENDO EL FACTORIAL DE UN NUMERO";

    Factorial(a);

    getch();
    return 0;
}
