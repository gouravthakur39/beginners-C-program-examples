#include<stdio.h>
#include<conio.h>

void main() {
  long int num1,num2,nr,dr;
  long int GCD,LCM,rem;
  scanf("%ld %ld",&num1,&num2);
  if(num1>num2){
    nr=num1;
    dr=num2;
    }
   else{
    nr=num2;
    dr=num1;
   }
   rem=nr%dr;
   while(rem!=0){
    nr=dr;
    dr=rem;
    rem=nr%dr;
   }
   GCD=dr;
   LCM=num1*num2/GCD;
   printf("%ld %ld",GCD,LCM);
  }
