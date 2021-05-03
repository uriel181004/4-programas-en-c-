#include  <stdio.h>
int  main ()
{
    /* Manuel Uriel Amador Salinas  
    Equipo AMUKE
    30 abr 21
    Programa 7. perimetro de un triangulo
    */

    float valorx, valory, valorz, perimetro;
    printf ("\n\n Programa 7");
    printf ("\n\n Saca el perimetro de un triangulo");
    printf ("\n\n dame el valor1 ");
    scanf ("%f",&valorx); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el valor2 ");
    scanf ("%f",&valory); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el valor3 ");
    scanf ("%f",&valorz);
    perimetro = (valorx+valory+valorz); // Formula matematica para calcular la suma de dos numeros
    printf ("\n la suma de los dos valores es %f", perimetro );

    return  0;
}    