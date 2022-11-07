#include<stdio.h>
int main()
{
    int i,N;
    long sum =0;
    printf("Input Last Number of the Series: ");
    scanf("%d",&N);

    for(i = 1; i<=N;i+=2)
    {
        sum += i;
    }
    printf("%d",sum);

    return 0;
}