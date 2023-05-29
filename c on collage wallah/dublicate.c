#include<stdio.h>
int main()
{
    int arr[7]={2,4,6,5,6,3};
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is duplicate elament in arrey\n",arr[i]);
            }
        }
    }
}