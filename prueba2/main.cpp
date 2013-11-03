#include <iostream>

using namespace std;

/*ingresar  10 numeros  al final precentar cuantos numeros fueron divisibles entre 5, el promedio,de los divisibles entre 5
y el numero mayor  de todos los numeros.

*/

int main()
{

 int numero,nmax=0,nmin=999999999, prom,div5=0,suma=0;


  for(int i=0; i<10;i++)
{
    cout<<"ingresar un numero";
    cin>>numero;
    cout<<"\n";
    if((numero % 5)==0)

    {
        div5++;
        suma += numero;
          }
          }

   if (div5>0)
  { prom=suma/div5; }

   else
   {
       prom=0;
   }

   if ( numero > nmax)
    { nmax = numero;}

    if else (numero<nmin)
        {nmin=numero;}

cout<<"contador divisible entre 5 es....:"<<div5<<"\n";
cout<<"promedio de numeros divisibles entre 5 es....:"<<prom<<"\n";
cout<<"numero mayor"<<nmax<<"\n";
cout<<"numero menor"<<nmin<<"\n";


    return 0;
}
