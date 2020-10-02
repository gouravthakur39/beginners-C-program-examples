//to read values from a structure varibels
   struct person
   {
      int roll;
      char name[30];     //srt elen /members
       float sal;
    };
void main()
{
struct person p;        //  p is varibale
float x;
clrscr();


printf("enter value for name & sal");
scanf("%d %s %f",&p.roll,p.name,&p.sal);
printf("\n roll=%d\nname=%s\tsalary=%f",p.roll,p.name,p.sal);
getch();
}

