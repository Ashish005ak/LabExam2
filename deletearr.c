#include<stdio.h>
#include"readprintf.c"
void deletegiven(int x[],int *pn,int item)
{
    int i,j;
    for(i=0;i<*pn;i++)
        if(x[i]==item)
        {
            *pn--;
            break;
        }
    for(j=i;j<*pn;j++)
        x[j]=x[j+1];
}

void main()
{
    int a[80],n,item;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&item);
    deletegiven(a,&n,item);
   printarr(a,n);
}