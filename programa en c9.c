#include <stdio.h>
int main () 
{
     /* Manuel Uriel Amador Salinas
    equipo AMUKE
    23 abr 21
    Programa 9. Calcula la calificacion y el promedio
    */


   float c1, c2, c3, c4, c5, c6, c7, tc,p;
   printf ("\n\n Programa Promedio");
   printf ("\n\n Ingrese la primera calificacion");
   scanf ("%f",&c1);
   printf ("\n\n Ingrese la segunda calificacion");
   scanf ("%f",&c2);
   printf ("\n\n Ingrese la tercera calificacion");
   scanf ("%f",&c3);
   printf ("\n\n Ingrese la cuarta calificacion");
   scanf ("%f",&c4);
   printf ("\n\n Ingrese la quinta calificacion");
   scanf ("%f",&c5);
   printf ("\n\n Ingrese la sexta calificacion");
   scanf ("%f",&c6);
   printf ("\n\n Ingrese la septima calificacion");
   scanf ("%f",&c7);
   tc=c1+c2+c3+c4+c5+c6+c7;
   p=tc/7;
   printf ("\n\n La calificacion es %f",tc);
   printf ("\n\n El promedio es %f",p);

   return 0;
}