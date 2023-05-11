#include<stdio.h>
int main()
{
  int n=0;
  int i,a[];
  int x,c=0;
  printf("ENTER SIZE OF ARRAY AND ARRAY ELEMENTS\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("ENTER ELEMENT TO SEARCH\n");
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      printf("FOUND AT INDEX %d",i);
      break;
    }
  }
    if(c==0)
    {
      printf("ELEMENT NOT FOUND");
    }
  return 1;
}
