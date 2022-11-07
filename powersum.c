#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Input the Lust number of the series:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum +=i*i;
    }
    printf("%d",sum);
    return 0;
}