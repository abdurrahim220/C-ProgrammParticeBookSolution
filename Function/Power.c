#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int x,y;
    long z;
    printf("Enter the Value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);

    z = pow(x,y);
    printf("The result of x to the power y is : %d",z);
    return 0;
}