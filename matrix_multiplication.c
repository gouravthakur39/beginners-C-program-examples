#include<stdio.h>
#include<conio.h>
int main() {
	int n;
	int i,j,k;
	printf("Give the size of matrices.\n");
	scanf("%d",&n);
	int Mat1[n][n],Mat2[n][n],Mat3[n][n];
	printf("Enter elements of first matrix:\n");
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  scanf("%d",&Mat1[i][j]);
	 }
	printf("Give elements of second matrix:\n");
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  scanf("%d",&Mat2[i][j]);
	 }
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	   {
	     Mat3[i][j]=0;
	     for(k=0;k<n;k++)
	     Mat3[i][j]+= Mat1[i][k]*Mat2[k][j];
	    }
	 }
	printf("Multiplication of matrices first and two is:\n");
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  printf("%d\t",Mat3[i][j]);
	  printf("\n");
	 }
	return 0;
	}
