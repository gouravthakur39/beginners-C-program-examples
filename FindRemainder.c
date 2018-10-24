#include<stdio.h>
int main ()
{
  int t, A, B;
  int rem = 0;
  scanf ("%d", &t);

  while (t--)
    {

      scanf ("%d%d",&A,&B);
      rem = A % B;
      printf("%d\n", rem);
      }

  return 0;
}
