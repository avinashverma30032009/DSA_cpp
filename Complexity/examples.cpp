#include <iostream>
using namespace std;

int main()
{
    // ========================================
    // 1. O(1) - Constant Time
    // ========================================

    int arr[5] = {10, 20, 30, 40, 50};

    // Directly accessing an element
    // takes constant time.
    cout << arr[2] << endl;


    // ========================================
    // 2. O(n) - Linear Time
    // ========================================

    // This loop runs n times.
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    // ========================================
    // 3. O(n^2) - Quadratic Time
    // ========================================

    // Outer loop -> n times
    // Inner loop -> n times
    // Total -> n * n = n^2

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << i << "," << j << " ";
        }
    }

    cout << endl;


    // ========================================
    // 4. O(n) - Two Sequential Loops
    // ========================================

    // First loop -> n
    for(int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    // Second loop -> n
    for(int j = 0; j < 5; j++)
    {
        cout << j << " ";
    }

    // Total -> n + n = 2n
    // Big-O -> O(n)

    // ========================================
    // 5. O(log n) - Logarithmic Time
    // ========================================

    // The value of i is divided by 2
    // after every iteration.
    //
    // Example:
    // n -> n/2 -> n/4 -> n/8 -> ... -> 1
    //
    // Time Complexity: O(log n)
    // Space Complexity: O(1)

    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = n; i > 1; i = i / 2)
    {
    cout << i << " ";
    }

    cout << endl;
    // ========================================
    // 6. O(n log n) - Linearithmic Time
    // ========================================

    // Outer loop -> O(n)   
    // Inner loop -> O(log n)
    //
    // Total:
    // O(n) × O(log n)
    // = O(n log n)
    //
    // Time Complexity: O(n log n)
    // Space Complexity: O(1)


    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
    for(int j = n; j > 1; j = j / 2)
    {
        cout << i << " ";
    }
}

cout << endl;


    return 0;
}