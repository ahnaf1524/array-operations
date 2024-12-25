#include <iostream>
using namespace std;
int main()
{
    // taking size and array elements from user
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    // new array which copy actual one
    int arr_copy[n];
    // copy operation
    for (int i = 0; i < 5; ++i)
    {
        arr_copy[i] = arr[i];
    }
    // print copied array
    for (int i = 0; i < 5; ++i)
    {
        cout << arr_copy[i] << endl;
    }
}