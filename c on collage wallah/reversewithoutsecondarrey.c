#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0; i<=7; i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=7; i>=0; i--)
    {
        if(i==0)
        {
            printf("%d",arr[i]);

        }
        else
        {
            printf("%d,",arr[i]);
        }
    }
}