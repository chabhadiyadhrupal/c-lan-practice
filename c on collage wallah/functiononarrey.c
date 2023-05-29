#include<stdio.h>
void global(int arr[])
{
int temp=arr[0];
arr[0]=arr[1];
arr[1]=temp;
}
int main()
{
    int arr[2]={2,6};
printf("before %d\t%d\n",arr[0],arr[1]);
global(arr);
printf("after  %d\t%d\n",arr[0],arr[1]);
}