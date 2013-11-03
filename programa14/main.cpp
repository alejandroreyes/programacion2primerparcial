#include <iostream>

using namespace std;
/* ingresar la base y el exponente y determinar
la potencia usando ciclo for
*/
int main()
{ int base,exponente,potencia;
    potencia=1;

    cout << "Ingresar la base...:";
    cin>> base;
    cout<<"\n";

    cout <<"ingresar el exponente...:";
    cin>> exponente;
    cout<<"\n";

    for(int i=0;i<exponente;i++)
    {
    potencia=potencia*base;
    }

    cout<<"potencia es....:"<<potencia<<"\n";
    return 0;
}
