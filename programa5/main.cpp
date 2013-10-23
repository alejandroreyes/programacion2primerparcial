#include <iostream>

using namespace std;
/*se tiene  que  ingresar la nota del alumno y el del programa  debera  de presentar la observacion usando la siguente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente
*/
int main()
{
   int nota;

   cout<<"ingresar la nota del alumno..>";
   cin>> nota;

   if(nota<60)
   {
       cout<<"reprobado"<<"\n";
   }
   else if(nota<81)
   {
       cout<<"bueno"<<"\n";

   }

   else if(nota<91)
   {
       cout<<"*****muy bueno****"<<"\n";

   }

   else
   {
       cout<<"******sobresaliente*****"<<"\n";

   }
    return 0;
}
