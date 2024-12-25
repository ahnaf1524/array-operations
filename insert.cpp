#include<iostream>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); 
    int ar[n + 1]; // Create an array of size n+1 to accommodate insertion

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos, val;
    // Read the position and value to insert
    scanf("%d %d", &pos, &val);

    // Shift elements to the right from the position of insertion
    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }

    // Insert the new value at the specified position
    ar[pos] = val;

    // Print the updated array
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
