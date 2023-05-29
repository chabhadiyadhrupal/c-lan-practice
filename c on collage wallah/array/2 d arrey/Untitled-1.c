#include<stdio.h>

int main()
{   
    int array[100],n, position, value;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n", n);
    for( int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("\n\nEnter the location where you want to insert new element:  ");
    scanf("%d", &position);
    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);
    // shifting the elements from (position to n) to right
    for(int i= n-1; i >= position-1; i--)
        array[i+1] = array[i];
    array[position - 1] = value;    // inserting the given value
    printf("\n\nResultant array is: ");
    /* 
        the array size gets increased by 1 
        after insertion of the element
    */
    for(int i = 0; i <= n; i++) 
        printf("%d  ", array[i]);
    return 0;
}
// C Program to Insert an element
// at a specific position in an Array

// #include <stdio.h>

// int main()
// {
// 	int arr[100] = { 0 };
// 	int i, x, pos, n = 10;

// 	// initial array of size 10
// 	for (i = 0; i < 10; i++)
// 		arr[i] = i + 1;

// 	// print the original array
// 	for (i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");

// 	// element to be inserted
// 	x = 50;

// 	// position at which element
// 	// is to be inserted
// 	pos = 5;

// 	// increase the size by 1
// 	n++;

// 	// shift elements forward
// 	for (i = n - 1; i >= pos; i--)
// 		arr[i] = arr[i - 1];

// 	// insert x at pos
// 	arr[pos - 1] = x;

// 	// print the updated array
// 	for (i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");

// 	return 0;
// }
