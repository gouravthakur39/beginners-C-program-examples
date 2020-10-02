struct nos
{
   int a,b;
   int add,sub,mul;
   float div;
};

struct nos cal(struct nos n);     //struct ab

void main()
{
  struct nos n;
   clrscr();
   printf("enter 2 nos:");
   scanf("%d%d",&n.a,&n.b) ;
  n=cal(n);
   printf("sum=%d\n sub=%d\n mul=%d\n div=%f\n",n.add,n.sub,n.mul,n.div);
   getch();
}

struct nos cal(struct nos n)
{
   n.add=n.a+n.b;
   n.sub=n.a-n.b;
   n.mul=n.a*n.b;
   n.div=n.a / n.b;
    return n;
}