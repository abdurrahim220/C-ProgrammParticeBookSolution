#include<stdio.h>
int r_o(int n);
int main()
{
    int num,rev_n;
    printf("Enter sequence of number : ");
    scanf("%d",&num);

    rev_n = r_o(num);

    printf("Reverse Number of %d is = %d",num,rev_n);

}
int r_o(int n)
{
    int reminder,rev=0;

    while (n!=0)
    {
        reminder = n%10;
        rev = rev*10 + reminder;
        n=n/10;
    }
    return rev;
}