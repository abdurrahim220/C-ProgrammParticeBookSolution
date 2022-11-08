#include<stdio.h>
int main()
{
    int vow_ch=0,count;
    char letter;
    printf("Enter a string of 10 characters\n");

    for(count = 1; count<=10;count++)
    {
        letter = getchar();
        if(letter=='a')
        vow_ch++;
        else if (letter == 'e')
        vow_ch++;
        else if (letter == 'i')
        vow_ch++;
        else if (letter == 'o')
        vow_ch++;
        else if (letter == 'u')
        vow_ch++;        
    }

    printf("Number of vowels are Encountered = %d\n",vow_ch);
}