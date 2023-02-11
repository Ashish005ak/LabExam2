#include<stdio.h>
#include"readprintf.c"

void setunion(int a[],int n1,int b[],int n2,int c[], int *pn3)
{
    int i,j,k;
    for(i=0,k=0;i<n1;i++,k++)
        c[k]=a[i];
    for(j=0;j<n2;j++)
    {
        for(i=0;i<n1;i++)
            if(a[i]==b[j])
            break;
        if(i==n1)
            c[k++]=b[j];

    }
    *pn3=k;
}
void main()
{
    int a[50],b[50],c[50],n1,n2,n3;
    scanf("%d",&n1);
    readarr(a,n1);
    scanf("%d",&n2);
    readarr(b,n2);
    setunion(a,n1,b,n2,c,&n3);
    printarr(c,n3);
}
