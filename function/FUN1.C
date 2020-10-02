//fun without argu & without return value//
void add();
int main(int a)
{
   clrscr();
   a=10;
   printf("\n Function for Add numbers=%d",a);
   add();
   mul();
   return 0;
   getch();
}
void add()
{
   int a,b,sum;
   printf("\n enter value for a&b");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("\n mul=%d",sum);
};
mul()
{
   int a,b,mul;
   printf("\n enter value for a&b");
   scanf("%d%d",&a,&b);
   mul=a*b;
   printf("\n Sum=%d",mul);
}