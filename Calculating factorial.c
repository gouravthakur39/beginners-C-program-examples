// calculating factorials--
#include <stdio.h>
int main()
{
int n;
int i;
int a=1;
scanf("%d",&n);
if(n<0){
    printf("factorial is 1");
    break
}
for(i=1;i<=n;i++){
   a*=i;
}
printf("%d",a);
}