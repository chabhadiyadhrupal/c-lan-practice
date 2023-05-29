#include<stdio.h>
int main()
{
    int array[100], position, i, n;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n", n);
    for(i= 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &position);
    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else 
        // updating the locations with next elements
        for(i = position-1; i < n-1; i++)
        array[i] = array[i+1];
    printf("\n\nResultant array is: ");
    /* 
        the array size gets reduced by 1 
        after deletion of the element
    */ 
    for(i = 0; i < n-1;i++) 
        printf("%d  ", array[i]);
       return 0;
}