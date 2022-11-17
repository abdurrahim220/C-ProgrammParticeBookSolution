#include<stdio.h>
int main()
{
    char ch;
    printf("Type a character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("\n You type on Alphabet");
    else if(ch>'0' && ch<='9')
    printf("\n You type digit!!");
    else 
    printf("\n You type a special character!!");

}
