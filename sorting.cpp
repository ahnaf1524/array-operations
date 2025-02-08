/*ahnaf_cp*/
#include <iostream>
#include <cstring>
#include <cmath>
#include <array>
#include <vector>
using namespace std;
void print(int arr[] , int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void input(int arr[] , int size)
{
    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
}
void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortAscending(int arr[] , int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i] , arr[j]);
            }
        }
    }
}
void sortDescending(int arr[] , int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(arr[i] < arr[j])
            {
                swap(arr[i] , arr[j]);
            }
        }
    }
}
void runner(void)
{
    int n;
    cin >> n;
    int *arr = new int[n];
    input(arr , n);
    sortAscending(arr , n);
    cout << "Ascending Order : ";
    print(arr , n);
    sortDescending(arr , n);
    cout << "Descending Order : ";
    print(arr , n);
    delete[] arr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runner();
    return 0;
}