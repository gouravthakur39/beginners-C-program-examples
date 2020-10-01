#include<stdio.h>                     //We are including the 'stdio.h' header file whcih is important and it consists of many functions like printf and scanf
void main()                           //Our main function is starting here
{ 
 
int a,b,c;                            //We are declaring three integer variable in
printf("Enter two Numbers : ");       //We are printing a text line to show that we want the values of the integers a and b
scanf("%d %d",&a,&b);                 //We are taking in input from the user using the scanf function
c=a+b;                                //We are declaring the relation between integers a, b and c that is the sum of a and b is equal to c
printf("The Sum is %d",c);            //We are printing the sum in the command line
}                                     //Our main function is ending here
