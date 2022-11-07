#include<stdio.h>
int main()
{
    int year,r,r1,r2;
    printf("Input Year: ");
    scanf("%d",&year);
    r=year%4;
    r1=year%100;
    r2=year%400;

    if((r=0 && r1!=0) || r2==0)
    {
        printf("Leap Year!!");
    }
    else
    {
        printf("\nThis is not Leap Year!!");
    }
    
}