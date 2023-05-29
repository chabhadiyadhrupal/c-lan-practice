#include<stdio.h>
int main()
{
    int arr[6]={5,6,7,6,2,9};
    int min=arr[0];
    int smin=arr[0];
    for(int i=0; i<=5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];

        }
    }
    for(int i=0; i<=5; i++)
    {
        if (arr[i]!=min&& smin>arr[i])
        {
            smin=arr[i];

        }
    }
    printf("minimum number:->%d",smin);
}