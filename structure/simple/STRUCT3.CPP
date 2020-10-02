#include<stdio.h>
#include<conio.h>


struct student
{
    char name[10];
    int rn;
    int marks;
};

  void main()
  {
     struct student s1={ "shgd",34,56};
     struct student s2={"sd", 5,78};
     clrscr();
     printf(" \n\n name is: %s",s1.name);
     printf(" \n rn is: %d",s1.rn);
     printf(" \n marks is: %d\n",s1.marks);
     printf(" \n\n name is: %s",s2.name);
     printf(" \n rn is: %d",s2.rn);
     printf(" \n marks is: %d\n",s2.marks);

     printf("\n Address of s1 :");
     printf(" \n address of name is: %u",&s1.name);
     printf(" \n address of rn is: %u",&s1.rn);
     printf(" \n address of marks is: %u\n",&s1.marks);
     printf("\n Address of s2 :");
     printf(" \n address of name is: %u",&s2.name);
     printf(" \n address of rn is: %u",&s2.rn);
     printf(" \n address of marks is: %u",&s2.marks);

     getch();


  }