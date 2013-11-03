#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
/* TAREA 3.
Ingresar un numero comprendido entre 50-150 y tiene que ser par, validar el ingreso usando do/while,
luego preguntar si desea continuar usar una variable de tipo char para la respuesta y esta deberá de ser validada
para que solo responda S o N, al final presentar cual fue el numero mayor y menor

*/

int main()
{
    int num=0, cnum=0,cpar=0,mayor=0,menor=999999999;
    char respuesta;

    do{
        cout <<"Ingrese un numero entre 50-150...:  ";
        cin>>num;
            do{
               while (!(num>=50) and (num<=100));

                if ((num % 2) ==0)
                cpar++;

            if (num > mayor)
                {mayor = num;}

            else if  (num < menor)
               {menor = num;}



                cout <<"Desea continuar...:  ";
                respuesta = getche ();
                cout <<"\n";
                cnum++;
                }
            while ( respuesta != 'S' && respuesta != 'N');}
            while (respuesta != 'N');

        cout<<"\n\n";

        cout <<"El total de intentos fue:"<< "\t" <<cnum<<"\n";
        cout <<"El total de numeros pares fue:"<< "\t" <<cpar<<"\n";
        cout<<"\n";
        cout <<"El numero mayor  es:"<<"  \t"<<mayor<<"\n";
        cout <<"El numero menor  es:"<<"  \t"<<menor<<"\n";

    return 0;
}
