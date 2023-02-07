#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n,max=-987647,min=987647;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the value %d:",i+1);
        scanf("%d",ptr+i);
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
        if(*(ptr+i)<min)
        {
            min=*(ptr+i);
        }
    }
    printf("\n Minimum =%d \n Maximum=%d",max,min);
    free(ptr);
    return 0;
}
    