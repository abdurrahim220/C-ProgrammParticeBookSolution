#include<stdio.h>
int main()
{
    int year = 1;
    float amount = 5000, value, inrate = .10 ;

    printf("Year   Amount\n");

    for(year = 1; year<=5; year++)
    {
        printf(" %.d     %.2f\n",year,amount);

        value = amount + inrate * amount;
        amount = value;

    }

}