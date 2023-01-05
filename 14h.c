#include<stdio.h>
#include<limits.h>
int main()
{
    int a[10],i,n,l1,l2;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter 10 values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l1=l2=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<l1)
        {
            l2=l1;
            l1=a[i];
        }
        else if(a[i]<l2&&a[i]>l1)
        {
            l2=a[i];
        }
    }
    printf("First smallest value is: %d",l1);
    printf("\nSecond smallest value is: %d",l2);
    return 0;
}