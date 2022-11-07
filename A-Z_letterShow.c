#include<stdio.h>
int main()
{
    char i;
    for(i='A';i<='Z';i++)
    {
        printf("%c ",i);
    }

    printf("\n");

    char alphabet = 'a';
    while(alphabet<='z')
    {
        printf("%c ",alphabet);
        alphabet++;
    }

    printf("\n");

    char alphabet2 = 'a';
    do
    {
        /* code */
        printf("%c ",alphabet2++);
    } while (/* condition */ alphabet2<='z');

}