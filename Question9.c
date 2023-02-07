#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int));
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    if(ptr==NULL)
    {
        printf("Memory allocation is failed:\n");
        return 0;
    }
    
}