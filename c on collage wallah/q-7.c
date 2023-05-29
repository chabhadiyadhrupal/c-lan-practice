#include<stdio.h>
int main(){
 int arr[7]={1,2,6,4,5,8,9};
 for(int i=0; i<=6; i++)
 {
    if(i%2!=0)
    {
        arr[i]=arr[i]*2;

    }
    else
    {
        arr[i]=arr[i]+10;
    }

 }
 for(int i=0; i<=6; i++)
 {
    printf("%d \t",arr[i]);

 }
}
