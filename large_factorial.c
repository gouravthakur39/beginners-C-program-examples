// c program to find factorial upto input of 5000

#define SIZE 16500

#include <stdio.h>

int main(void)
{
    int ans[SIZE];
    int testcases;
    printf("Enter no of test cases: ");
    scanf("%d", &testcases);
    while(testcases--)
    {
        int num;
        printf("Enter number:");
        scanf("%d", &num);
        for(int i = 0; i < SIZE; i++)
            ans[i] = 0;
        ans[0] = 1;
        int m, carry;
        for(int i = 2; i <= num; i++)
        {
            carry = 0;
            for(int j = 0; j < SIZE; j++)
            {
                m = i * ans[j];
                m += carry;
                ans[j] = m % 10;
                carry = m / 10;
            }
        }
        int i = SIZE - 1;
        while(ans[i] == 0 && i >= 0)
        {
            i--;
        }
        printf("\t%d! =", num);
        while(i >= 0)
        {
            printf("%d", ans[i]);
            i--;
        }
        printf("\n");
    }
    return 0;
}
