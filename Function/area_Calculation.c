#include<stdio.h>
int areaofreact(int b,int l)
{
    int area;
    area = b * l;
    return area;
}
int main()
{
    int b,l;
    printf("Input the base and length = ");
    scanf("%d %d",&b,&l);
    //int b=10,l=20;



    int result = areaofreact (b,l);
    printf("%d\n",result);

    //b=5,l=10;
    // result = areaofreact (b,l);
    // printf("%d\n",result);
}
