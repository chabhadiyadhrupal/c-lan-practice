#include<stdio.h>
int main()
{
    int arr[6]={1,2,6,5,87,44};
    int max=arr[0];
    int smax=arr[0];
    for(int i=0; i<=5; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];

        }
    }
    for(int i=0; i<=5; i++)
    {
        if(arr[i]!=max&& smax<arr[i])
        {
            smax=arr[i];

        }
    }
    printf("second max nomber is %d",smax);
    
}