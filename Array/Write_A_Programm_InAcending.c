#include<stdio.h>
#include<conio.h>
void sort (int [],int);
void main(void)
{
    int list [size_t];
    int dex, size=0;

    printf("Enter number , 0 to exit\n");
    do{
        printf("Enter number : ");
        scanf("%d",&list[size]);
    }
    while(list[size++]!=0)
    sort(list,--size)
    for(dex=0;dex<size;dex++)
    printf("%d\n",list[dex]);
    
    void sort (int list[],int size)
    {
        int out ,in, temp;
        for(out=0;out<size-1;out++)
        for(in=out+1;in<size;in++)
        if(list[out]>list[in])
        {
            temp = list[in];
            list [in] = list [out];
            list[out]=temp;
        }
    }


}