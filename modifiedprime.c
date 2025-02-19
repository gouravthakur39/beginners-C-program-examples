#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    int i=1;
   while(i<=n){
    if(n%i == 0){
       count++;
    }
    i++;
   }
   if(count == 2){
    printf("The number %d is a prime number\n",n);
   }
   else{
    printf("\nThe number %d is not a prime number\n",n);
   }
    return 0;
}