#include<stdio.h>

void setintersection(int a[],int n1,int b[], int n2,int c[],int *pn3)
{
    int i,j,k=0;
   for(i=0;i<n1;i++)
   {
    for(j=0;j<n2;j++)
        if(a[i]==b[j])
            break;
        if(j<n2)
            c[k++]=a[i];
   }
   *pn3=k;
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
    int a[50],b[50],c[50],n1,n2,n3;
    scanf("%d",&n1);
    readarr(a,n1);
    scanf("%d",&n2);
    readarr(b,n2);
    setintersection(a,n1,b,n2,c,&n3);
    printarr(c,n3);
}