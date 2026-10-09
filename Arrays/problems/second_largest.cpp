#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int secondLargestElement = secondLargest(arr, 5);

    cout << "The second largest element in the array is: " << secondLargestElement;

    return 0;
}