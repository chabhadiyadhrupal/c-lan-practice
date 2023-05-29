#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int sumodd=0,sumeven=0,total;
    for(int i=0; i<=4; i++)
    {
        if(i%2==0) sumeven=sumeven+arr[i];
        else if(i%2!=0) sumodd=sumodd+arr[i];

    }
    printf("%d\t%d ",sumeven,sumodd);
    total=sumeven-sumodd;
    printf("%d",total);
}