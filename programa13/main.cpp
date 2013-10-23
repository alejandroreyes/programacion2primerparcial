#include <iostream>

using namespace std;

/*
ciclo  for
es para ejecutarlo con contadores y saber cuantas veses se va a ejecutar el programa.

ingresar 5 numeros y determinar  cuantos son divisibles entre 3.


*/

int main()
{

   int numero, cdiv3=0,promedio,suma=0;


for(int i=0; i<5;i++)
{
    cout<<"ingresar un numero entero.....:";
    cin>>numero;
    cout<<"\n";
    if((numero % 3)==0)

    {
        cdiv3++;
        suma += numero;
    }
}
  if (cdiv3>0)
  { promedio=suma/cdiv3; }

   else
   {
       promedio=0;
   }


   cout<<"\n";

  cout<<"contador divisible entre 3 es....:"<<cdiv3<<"\n";
cout<<"promedio de numeros divisibles entre 3 es....:"<<promedio<<"\n";



    return 0;
}
