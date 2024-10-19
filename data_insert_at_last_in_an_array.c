#include<stdio.h>
int main()
{
    int size,i,a[' '],data;
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
    a[size]=data;
    size++;
    printf("your final array is:");
     for(i=0;i<=size-1;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}