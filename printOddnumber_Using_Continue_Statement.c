#include<stdio.h>
int main()
{
    register int count;
    for((count)=1;count<=30;count++)
    {
        if((count%2)==1)//this will show even number;
        //if((count%2)==0)// this will show odd number;
        continue;
        printf("%d\t",count);
    }
    return 0;
}