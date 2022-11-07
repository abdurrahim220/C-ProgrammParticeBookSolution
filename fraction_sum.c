#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float sum = 0.0 ,p,t;
    
    printf("Input the lust number of the series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p= pow(2,i);

        t=1/p;
        sum += t;
    }
    printf("%f",sum);
    return 0;
}