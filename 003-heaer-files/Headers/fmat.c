#include "fmat.h"
int silnia(int n)
{
   int i=2, s=1;
 
   while( i < n+1 )
   {
      s = s * i;
      i = i + 1;
   }
   return s;
}