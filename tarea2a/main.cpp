#include <iostream>

using namespace std;

int main()
{
    int numero=0, suma=0, contador=0;


    cout<<"INGRESE EL NUMERO......:";
    cin>>numero;

    /* despues que ingresamos  el numero el ciclo  while lee numeros distintos de 0.
    despues el residuo de esa division se  divide para 10
    y luego se suma  este residuo con los anteriores dos reultados

    */
     while(numero !=0)

        {
	    	suma =  suma +(numero%10);
	    	numero = numero/10;
            contador++;

            }
      cout<<"\n";

    cout <<"LA SUMA DE LOS DIGITOS ES..:"<<suma<<"\n";



    return 0;
}
