#include<stdio.h>
int main()
{
    int i,N;
    long sum = 0;

    printf("Input the lust number of the series: ");
    scanf("%d",&N);

    printf("1*1 + 2*2 + 3*3 +........+ %d*%d = ",N,N);

    for(i=1;i<=N;i++)
    {
        sum += i*i;
    }

    printf("%d",sum);

    return 0;
}