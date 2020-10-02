#define max 20
main()
{
 int i,n,min,num[max];
 clrscr();
 printf("\n how many elements do you wish to enter?");
 scanf("%d",&n);
 printf("enter of arry:\n");
 for(i=0;i<n;i++)   // i<n
 scanf("%d",&num[i]);
 min=num[0];
 for(i=1;i<n;i++)
 {
    if(num[i]<min)
    min=num[i];
 }
 printf("\n the samllest element of the arry is:%d",min);
 getch();
}
