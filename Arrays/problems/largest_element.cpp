#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
{
    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int largest = findLargestElement(arr, 5);

    cout << "The largest element in the array is: " << largest;

    return 0;
}