#include<stdio.h>
void main()
{
    int n,i,j,a[50][50]={1};
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j!=0||j!=i)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}