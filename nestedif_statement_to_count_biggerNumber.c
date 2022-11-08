#include<stdio.h>
int main()
{
    int n,i,j,m=0;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Number %d = ",i);
        scanf("%d",j);
        if(i==1)
        m=j;
        if(j>m)
        m=j;
    }
    printf("%d is the largest number!!",m);
    return 0;
}