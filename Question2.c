#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("\n The enterred %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Average is %d\n",sum/size);
    free(ptr);
    return 0;


}