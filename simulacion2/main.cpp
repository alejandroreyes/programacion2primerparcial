#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;
/*
ingresar un numero este se tiene que validar que solo sea par o divisible entre 5 devera de contar cuantos son pares y cuantos
son divisibles entre 5 tiene que preguntar si desea continuar,validar la respuesta solo que sea S y N.

obterner el numero mayor de los numeros que se ingresaron, obtener el promedio de los numeros que fueron mayor a 100
desarrollar el programa usando ciclo while estructuras de condicion.
se tomara en cuenta el orden, identado, el nombre de las variables y eficiencia del programa.
*/




int main()
{
    int num=0,par=0,div5=0,mayor=0,menor=99999,mayorcien=1,suma=0;
    char resp;
    int prom=0,cnum=0;


    do
    {
        do{
        cout<<"ingresar un numero que sea par o divisible entre 5...:";
        cin>>num;
        cout<<"\n";

            cnum++;
        }while(!(num%2==0 or num%5==0));

         if(mayor<num)

         {mayor=num; }

         if (menor>num)

         {menor=num;  }

           do
           { cout<<"desea continuar (S/N)...:";
           cin.get(resp);
           cout<<"\n";
           }while(!(resp=='S' or resp=='N'));


           if (num%5==0)
           { div5+=1; }

           if(num%2==0)
           { par+=1; }

           if (num<100)
           { mayorcien+=1;
              suma+=suma;
              }
      prom =(suma/mayorcien);

    }while(!(resp=='N'));

     cout<<"\n";

    cout<<"numeros pares...:"<<par<<"\n";
    cout<<"\n";
    cout<<"numeros divisibles entre 5...:"<<div5<<"\n";
    cout<<"\n";
    cout<<"numeros mayores...:"<<mayor<<"\n";
    cout<<"\n";
    cout<<"numeros menores...:"<<menor<<"\n";
    cout<<"\n";
    cout<<"promedio de numeros mayores a 100...:"<<mayorcien<<"\n";
    cout<<"\n";
    cout<<"El total de intentos fue:"<<cnum<<"\n";


    return 0;
}
