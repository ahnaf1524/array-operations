#include <iostream>
using namespace std;

int main()
{
    // Take value and position from the user
    int value, pos;
    cin >> value >> pos;

    int arr[5] = {1, 2, 3, 4, 5};

    if (pos >= 0 && pos < 5)
    {
        arr[pos] = value;
        cout << "Position " << pos << " updated value is " << arr[pos] << endl;
    }
    else
    {
        cout << "Position " << pos << " does not exist!" << endl;
    }

    return 0;
}
