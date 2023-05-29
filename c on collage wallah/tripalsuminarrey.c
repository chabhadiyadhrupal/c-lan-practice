#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int count=0;
    for(int j=0; j<=7; j++)
    {
        for(int k=j+1; k<=7; k++)
        {
            for(int i=k+1; i<=7; i++)
            {
                if(x==arr[j]+arr[k]+arr[i])
                count++;
            }
        }
    }
    printf("%d",count);
}