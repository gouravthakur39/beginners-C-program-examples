struct Part
{
  	char type;
  	int qty;
};
struct Vehicle
{
	char maruti[20];
	struct Part b;
};
main()
{
struct Vehicle v1;
//v1.b.qty=300;
clrscr();
printf("Enter value for qty");
scanf("%d",&v1.b.qty);
printf("qty=%d",v1.b.qty);
getch();
}