#include<stdio.h>
//#include<conio.h>

void main()
{
    int i,n;
    //clrscr();
    printf("How many ever number : ");

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\t",i);

    }
}