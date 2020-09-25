int n;
void dis(int arr1[n],int arr2[n],int n)
{
    int i,diff=0;
    for(i=0;i<n;i++)
    {
        diff+=pow((arr2[i]-arr1[i]),2);
    }
    printf("\nThe distance is %lf.",sqrt(diff));
}

void pro(int arr1[n],int arr2[n],int n)
{
    int i,prod=0;
    for(i=0;i<n;i++)
    {
        prod=prod+(arr1[i]*arr2[i]);
    }
    printf("\nThe Scalar Product of two Arrays is : %d.",prod);
}
