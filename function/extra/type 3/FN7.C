float mult();
void main()
{
 float s;
 clrscr();
 s=mult();
 printf("\n s=%f",s);
 getch();
}
float  mult()
{
float x=1.2,y=1.2,z=1.2;
float mult;
mult=x*y*z;
return(mult);
}