#include<stdio.h>
int main(){
    int a[4],i;
    printf("Enter 4 values: ");
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The values stores into the array in reverse order: ");
    for(i=3;i>=0;i--)
    {
       printf(" %d",a[i]);
    }
    return 0;
}