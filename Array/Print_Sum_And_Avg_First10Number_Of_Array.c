#include<stdio.h>
int main()
{
    int N[10] ={1,2,3,4,5,6,7,8,9,10};
    int i;
    float sum = 0,avg;
    for(i=0;i<10;i++)
    {
        sum = sum + N[i];
    }
    avg = sum / 10;

    printf("1+2+3...+10: %.2f\n",sum);
    printf("(1+2+3...+10)/10: %.2f\n",avg);

    return 0;
}