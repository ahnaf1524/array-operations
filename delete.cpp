#include <iostream>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n < 0)
    {
        cout << "Invalid Array size!" << endl;
        return 1;
    }
    int *arr = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int pos;
    cin >> pos;
    if(pos < 0 || pos > n || pos == n)
    {
        cout << "Invalid Position" << endl;
    }
    // delete operation (left to righ shift)
    for(int i = pos; i < n; ++i)
    {
        arr[i] = arr[i + 1];
    }
    // output
    for(int i = 0; i < n - 1; ++i)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}