void add(float a,float b,float c)
{
float add=0;
add=a+b+c;
printf("\n add=%f",add);
}
float mult()
{
float x=1.2 ,y=1.2,z=1.2;
float mult;
mult=x*y*z;
return(mult);
}
void main()
{
float x,y,z;
float m;
clrscr();
printf("enter 3 float values\n");
scanf("%f%f%f",&x,&y,&z);
add(x,y,z);
m=mult();
printf("\n m=%f",m);
getch();
}
