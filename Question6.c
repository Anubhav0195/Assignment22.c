#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float*data;
    printf("Enter the total number of elements:\n");
    scanf("%d",&n);
    data=(float*)calloc(n,sizeof(float));
    if(data == NULL)
    {
        printf("Memory allocation failed!!\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%f",data+i);
    }
    for(i=0;i<n;i++)
    {
        if(*data<*data+i)
        {
            *data = *(data+i);
        }
    }
    printf("Largest number =%f",*data);
    free(data);
    return 0;
}