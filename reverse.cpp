/*ahnaf_cp*/
#include <iostream>
#include <string>
#include <vector>
#include <array>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
// utility functions
void input(int arr[] , int n)
{
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
}
void print(int arr[] , int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void solver(void)
{
    int n;
    cin >> n;
    int *arr = new int[n];
    input(arr , n);
    cout << "Before Reverse : " << endl;
    print(arr , n);
    int start = 1 , end = n - 1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "After Reverse : " << endl;
    print(arr , n);
    delete[] arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solver();
    return 0;
}