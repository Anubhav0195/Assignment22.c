#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i,size=0,sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("\nThe entered %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum =sum+*(ptr+i);
    }
    printf("Sum is %d\n",sum);
    free(ptr);
    return 0;
}