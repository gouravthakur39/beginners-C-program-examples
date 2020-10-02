
/*fn without argument with return type*/
main()
{
int sum;
clrscr();
sum=add();
printf("sum=%d",sum);
getch();
}
add()
{
int x=30,y=40,z;
z=x+y;
return(z);  //return z;
}