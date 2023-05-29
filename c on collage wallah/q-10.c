#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    int x=12;
    for(int j=0; j<=7; j++)
    {
        for(int k=j+1; k<=7; k++)
        {
            if(x==arr[j]+arr[k])
            count++;
        }
    }
    printf("%d\t",count);

}