#include<stdio.h>

void main()
{
    int a[50][50], b[50][50],c[50][50],m1,n1,m2,n2,i,j;
    scanf("%d%d",&m1,&n1);
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&m2,&n2);
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    if(m1!=m2||n1!=n2)
    {
        printf("Addition is not possible");
        goto l1;
    }
    for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
            c[i][j]=a[i][j]+b[i][j];
     for(i=0;i<m1;i++)
     {
        for(j=0;j<n2;j++)
          printf("%d ",c[i][j]);
        printf("\n");
     }
     l1:;
}