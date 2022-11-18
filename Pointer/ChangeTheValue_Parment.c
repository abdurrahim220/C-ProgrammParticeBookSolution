#include<stdio.h>
int change_value(int *x);
int main()
{
    int a =10;
    change_value(&a);
    printf("a = %d",a);
}

int change_value(int *x)
{
    *x +=5;
}