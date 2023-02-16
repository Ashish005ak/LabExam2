#include<stdio.h>

void selectsort(int x[], int n)
{
    int i,j,indx,t;
    for(i=n-1;i>0;i--)
    {
        indx=0;
        for(j=1;j<=i;j++)
            if(x[j]>x[indx])
                indx=j;
            t=x[indx];
            x[indx]=x[i];
            x[i]=t;
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
    int a[50],n;
    scanf("%d",&n);
    readarr(a,n);
    selectsort(a,n);
    printarr(a,n);
}