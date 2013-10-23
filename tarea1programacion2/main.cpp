#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

/*
    TAREA DE PROGRAMACION I       ALEJANDRO A. REYES 20941173.
   Ingrese el mes, dia y el año, validar el ingreso de cada uno de los datos:
    El año que sea mayor a 0.
*/

using namespace std;

int main()
{
    int mes, dia, a;

    mes = 0 ;
    dia = 0 ;
    a=0;

         while ( (mes < 0) or (mes > 12) );


         if ((mes%2)==0)

         { cout << "Ingresar dia: ";
          cin >> dia;

        { cout << "Ingresar mes: ";
          cin >> mes;
        }
        while ((dia < 0) and (dia >= 30));

          cout << "Ingresar año: ";
          cin >> a; }

        if((dia>=1) and (dia<=31) and (mes>=1) and (mes<=12) and  (a>0) )

           {  cout<<"fecha es valida....";  }

        else
        {  cout<<"la fecha es invalida..";  }


    cout << "La fecha es el " << dia << " del mes " << mes << " del año " << a << "\n" ;

    return 0;
}


