#include<stdio.h>

int max(int n1,int n2);
int min(int n1,int n2);

int main()
{
    int num1,num2,maximum,minimum;
    printf("Input the Values : ");
    scanf("%d %d",&num1, &num2);

    maximum = max(num1,num2);
    minimum = min(num1,num2);

    printf("Maximum is = %d\n",maximum);
    printf("Minimum is = %d\n",minimum);
}

int max(int n1,int n2)
{
    return (n1>n2) ? n1 : n2; 
}
int min(int n1,int n2)
{
    return (n1>n2) ? n2 : n1;
}