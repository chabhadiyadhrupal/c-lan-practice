#include <stdio.h>

int main() 
{
   int n, sequence=1;
    printf("Enter the length of Series: ");
   scanf("%d", &n);
   
   while(n!=0)
   {
   	printf("%d ", sequence);
   	sequence*=2;
   	n-=1;
   }
   return 0;
}
