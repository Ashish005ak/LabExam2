#include<stdio.h>

void main()
{
    int a[50][50], b[50][50],c[50][50]={0},m1,n1,m2,n2,i,j,k;
    scanf("%d%d",&m1,&n1);
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&m2,&n2);
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    if(n1!=m2)
    {
        printf("Multiplication is not possible");
        goto l1;
    }
    for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
            for(k=0;k<m2;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    l1:;
}
