#include<stdio.h>
#include<conio.h>
void main(){
  int i,n,a=9,b=1,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  printf("%d "+a);
  c=a+b;
  a=b;
  b=c;
  }
}
