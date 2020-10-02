main()
{
  int x=6,y=8,p=10,q,w,z;
  clrscr();
  y=x++;
  z=++x;
  w=p--;
  q=--p;
  printf("\n y=%d\nz=%d\nw=%d\nq=%d",y,z,w,q);
  getch();
}