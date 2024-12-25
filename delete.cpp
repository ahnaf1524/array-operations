#include<stdio.h>
#include <iostream>
int main()
{
    int n;
    // Read the number of elements
    scanf("%d", &n); 
    int ar[n]; // Create an array of size n

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos;
    // Read the position to delete
    scanf("%d", &pos);

    // Shift elements to the left from the position of deletion
    for (int i = pos; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    // Print the updated array (excluding the last element)
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
