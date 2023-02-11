#include<stdio.h>
#include"readprintf.c"
void deletegiven(int x[],int n,int item)
{
    int i,j,cnt=0;
    for(i=0;i<n;i++)
        if(x[i]==item)
        {
            cnt++;
            break;
        }
    if(cnt==1)
    {
        n=n-1;
        for(j=i;j<n;j++)
            x[j]=x[j+1];
    }
}

void main()
{
    int a[80],n,item;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&item);
    deletegiven(a,n,item);
    n=n-1;
   printarr(a,n);
}