//backword jump
main()
{
  int i=1;
  clrscr();
  start:printf("%d\n",i);
   i=i+1; //i++
   if(i<=3)
   {
     goto start;
   }
   getch();
}
