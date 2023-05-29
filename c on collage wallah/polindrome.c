#include <stdio.h>
int pallindrome(int arr[], int n) {
   int i, j, flag = 0;
   for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--) {
      if(arr[i]!=arr[j]) {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   return 0;
   else
   return 1;
}
int main() {
   int arr[7] = {1, 2, 2, 3, 2, 2, 1};
   int n = 7;//sizeof(arr)/sizeof(arr[0]);
   if(pallindrome(arr, n)) {
      printf("Array is pallindrome");
   }
   else
      printf("Array is not pallindrome");
   return 0;
}