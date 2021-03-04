#include<iostream>
#include<conio.h>
using namespace std;

int Max(int a, int b, int c)
{

   cout<<"\nDigite el primer numero : ";
   cin>>a;
   cout<<"\nDigite el segundo numero : ";
   cin>>b;
   cout<<"\nDigite el tercer numero : ";
   cin>>c;

   if(a>b){c = a;
   cout<<"\nEl numero mayor es = "<<a;
   }
   else if(a<b){ b = c;
   cout<<"\nEl numero mayor es = "<<b;
   }
   return c;
}

int main()
{
  int a,b,c;
  cout<<"\nPROGRAMA DE MAYOR QUE"<<endl;
  Max(a,b,c);


  getch();
  return 0;
}
