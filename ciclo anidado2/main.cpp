#include <iostream>

using namespace std;

/*
ingresar 5 numeros pares. validar que el numero sea par.


*/

int main()
{
  int numero,suma=0;

  for(int i=0;i<5;i++)
  { do

  {cout<<"ingresar numero par";
  cin>>numero;

  }while (!((numero%2)==0));


   suma+=numero;

  }
    return 0;
}
