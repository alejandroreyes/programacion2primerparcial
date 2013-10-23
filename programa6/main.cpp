#include <iostream>

using namespace std;
/*ingresar el nombre del empleado  y el turno  y horas luego determinar el pago por hora, pago bruto, ihss y total a pagar
turno 1=100, turno 2=150, turno 3=190  para el seguro si el salario es arriba de 7000 es igual  245 y si no decucir del salario
bruto  el 3.5%.
*/


int main()
{

    char nombre[30];
    int horas, turno, pxh;
    double ihss, tp, pb;

    cout<< "Ingresar el nombre: ";
    cin.getline(nombre,30);

    cout << "Ingresar turno: ";
    cin >> turno;

    cout << "Ingresar horas: ";
    cin >> horas;

    if (turno==1){
        pxh=100;
    }
    else if(turno==2){
        pxh=150;
    }
    else if( turno==3){
        pxh=190;
    }
    else{
        pxh=0;
    }

    pb= pxh*horas;

    if (pb >= 7000){
        ihss=245;
    } else{
        ihss= pb * 0.035;
    }

    tp=pb-ihss;

    cout << endl <<"Nombre de Empleado: " << nombre << endl;
    cout << "Pago por hora: " << pxh << endl;
    cout << "Pago bruto: " << pb << endl;
    cout << "Seguro Social: " << ihss << endl;
    cout << "Total a pagar: " << tp << endl;

    return 0;


    }


