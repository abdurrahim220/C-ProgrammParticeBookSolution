#include<stdio.h>
int main()
{
    int i,n;
    long sum= 0;

    printf("Input the lust number of the series: ");
    scanf("%d",&n);

    printf("101+103+105+..+%d = ",n);

    for(i=100;i<=n;i+=2)
    {
        // if(i%2==1)
        // {
          sum+=i;
        // }
    }
    printf("%d",sum);
}