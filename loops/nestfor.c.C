/*	1
       212
      32123
     4321234
    543212345*/
void main()
 {
 int i,j,k;
 clrscr();
 for(i=1;i<=5;i++)
    {
    for(j=5;j>=i;j--)
    printf("  ",j);
    for(k=i;k>=1;k--)
    printf("%d ",k);
    for(j=2;j<=i;j++)   //j<=1
    printf("%d ",j);
    printf("\n");
    }
 getch();
 }
