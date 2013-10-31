#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

/*
ciclo anidado    github.com/rcastillok/programacion2/
elaborar un programa  donde ingresemos un numenor, luego preguntar si deseamos ingresar otro numero,
al finalizar presentar la suma de los numeros  ingresados. al finalizar presentar la suma


*/

int main()
{
   int numero,suma=0;
   char resp;

   do
   { do
       {
       cout<<"ingresar un numenor entre 1-100....";
       cin>>numero;
       } while((numero<1)or (numero>100));

       _flushall();

       do
       {   cout<<"desea continuar.....";
           cin.get(resp); }


           while((resp!='N') and (resp!='S'));

             suma+=numero;
           }while(resp!='N');




    cout<<"\n\n";
   cout<<"final del programa"<<"\n";
   cout<<"suma de los numenor"<<suma<<"\n";

    return 0;
}
