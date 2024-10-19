#include<stdio.h>
int main()
{
    int size,i,a[' '],data,p;
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0;i<=size-1;i++)
    {
        printf ("\nenter the data of array: ");
        scanf("%d",&a[i]);
    }
    printf("your array is: ");
    for(i=0;i<=size-1;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\nenter data to insert: ");
    scanf("%d",&data);
    printf("enter the insertion position:");
    scanf("%d",&p);
    for(i=size-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
   a[p-1]=data;
    printf("your final array is:");
     for(i=0;i<=size;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}