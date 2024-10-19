#include<stdio.h>
int main()
{
int r1,c1,r2,c2,m1[' '][' '], m2[' '][' '],m3[' '][' '],i,j,k;
printf("enter order of first matrix: ");
scanf("%d%d",&r1,&c1);
printf("enter order of 2nd matrix: ");
scanf("%d%d",&r2,&c2);
if(c1==r2)
{
printf("enter elements of 1st matrix: ");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        scanf("%d",&m1[i][j]);
    }
}
printf("1st matrix= \n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%3d",m1[i][j]);
    }
    printf("\n");
}
printf("enter elements of 2nd matrix: ");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        scanf("%d",&m2[i][j]);
    }
}
printf("2nd matrix= \n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("%3d",m2[i][j]);
    }
    printf("\n");
}

printf("matrix multiplication= \n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        m3[i][j]=0;
        for(k=0;k<c1;k++)
        {
            m3[i][j]=m1[i][k]*m2[k][j]+m3[i][j];
            
        }
        printf("%3d",m3[i][j]);
    }
    printf("\n");
}
}
else 
{
    printf("matrix multiplication is not possible!");
}
    return 0;
}