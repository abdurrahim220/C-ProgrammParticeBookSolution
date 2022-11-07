#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    int letter ;
    int vowel_count=0;
    int count;
    printf("Enter a string of 10 character : \n");
    for (count =1; count<=10;count++)
    {
        letter = getchar();
        switch (letter)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': vowel_count++;
        }
    }
    printf("Number of Vowels are Encountered = %d\n",vowel_count);

   // getch();
}