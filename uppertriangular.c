#include<stdio.h>

void main()
{
    int a[50][50],m,n,i,j,val=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                if(a[i][j]!=0)
                {
                    val=1;
                    break;
                }
            }
        }
        if(val==1)
            printf("\n not upper triangular");
        else
            printf("\nUpper triangular");
}
//By Ash....:)