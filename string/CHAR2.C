main()
{
  char n[3][50];
  int r;
  clrscr();
  printf("enter  3 names=");
  for(r=0;r<3;r++)
  {
     gets(n[r]);
  }
  printf("Result:\n");
  for(r=0;r<3;r++)
  {
    strrev(n[r]);         // strcpy(m[r],n[r]);

    puts(n[r]);            //puts(m[r]);
  }
  getch();
}

