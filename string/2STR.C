main()
{
    char n1[3][100],m[3][100];
    int r;
    clrscr();
    printf("enter 3 name:\n");
    for(r=0;r<3;r++)
     {
      gets(n1[r]);
     }
     printf("result:\n");
     for(r=0;r<3;r++)
     {
	 strcpy(m[r],n1[r]);
	 strrev(m[r]);
	 puts(m[r]);
      }
      getch();
}

