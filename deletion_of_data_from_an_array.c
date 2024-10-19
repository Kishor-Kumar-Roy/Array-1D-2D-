#include<stdio.h>
int main()
{
    int size,i,a[' '],p,data,j;
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
    printf("\nenter data to search:");
    scanf("%d",&data);
    for(i=0;i<size;i++)
    {
        if(a[i]==data)
        {
            p=1;
            for(j=i+1;j<size;j++)
            {
                a[j-1]=a[j];
                
            }
        }
    }
    size--;
    if(p==0)
    {
        printf("data not found");
        size++;
    }
    else
    {
        printf("data found");
    }
    printf("\nYour final array is:");
    for(i=0;i<size;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}