#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int num,suma=0,mayor=0,contador=0,cpar=0,prom=0;
    char resp;
    do{
        do{
            cout<<"ingresar un numero entre 1-200...:";
            cin>>num;
            cout<<"\n";
        }  while (!(num>=1) and (num<=200));
            {
                if ((num % 2) ==0);
            }



            if (num > mayor)
              { mayor = num;}


               while(num>0)
               {
             suma =  suma +(num%10);
	    	 num= num/10;
             contador++;
               }


                do {
            cout << "desea continuar : ";
            resp = getche ();

            cout<<"\n";

             } while (!((resp=='S') and (resp=='N')));



         //prom=suma/cpar;



    }while(!(resp=='N'));

    cout<<"la suma de los digitos de los numeros es....:"<<suma<<"\n";
    cout<<"el numenor mayor ingresado es...:"<<mayor<<"\n";
     cout<<"el promedio de los numeros ingresados es....;"<<cpar<<"\n";

    return 0;
}
