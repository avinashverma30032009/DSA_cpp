#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_reversed[5];

    cout << "Array elements in reverse order are: ";
    for(int i = 4; i >= 0; i--)
    {
        arr_reversed[4 - i] = arr[i];
        cout << arr_reversed[4 - i] << " ";
    }
    return 0;
}