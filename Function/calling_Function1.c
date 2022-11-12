#include<stdio.h>

int add(int ,int );
int main()
{
    int a=10,b=20,sum;
    sum = add(a,b);

    printf("%d",sum);
}

int add(int a,int b)
{
    return (a+b);
}