      // working with pointers to pointers

      #include<stdio.h>
      #include<conio.h>
      void main()
      {
	 char ch,*p1;
	 int **p;
	 clrscr();
	 ch='a';
	 p1=&ch;
	 p=&p1;

	 printf("\n character is:%c",ch);
	 printf("\n address of ch is:%u",p1);
	 printf("\n  address of p1 is %u",p1);
	 printf("\n value of p1 is %u",*p1);

	 printf("\n character is:%c",*p1);
	 printf("\n address of p is:%u",p);
	 printf("\n value of p is %u",**p);
	 getch();
     }

