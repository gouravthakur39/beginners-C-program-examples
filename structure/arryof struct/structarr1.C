//arrays of structure variable
struct student
{
int rollno;
char name[20];
int marks;
};
void main()
{
  struct student s[3];
  int i;
  clrscr();
  printf("enter rollno,name & marks\n");
  for(i=0;i<3;i++)
  scanf("%d%s%d",&s[i].rollno,&s[i].name,&s[i].marks);
  printf("student record.....\n");
  for(i=0;i<3;i++)
  printf("\nrollno=%d\nname=%s\nper=%d",s[i].rollno,s[i].name,s[i].marks);
  getch();
}