#include<stdio.h>
int i,j;
void readarr(int a[],int n)
{
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void printarr(int a[], int n)
{
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}