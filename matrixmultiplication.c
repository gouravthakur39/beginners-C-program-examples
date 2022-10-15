
//DMA:using single pointer
#include<stdio.h>
 #include<stdlib.h>
void mul(int *a,int *b,int *c,int r1,int c1,int c2)//single pointers used
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            *(c+(i*c2)+j)=0;
            for(int k=0;k<c1;k++)
            {
                *(c+(i*c2)+j)+=*(a+(i*c1)+k)*(*(b+(k*c2)+j));
            }
        }
    }
}
int* allocat(int r,int c)//dynamic allocations
{
    int *ptr;
    ptr=malloc(r*c*sizeof(int));
    return ptr;
}
void inp(int *ptr,int r,int c)//inputs
{
    for(int i=0;i<r*c;i++)
    {
        scanf("%d",ptr++);//or ptr+i
    }
}
void out(int *ptr,int r,int c)//output the matrix
{
    for(int i=0;i<r*c;i++)
    {
        printf("%d ",*(ptr++));
        if(i%3==2)
            printf("\n");
    }
}
int main()
{
    int r1,c1,r2,c2;
    int *ma,*mb,*mc;//single pointers used
    printf("Enter the row1 col1 ro2 col2\n");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    ma=allocat(r1,c1);//memory allocated dynamically
    mb=allocat(r2,c2);
    mc=allocat(r1,c2);
    printf("Enter elements of first\n");
    inp(ma,r1,c1);
    printf("Enter elements of second\n");
    inp(mb,r2,c2);
    mul(ma,mb,mc,r1,c1,c2);//multiplied
    printf("Multiplied matrix:\n");
    out(mc,r1,c2);
    return 0;
}
