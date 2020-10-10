#include <stdlib.h>
#include <stdio.h>

int main()
{
  int r;
  float phi, luas;
  phi=3.14;
  
  printf("Enter circle radius (cm) :",r);
  scanf("%i",&r);
  
  luas=phi*r*r;
  
  printf("Ok.. so circle large is :%f \n",luas);
  system ("pause");
  return 0;
  }
