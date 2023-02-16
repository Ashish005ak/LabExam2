#include<stdio.h>

void insertsort(int x[], int n)
{
    int item,i,j;
    for(i=1;i<n;i++)
    {
        item=x[i];
        for(j=i-1; j>=0 && x[j]>item; j--)
            x[j+1]=x[j];
        x[j+1]=item;
    }
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
    int a[80],n;
    scanf("%d",&n);
    readarr(a,n);
    insertsort(a,n);
    printarr(a,n);
}