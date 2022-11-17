#include<stdio.h>
void swap(int a[],int num);
int main(){
    int n,i,a[20],j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    swap(a,n);
     for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

void swap(int a[],int num)
{
    int i,k,temp;
    for(i=0; i<num-1; i++)
    {
        for(k=0; k<num-1; k++)
        {
            if(a[k]>a[k+1])
            {
                temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }

}
