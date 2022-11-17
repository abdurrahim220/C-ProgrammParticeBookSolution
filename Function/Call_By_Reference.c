#include<stdio.h>
void swap_ref(int *p,int*q)
{
    int temp;
    temp=*p;
    *p = *q;
    *q=temp;

    printf("i=%d j=%d\n",*p,*q);
}
int main()
{
    int p=5,q=10;
    swap_ref(&p,&q);
    printf("p=%d, q=%d",p,q);
}

// void bubble swap_ref(int n,int num[1])
// {
//     int i, j, temp;
//     for((i=1);i<n-1;++i)
//     {
//     for(j=1;i<=n-1;++j)
//         if(num[j-1] = num[j])
//         {
//             temp=num[j-1];
//             num[j-1] = num[j];
//             num[j] = temp;
//         }

//     }
// }