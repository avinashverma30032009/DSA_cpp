#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int target = 30;

    if(linearSearch(arr, 5, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}