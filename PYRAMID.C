#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,k,l,x,y,z,a;
 
 for(i=1;i<=5;i++)
 {
    for(j=5;j>=i;j--)
    { printf("*");
      }
     for(k=2;k<=i;k++)
     { printf("  ");
	  }
     for(l=5;l>=i;l--)
    { printf("*");
      }

   printf("\n");
 }
 for(x=2;x<=5;x++)
 {
    for(y=1;y<=x;y++)
    { printf("*");
      }
     for(z=5;z>x;z--)
     { printf("  ");
	  }
     for(a=1;a<=x;a++)
    { printf("*");
      }

   printf("\n");
 }
 getch();
}
