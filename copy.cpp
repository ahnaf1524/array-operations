#include <iostream>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    // handle some case
    if(n < 0)
    {
        cout << "Array Length Must be positive." << endl;
        return 1;
    }
    int *arr = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int *cpy_arr = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cpy_arr[i] = arr[i];
    }
    cout << "Original Array : " << endl;
    // print the original array
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    // Print the copied array
    cout << "Copied Array : " << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << cpy_arr[i] << " ";
    }
    // free up the
    delete[] arr;
    delete[] cpy_arr;

    return 0;
}