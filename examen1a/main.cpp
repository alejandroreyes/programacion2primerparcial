#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int num=0,mayor=0,suma=0,cont=0,sumad=0,xdig=0,xnum=num,prom=0;
    char resp;


    do{
        do{
            cout<<"ingresar un numero entre 1-200...:";
            cin>>num;
            _flushall();
            cout<<"\n";
            }while(!((num%2==0) and (num>1 and num<200)));

            sumad=0;
            xnum=num;

            while(xnum > 0)

            { xdig=xnum%10;
              sumad+= xdig;
              xnum=xnum/10;
            }

            cout<<"la suma de los digitos es....:"<<sumad<<"\n";

            suma+=num;
            cont++;

               if (num>mayor)
               { mayor=num; }


               do {
            cout << "desea continuar : ";
              cin.get (resp);
            cout<<"\n";
              _flushall();

             }while ( !(resp=='S' or resp=='N'));

    }while (!(resp=='N'));

    prom=suma/cont;

    cout<<"el numero mayor es..."<<mayor<<"\n";
    cout<<"el promedio de los numeros ingresados es...."<<prom<<"\n";



    return 0;
}
