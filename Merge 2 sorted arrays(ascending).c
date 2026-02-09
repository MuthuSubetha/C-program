#include <stdio.h>
int main() {
    int arr[10],arr2[10],arr3[10];
    int s1, s2, s3;
    int i, j, k;
    printf("No. of elements in arr1:");
    scanf("%d",&s1);
    printf("Array1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("No. of elements in arr2:");
    scanf("%d",&s2);
    printf("Array2:\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    s3=s1+s2;
    for(i=0;i<s1;i++)
    {
        arr3[i]=arr[i];
    }
    for(j=0;j<s2;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    printf("Final array:");
    for(i=0;i<s3;i++)
    {
        printf("%d ",arr3[i]);
    }
    for(i=0;i<s3;i++)
    {
        for(k=0;k<s3-1;k++)
        {
            if(arr3[k+1]<=arr3[k])
            {
                j=arr3[k];
                arr3[k]=arr3[k+1];
                arr3[k+1]=j;
            }
        }
    }
    printf("\nSorted array:");
    for(i=0;i<s3;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}