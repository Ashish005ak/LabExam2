#include<stdio.h>

void readarr(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
}
void main()
{
    int a[50],n,i,sum=0;
    scanf("%d",&n);
    readarr(a,n);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%d",sum);
}
//By Ash...:)