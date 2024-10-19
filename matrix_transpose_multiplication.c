#include<stdio.h>
int i,j,k;
void transpose(int a[' '][' '],int b[' '][' '],int r, int c)
{

printf("transpose matrix= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        b[j][i]=a[i][j];
    }
}
for(i=0;i<c;i++)
{
    for(j=0;j<r;j++)
    {
        printf("%3d",b[i][j]);
}
     printf("\n");
}
}
void mul(int a[' '][' '], int b[' '][' '],int m[' '][' '],int r1 ,int c1,int r2,int c2)
{
 
    if(c1==r2)
    {
   printf("\nmatrix multiplication= \n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
       m[i][j]=0;
       int k;
       for(k=0;k<c1;k++)
       {
        m[i][j]=a[i][k]*b[k][j]+m[i][j];
       }
       printf("%3d",m[i][j]);
    }
    printf("\n");
}
    }
    else 
    {
        printf("multi is not possible!");
    }
}
int main()
{
    int r,c,a[' '][' '],b[' '][' '],m[' '][' '];
    printf("enter order of matrix: ");
scanf("%d%d",&r,&c);
printf("enter elements of matrix: ");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf(" matrix= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%3d",a[i][j]);
    }
    printf("\n");
}
transpose(a,b,r,c );
mul(a,b,m,r,c,c,r);
    return 0;

}