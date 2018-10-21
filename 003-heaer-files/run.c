#include <stdio.h>
#include "Headers/fmat.h"
 
int main()
{
   int liczba,s; 
 
   printf("Podaj liczbe: ");
   scanf("%d",&liczba);
   s = silnia(liczba);
   printf("Silnia z %d wynosi %d\n",liczba,s);
 
   return 0; 
}