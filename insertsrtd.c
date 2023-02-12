#include<stdio.h>
void insert(int x[],int n, int num)
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
void readarr(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
}
void printarr(int x[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
}
void main()
{
    int a[80],n,item;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&item);
    insert(a,n,item);
    n=n+1;
    printarr(a,n);
}