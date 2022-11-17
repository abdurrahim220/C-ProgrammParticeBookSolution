#include<stdio.h>
int main()
{
    int a[20],i,b,k,j,temp,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(b=0; b<n-1; b++)
    {
        for(k=0; k<n-1; k++)
        {
            if(a[k]>a[k+1])
            {
                temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }

    for(j=0; j<n; j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}
