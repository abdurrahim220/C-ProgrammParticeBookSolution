#include<stdio.h>
int main()
{
    int i,j,row,column,product[5][5];
    printf("Multiplication Table\n");
    // for(j=1;j<=5;j++)
    // printf("%d ",j);
    printf("\n...........\n");

    for(i=0;i<5;i++)
    {
        row = i+1;
        //printf("%d",row);
        for(j=1;j<=5;j++)
        {
            column=j;
            product[i][j]=row*column;
            printf("%3d",product[i][j]);
        }printf("\n");
    }
    return 0;
}