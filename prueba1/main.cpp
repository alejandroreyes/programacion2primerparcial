#include <iostream>

/*
    PRUEBA I

  ALEJANDRO ARTURO REYES  20941173.

ingresar  el nombre del empleado. las horas trabajadas  el turno luego determinar las horas normales que son
las primeras 40 y las extras mayores que 40.
debera de obtener pago por hora  usando el turno luego un bono el pago bruto  que son la suma de los pagos normales y extras
ihss y total a pagar


TURNO      pn       pe
1         100       130
2         135       140
3         140       150


bono si el empleado es del turno 1 y trbajo  mas de 45 horas el bono es de 300 si no de 100
para calcular el seguro  el pago bruto de mayor a 7000 es de 245  y sino pago el pago bruto por 3.5%.

*/
using namespace std;

int main()
{


    char nombre [30];
    int turno, horas,bono=0;
     double ihss, pb,pn,pe,totalp, hn, he, pnormal, pextra;


    cout << "Ingresar nombre del empleado...: ";
    cin.getline(nombre,30);


    cout << "Ingresar turno del empleado....: ";
    cin >> turno;


    cout << "Ingresar las horas trabajadas.....: " ;
    cin >> horas;


    if (horas>40)
    {
        hn=40;
        he= horas-40;

    }

  else
  {
      hn=horas;
      he=0;
  }


 if ( (turno == 1) )
    {
        pn = 100;
        pe =130; }


    else if ( (turno == 2) )
    {
        pn = 135;
        pe= 140;
}


    else if ( (turno == 3) )
    {
        pn = 140;
        pe = 150; }



       pnormal =  hn*pn;
       pextra=   he*pe;



 if ((horas>45) and (turno == 1))
    {
        bono = 300;
    }

    if(horas<45 and turno==1)
    {
        bono = 100;
    }

  pb  = pnormal+ pextra ;


     if ( pb > 7000)
    {
        ihss = 245;
    }

    else if ( pb <= 7000)
    {
        ihss = pb* 0.035;
    }

     totalp = pb + bono - ihss;




cout<<"\n  INFORME DE PAGO"<<"\n";

cout <<"\nNombre del empleado: " <<nombre << "\nTurno:\t\t     " << turno << "\nHoras trabajadas:    "  << horas;
cout <<"\nPago bruto           "<< pb <<"\n"; cout << "Bono:\t\t     " << bono << "\nIHSS:\t\t     " << ihss <<"\n\n";
cout << "\nTotal a pagar:       " << totalp << "\n" ;



    return 0;
}
