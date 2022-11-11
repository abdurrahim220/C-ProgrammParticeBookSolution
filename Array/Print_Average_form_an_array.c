#include<stdio.h>
int main()
{
    float N[10]={5,10,15,20,25,30,35,40,45,50};
    int i;
    float Total,Avg;

    for(i=0;i<10;i++)
    {
        Total += N[i];
        printf("Numbers [%d] = %.2f\n",i,N[i]);

    } 
    Avg = Total/10;

    printf("\nAverage Numbers = %.2f",Avg);
}