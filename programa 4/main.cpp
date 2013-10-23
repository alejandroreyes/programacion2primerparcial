#include <iostream>

using namespace std;
//ingresar un numero y determinar  si es positivo o negativo  o cero if  //
int main()
{ int numero;

cout<< "ingresar numero...>";
cin>>numero;


if (numero>0)

{
    cout<< " numero es positivo"<<"\n";

}
 else if (numero<0)
 {
      cout<< "el numero es negativo"<<"\n";

 }
else
{
    cout<< "el numero es cero"<<"\n";

}
    return 0;
}
