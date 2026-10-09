# Arrays

## What is an Array?

An array is a collection of multiple values of the same data type stored under one variable name.

Example:

int marks[5] = {80, 75, 92, 68, 88};

## Indexing

Array indexing starts from 0.

For 5 elements:

Index:  0   1   2   3   4
Value: 80  75  92  68  88

First index = 0
Last index = n - 1

Example:

marks[0] = 80
marks[2] = 92
marks[4] = 88
## Array in Memory

Array elements are stored in consecutive memory locations.

Example:

int arr[5] = {10, 20, 30, 40, 50};

Conceptually:

Index:   0    1    2    3    4
Value:  10   20   30   40   50

Because the computer can directly calculate the location of an element,
accessing arr[i] takes constant time.

## Array Access Complexity

Accessing one element:

arr[i]

Time Complexity: O(1)
## Creating Arrays

int arr[5] = {10, 20, 30, 40, 50};

int arr[] = {10, 20, 30, 40, 50};

int arr[5] = {};

## Updating an Array

We can change an element using its index.

Example:

int arr[5] = {10, 20, 30, 40, 50};

arr[2] = 100;

The array becomes:

10 20 100 40 50

Updating one element:
Time Complexity: O(1)
## Array Traversal

Traversal means visiting every element of an array one by one.

Example:

int arr[5] = {10, 20, 30, 40, 50};

for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}

Output:

10 20 30 40 50

### Complexity

Accessing one element: O(1)

Traversing n elements: O(n)

Time Complexity: O(n)