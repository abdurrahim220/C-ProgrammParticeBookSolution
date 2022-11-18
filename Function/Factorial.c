#include<stdio.h>
#include<conio.h>
long fact(int n)
{
    if(n== 0 || n ==1)
    return 1;
    else
    return (n*fact(n-1));
}
void main()
{
    int n;
    long f;
    pro:
    printf("\n Enter Positive Number: ");
    scanf("%d", &n);

    if(n<0)
    
    goto pro;
    f= fact(n);//Calling the function

    printf("%d! = %1d",n,f);
}