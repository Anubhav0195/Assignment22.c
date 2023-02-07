#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation is wrong\n");
        return 0;
    }
    printf("\nThe entered value :");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Sum of n number is %d",sum);
    free(ptr);
    return 0;
}