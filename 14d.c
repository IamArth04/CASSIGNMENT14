#include<stdio.h>
int main()
{
    int a[10],i,max=-999999;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Highest value is %d",max);
    return 0;
}