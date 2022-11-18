#include<stdio.h>
int l_N(int *x,int *y)
{
    return ((*x < *y) ? *x : *y);
}
int main()
{
    int a=5 , b=10;
    int *max;
    *max = l_N(&a,&b);
    printf("Large Value = %d",*max);
}