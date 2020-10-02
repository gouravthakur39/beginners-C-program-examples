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
     struct student s[3];
     int i;
     clrscr();
     for(i=0;i<3;i++)
      {   printf("\n enter name,rn,marks:");
	   scanf("%s%d%d",&s[i].name,&s[i].rn,&s[i].marks);
      }

     for(i=0;i<3;i++)
   { printf(" \n\n name is: %s",s[i].name);
     printf(" \n rn is: %d",s[i].rn);
     printf(" \n marks is: %d\n",s[i].marks);
    }

    printf("\n Address of :");
     for(i=0;i<3;i++)
     {
       printf(" \n address of name is %d:%u\n",i,&s[i].name);
       printf("\n address of rn is %d:%u\n",i,&s[i].rn);
       printf("\n address of marks is %d:%u",i,&s[i].marks);
      }
       getch();
  }

