#include<stdio.h>

void readarr(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
}
void main()
{
    int a[50],n,val,loc,i;
    scanf("%d",&n);
    readarr(a,n);
    scanf("%d",&val);
    loc=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            loc=i;
            break;
        }
    }
    printf("%d",loc);
}