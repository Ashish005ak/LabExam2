#include<stdio.h>
#include"readprintf.c"
void insertsort(int x[],int n, int num)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(x[i]>num)
            x[i+1]=x[i];
        else
            break;
    }
    x[i+1]=num;
}
void main()
{
    int a[80],n,item;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&item);
    insertsort(a,n,item);
    n=n+1;
    printarr(a,n);
}