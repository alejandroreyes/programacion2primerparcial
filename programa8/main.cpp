#include <iostream>

using namespace std;
/*
se tiene  que ingresar el nombre, la nota del alumno  y  el programa  debera presentar la observacion
usando la siguiente tabla:
1-59 reprobado
60-80 bueno.
81-90 muy bueno
91-100 sobresaliente.
*/
int main()
{
    char nombre [30];
    int nota;

    cout<<"nombre del alumno...";
    cin.getline(nombre,30);


cout<<"nota total de alumno...";
cin>>nota;


  if ((nota>=1) and (nota<=59))
  {
      cout<<"reprobado";

  }

  if ((nota>=60) and  (nota<=80))
  {
      cout<<"bueno";
  }

 if ((nota>=81) and  (nota<=90))
{
    cout<<" muy bueno";

}
 if ((nota>=91) and  (nota<=100))

 {
     cout<<"sobresaliente";

 }

else
{
    cout<<"nota incorrecta";
}

cout<<"\n";
    return 0;
}
