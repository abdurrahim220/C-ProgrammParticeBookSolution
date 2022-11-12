#include<stdio.h>
int func1();
int func2();
int main()
{
    int a = func1();
    int b = func2();

    printf("%d\n",a);
    printf("%d",b);

    //getch();

}
int func1()
{
    int i=10;
    return i;
}
int func2()
{
    int i=20;
    return i;
}
