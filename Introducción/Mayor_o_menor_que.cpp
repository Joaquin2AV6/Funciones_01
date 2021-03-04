#include<iostream>
#include<conio.h>
using namespace std;

void Max(int a, int b)
{

   cout<<"\nDigite el primer numero : ";
   cin>>a;
   cout<<"\nDigite el segundo numero : ";
   cin>>b;


   if(a>b){
   cout<<"\nEl numero mayor es = "<<a;}
   else if(a<b){
   cout<<"\nEl numero mayor es = "<<b;
   }
   else
   cout<<"\nERROR";

}

int main()
{
  int a,b;
  cout<<"\nPROGRAMA DE MAYOR QUE"<<endl;
  Max(a,b);


  getch();
  return 0;
}
