#include<stdio.h>

void main()
{
    int a[50],n,i,big;
    scanf("%d",&n);
    readarr(a,n);
    big=a[0];
    for(i=0;i<n;i++)
        if(a[i]>big)
        big=a[i];
    printf("%d",big);
}
void readarr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}