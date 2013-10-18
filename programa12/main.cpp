#include <iostream>

using namespace std;

/* ingresar 5 numeros  y presentar el promedio de pares e  impares, al final  presentar el numero mayor */

int main()
{

  int numero , contador,cpar,cimpar,mayor,menor;
  int sumap, sumai;
  double  promimpares, prompares;

  contador=0;
  cpar=0;
  cimpar=0;
  mayor=0;
  sumai=0;
  sumap=0;
  menor=1000000;

  while(contador<5)
  {
      cout<<"ingresar numeros....";
  cin>>numero;

if ((numero % 2)==0)

{  sumap+=numero; // sumap=sumap+numero
  cpar++;
}

else
{
    sumai+=numero;
    cimpar++;
}

contador++;

   if (numero>mayor)
   {
       mayor=numero;
   }

    if (numero<menor)
    {
        menor=numero;
    }

  } // fin de ciclo

   cout<<"numero mayor es....;"<<mayor<<"\n";
   cout<<"numero menor es....;"<<menor<<"\n";

  if(sumap!=0)

  { prompares=sumap/cpar;
    }

   else{ prompares=0;

   }

     if (sumai!=0)
    {
    promimpares=sumai/cimpar;
     }
     else
    {
      promimpares=0;
    }





cout<< "\n" <<"promedio pares...="<< prompares<<"\n";
cout<<"promedio impares...="<<promimpares<<"\n";


    return 0;
}
