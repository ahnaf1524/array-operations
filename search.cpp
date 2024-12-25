#include <iostream>
using namespace std;
int main()
{
    // take value from user wanna to find
    int value, found = -1;
    cin >> value;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] == value)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    {
        cout << "Found at index " << found << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}