#include<stdio.h>
int F_max_min(int a[],int n);
int buubleShort(int a[],int num);
int main()
{
    int a[1000],n,i,j,sort;
    printf("Enter Size of the array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Arrays Input Values Are : ");
    for(j=0; j<n; j++)
    {
        printf("%d\t",a[j]);
    }
    sort = buubleShort(a,n);
    printf("\nAfter Sorting : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    F_max_min(a,n);
}

int F_max_min(int a[],int n)
{
    int max,min,i;
    max = min = a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])
            min = a[i];
        if(max<a[i])
            max = a[i];
    }
    printf("\nMinimum of this array : %d\n",min);
    printf("Maximum of this array : %d\n",max);
}

int buubleShort(int a[],int num)
{
    int i,k,temp;
    for(i=0; i<num-1; i++)
    {
        for(k=0; k<num-1; k++)
        {
            if(a[k]>a[k+1])
            {
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
}
