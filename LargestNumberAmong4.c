#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Input Values-: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int Largest;
    if(a>b &&a>c &&a>d)
    Largest=a;
    if(b>a && b>c && b>d)
    Largest=b;
    if(c>a && c>b && c>d)
    Largest=c;
    if(d>a && d>b && d>c)
    Largest=d;

    printf("The Largest between Four number is = %d",Largest);

    return 0;

}