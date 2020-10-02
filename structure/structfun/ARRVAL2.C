
#include<stdio.h>
#include<conio.h>
   struct person
    {
	char name;
	int age;
     };

     void display( int a);

     void main()
     {
	struct person p;
	clrscr();

	printf("enter name and age\n");
	scanf("%s%d",&p.name,&p.age);

	display(p.age);
	getch();

     }

     void display(int a)
     {
	if(a>=60)
	printf("senior citizen");
	else
	if(a>=30&&a<60)
	printf("person of middle age");
	else
	if(a>=15&&a<30)
	printf("younger citizen");
	else
	printf("teenager citizen");
     }
 //    getch();


/*
  //passing structure variable to a function
  struct employee
  {
     int eno;
     char ename[10];
     int esal;
 };

 void display(struct employee e);

 void main()
 {
   struct employee e1;
   clrscr();

   printf("enter no,name,salary:\n");
   scanf("%d%s%d",&e1.eno,&e1.ename,&e1.esal);
   display(e1);
   getch();
}

void display(struct employee e)
{
    printf("%d%s%d",e.eno,e.ename,e.esal);
} */

/*


//Returning structure variable

struct nos
{
   int a,b;
   int add,sub,mul;
   float div;
};

struct nos cal(struct nos n);

void main()
{
   struct nos n;
   clrscr();
   printf("enter 2 nos:");
   scanf("%d%d",&n.a,&n.b) ;
   n=cal(n);
   printf("sum=%d\n sub=%d\n mul=%d\n div=%f\n",n.add,n.sub,n.mul,n.div);
   getch();
}

struct nos cal(struct nos n)
{
   n.add=n.a+n.b;
   n.sub=n.a-n.b;
   n.mul=n.a*n.b;
   n.div=n.a/n.b;
    return n;
}
  */

//Prog using structure and pointers...

 /*

struct nos
{
   int a,b;
   int add,sub,mul;
   float div;
};

struct nos cal(struct nos *n);

void main()
{
   struct nos *n;
   int no;
   clrscr();
   printf("enter 2 nos:");
   scanf("%d%d",&n->a,&n->b) ;

   cal(n);
   printf("sum=%d\n sub=%d\n mul=%d\n div=%f\n",n->add,n->sub,n->mul,n->div);
   getch();
}

struct nos cal(struct nos *n)
{
   n->add=n->a+n->b;
   n->sub=n->a-n->b;
   n->mul=n->a*n->b;
   n->div=n->a/n->b;
    return (*n);
}

/*

  //Enumeration

  enum colour { blue,black,green,red,pink};
  void main()
  {
      enum colour c1,c2;
      clrscr();
      c1=blue;
      c2=green;
      if (c1==c2)
      printf("both r equal");
      else
      printf("not equal");
      getch();
}

*/

/*
union data
{
    int i;
    char c;
    float f;
};

void main()
{
   int ch;
   union data d;
   clrscr();
   printf(" 1.int 2.float 3.char\n");
   scanf("%d",&ch);

   switch(ch)
   {
      case 1:printf("enter int vaule\n");
	     scanf("%d",&d.i);
	     printf("int value is %d",d.i);
	     break;
      case 2:printf("enter float vaule\n");
	     scanf("%f",&d.f);
	     printf("float value is %f",d.f);
	     break;
     case 3:printf("enter char vaule\n");
	    scanf("%s",&d.c);
	    printf("char value is %c",d.c);
	     break;
    }
    getch();
 }*/