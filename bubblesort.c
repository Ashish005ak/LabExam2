#include<stdio.h>

void bubble(int x[],int n)
{
    int i,j,flag=1,t;
    for(i=0;i<n-1&&flag;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
                flag=1;
            }
        }
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
    bubble(a,n);
    printarr(a,n);
}