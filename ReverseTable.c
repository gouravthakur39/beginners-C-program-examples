#include <stdio.h>  

int main(){                                             
    int num,ans;
    printf("Enter a number\n");
    scanf("%d",&num);

    for (int i=1; i<=10; i++){                       // Print table
    ans=i*num;
    printf("%d x %d = %d\n",num,i,ans);
  }

    printf("\n\n");
    printf("Reverse");
    printf("\n\n\n");
    
    for (int i=10; i>=1;i--){                        // Print table in Reverse
    ans=i*num;
    printf("%d x %d = %d\n",num,i,ans);
    }
 return 0;
}
