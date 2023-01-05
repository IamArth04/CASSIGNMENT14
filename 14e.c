#include<stdio.h>
int main()
{
    int a[10],i,min=999999;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("lowest value is %d",min);
    return 0;
}