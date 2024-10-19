#include<stdio.h>
int main()
{
    int size,i,a[' '];
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0;i<=size-1;i++)
    {
        printf ("\nenter the data of array: ");
        scanf("%d",&a[i]);
    }
    printf("your array is: ");
    for(i=size-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }
    return 0;
}