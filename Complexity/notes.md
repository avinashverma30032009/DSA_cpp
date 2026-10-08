# Time and Space Complexity

## 1. What is Complexity?

Complexity tells us how the amount of work or memory used by an algorithm
grows when the input size (n) increases.

We mainly study:

- Time Complexity → How the amount of work grows
- Space Complexity → How extra memory usage grows

---

## 2. Big-O Notation

Big-O describes the growth rate of an algorithm.

It does NOT tell us the exact time in seconds.

Example:

If an algorithm processes n elements:

O(n)

If it processes n × n elements:

O(n²)

---

## 3. Common Time Complexities

| Complexity | Meaning |
|------------|---------|
| O(1) | Constant |
| O(log n) | Logarithmic |
| O(n) | Linear |
| O(n log n) | Linearithmic |
| O(n²) | Quadratic |
| O(n³) | Cubic |
| O(2ⁿ) | Exponential |
| O(n!) | Factorial |

General growth order:

O(1) < O(log n) < O(n) < O(n log n) < O(n²)
< O(n³) < O(2ⁿ) < O(n!)

---

## 4. O(1) — Constant

The amount of work does not depend on n.

Example:

```cpp
int x = arr[5];

## 11. How to Find Time Complexity

### Step 1: Count how many times the code runs

Single loop:

O(n)

### Step 2: Sequential loops add

O(n) + O(n)
= O(2n)
= O(n)

### Step 3: Nested loops multiply

O(n) × O(n)
= O(n²)

### Step 4: Keep the fastest-growing term

O(n) + O(n²)
= O(n²)

O(n) + O(n³)
= O(n³)

### Step 5: Repeated halving

If the input is repeatedly divided by 2:

n → n/2 → n/4 → n/8 → ...

Time Complexity = O(log n)

## 12. O(log n) - Logarithmic Time

When the input/problem size is repeatedly divided by 2:

n → n/2 → n/4 → n/8 → ... → 1

Example:

for(int i = n; i > 1; i = i / 2)
{
    cout << i;
}

The number of iterations grows logarithmically.

Time Complexity = O(log n)

This is the basic idea behind Binary Search.
## 13. O(n log n) - Linearithmic Time

O(n log n) occurs when:

- O(n) work is performed
- for O(log n) levels/iterations

Therefore:

n × log n = O(n log n)

Example idea:

for each of n elements
    perform log n work

Time Complexity = O(n log n)

Common example:
Merge Sort → O(n log n)
## 14. Space Complexity

Space Complexity tells us how extra memory usage grows
as the input size increases.

### O(1) Space

A fixed number of variables:

int x = 10;
int y = 20;

Space Complexity = O(1)

### O(n) Space

Memory grows linearly with n:

int arr[n];

Space Complexity = O(n)

### O(n²) Space

Memory grows as n × n:

int matrix[n][n];

Space Complexity = O(n²)

### Important

We usually focus on extra/auxiliary space used by the algorithm.

Input memory that is already provided is generally not counted
as extra space.