#include <iostream>

using namespace std;

int main()
{
   int numero,cifra,suma=0,maxi=0,mini=9,contador=0,promedio,par=0,impar=0;
   cout<<"insertar un numero entero";
   cin>>numero;


/* asi numero alreves  y sumar cifras


*/
   while(numero>0)
   {
       cifra = numero%10;

       numero=numero/10;
        suma+=cifra;

        if(cifra>maxi)

    maxi=cifra;

    if (cifra<mini)

    mini=cifra;

    contador++;

    if ((cifra%2)==0)
        par++;
    else
        impar++;

}

promedio=suma/contador;

  cout<<"\n";
  cout<<"suma de las cifras "<<suma<<"\n";
  cout<<"numero mayor"<<maxi<<"\n";
  cout<<"numero menor"<<mini<<"\n";
 cout<<"promedio de cifras:"<<promedio<<"\n";
  cout<<"cifras par "<<par<<"\n";
   cout<<"cifras impar:"<<impar<<"\n";

return 0;

}
