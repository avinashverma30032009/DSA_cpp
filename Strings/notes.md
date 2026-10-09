# Strings

## What is a string?

A string is a sequence of characters—such as letters, numbers, symbols, and spaces—treated as a single unit or data type to represent text


examples

•"hello"

•"1234"

•"alas324"

•"@!##$@"

•"FALSE"

## Declaration of Strings

stored in variables

std::string name = "Avinash";

To use string, need to include string library


#include <string>

## Indexing 

Starts from zero


name ="Hello";

name[0]="H"

name[1]="e"

.

.

name[4]="o"

last element = length(string) - 1

## Length of String

.size() and .length()

string word = "Hello";

cout<<word.length;

##  Mutability of string/Update string

strings are mutable in c++ different from python

word[0]="Y"

cout<< word;

OUTPUT:Yello

## Complexity

•Accessing a character by index: O(1)

•Traversing a string of length n: O(n)

•Auxiliary space for a few extra variables: O(1)
