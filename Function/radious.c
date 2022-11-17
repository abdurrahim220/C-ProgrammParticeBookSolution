#include<stdio.h>
#define PI 3.14
int cube(int i);
int main()
{
    int cube_r,r,volume;
    printf("Enter the values of the radios: ");
    scanf("%d",&r);
    cube_r = cube(r);
    volume = (4*PI * cube_r)/3;

}

int cube(int i)
{
    return (i * i * i);
}