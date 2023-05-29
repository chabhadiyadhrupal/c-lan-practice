#include<stdio.h>
int main()
{
    int arr[7]={4,2,5,2,6,37,85};
    int brr[7];
    for(int i=0; i<=6; i++)
    {
        brr[i]=arr[6-i];
    }
    for(int i=0; i<=6; i++)
    {
        printf("%d\t",brr[i]);

    }
}