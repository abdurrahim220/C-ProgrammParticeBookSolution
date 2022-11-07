#include<stdio.h>
void main()
{
    int count=1;
    P : if(count>=30)
    goto B;

    else
    {
        printf("%d\t",count);
        count += 2;

        goto P;
    }
    B:
   // getw ();
}