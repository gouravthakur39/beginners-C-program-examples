main()
{
   int a=100,b=200,c=400,d,s,r;
clrscr();
  d=a++;
 printf("d=%d a=%d\n",d,a);

 s=++d;
 printf("s=%d d=%d\n",s,d);

 r=c--;
 printf("r=%d c=%d\n",r,c);

 c=--c;
 printf("c=%d",c);
getch();
}