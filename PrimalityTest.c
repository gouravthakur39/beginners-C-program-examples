#include <stdio.h>
#include <math.h>
int main()
{
  int T,N,a;
  scanf("%d",&T);//input the no. of test cases 
  for(int i=0;i<T;i++)
  {
    int k=0;
	  scanf("%d",&N);//input the no. you want to check
    for(int j=2;j<sqrt(N);j++)
    {
      a=N%j;
      if(a==0) 
      {
        k++;
        break;
      }
    }
    
    if(k>0)
    printf("no\n");//it is not a prime no.
    else
    printf("yes\n");//it is a prime no.  
  } 
  return 0;
}