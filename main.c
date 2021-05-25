#include <stdio.h>
#include "pola.h"
#include "objetosc.h"

int main()
{
int a;
int b;
int c;
printf("Podaj dlugosc boku a prostokata: ");
scanf("%d",&a);
printf("Podaj dlugosc boku b prostokata: ");
scanf("%d",&b);

printf("Podaj wysokosc prostopadloscianu: ");
scanf("%d",&c);

printf("Pole prostokata wynosi : %d \n",polep(a,b));
printf("Pole prostopadloscianu wynosi : %d \n",polepp(a,b,c) );
printf("Objetosc prostopadloscianu wynosi : %d \n", objpp(a,b,c));

return 0;
}

