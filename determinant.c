#include <stdio.h>
#include <stdlib.h>
int determinant(int**,int);
void cofacter(int**,int**,int,int,int);
void main(){
  int t;
  printf("Enter number of testcases: ");
  scanf("%d",&t);
  while(t--){
    int n,i,j,det;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int** m;
    m=(int**)malloc(sizeof(int*)*n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
      m[i]=(int*)malloc(sizeof(int)*n);
      for(j=0;j<n;j++){
        scanf("%d",&m[i][j]);
      }
    }
    det=determinant(m,n);
    printf("The determinant is %d\n",det);
  }
}
int determinant(int** a,int n){
  int det=0,i,**temp,s=1;
  if(n==1){
    return a[0][0];
  }
  temp=(int**)malloc(sizeof(int*)*n);
  for(i=0;i<n;i++){
    temp[i]=(int*)malloc(sizeof(int)*n);
  }
  for(i=0;i<n;i++){
    cofacter(a,temp,0,i,n);
    det+=s*a[0][i]*determinant(temp,n-1);
    s=-s;
  }
  return det;
}
void cofacter(int** a,int** temp,int r,int c,int n){
  int row,col,i,j;
  row=col=i=j=0;
  for(row=0;row<n;row++){
    for(col=0;col<n;col++){
      if(row!=r&&col!=c){
        temp[i][j++]=a[row][col];
      }
      if(j==n-1){
        j=0;
        i++;
      }
    }
  }
}
