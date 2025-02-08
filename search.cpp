#include <iostream>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int target , found = -1;
    cin >> target;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == target)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
    {
        cout << target << " found at " << found << endl; 
    }
    else
    {
        cout << target << " not found in the array" << endl;
    }
    delete[] arr;
    return 0;
}
