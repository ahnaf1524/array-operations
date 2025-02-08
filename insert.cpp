#include <iostream>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n + 1]; // 1 for extra space
    // input the array
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int pos , value;
    cin >> pos >> value;
    // insertion loops (shift element right from the insertion)
    for(int i = n; i >= pos; --i)
    {
        arr[i] = arr[i - 1]; // just create space
    }
    // insert the new value
    arr[pos] = value;
    // print the array
    for(int i = 0; i < n + 1; ++i)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
