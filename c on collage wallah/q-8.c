#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    int count=0;
    printf("enter your x value between the 1to7:->");
    scanf("%d",&x);
    for(int i=0; i<=6; i++)
    {
        if(arr[i]>x)
        {
            count++;

        }
    }
    printf(" count is %d",count);

}