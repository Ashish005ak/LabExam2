#include<stdio.h>
int deletegiven(int x[],int *pn,int item)
{
    int i,j;
    for(i=0;i<*pn;i++)
        if(x[i]==item)
        {
            *pn=*pn-1;
            break;
        }
    for(j=i;j<*pn;j++)
        x[j]=x[j+1];
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
    int a[80],n,item,cnt;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&item);
    deletegiven(a,&n,item);
    printarr(a,n);
}