#include<stdio.h>
int main()
{
    float mark ;
    printf("Enter the number : ");
    scanf("%f",&mark);

    if(mark>=90)printf("A+");
    else if(mark>=80 && mark<=89) printf("A");
    else if(mark>=70 && mark<=79) printf("A-");
    else if(mark>=60 && mark<=69) printf("B");
    else if(mark>=50 && mark<=59) printf("C");
    else if(mark>=40 && mark<=49) printf("D");
    else if(mark<39) printf("Fail!!");
}