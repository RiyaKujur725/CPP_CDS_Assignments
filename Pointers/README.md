
This repository contains four C++ programs that demonstrate the fundamental concepts of pointers, pointer arithmetic, dereferencing, arrays, and function parameter passing. These are core topics in understanding memory management and low-level operations in C++.


AIM:


The aim of this project is to:

Demonstrate how pointers store and manipulate memory addresses.

Show pointer arithmetic and how it depends on data type size.

Illustrate pointer dereferencing to modify variables and access array elements.

Compare call by value in functions with pointer-based modifications.



THEORY:


Pointers are variables that store memory addresses of other variables. Using the & operator, we retrieve an address, and using the * operator, we access the stored value. Incrementing a pointer does not simply increase its value by one but advances it by the size of the data type. Arrays and pointers are closely related in C++ because an array name acts as a pointer to its first element.

Parameter passing is another important concept. In call by value, a copy of the variable is passed to a function, meaning modifications do not affect the original value. To achieve modifications, call by reference or pointers must be used.



ALGORITHM : 



Program 1 — Basic Pointer Demonstration

Start

Declare integer a and set a ← 10.

Declare pointer to int aptr.

Set aptr ← address_of(a).

Output address_of(a).

Output aptr.

Output value_at(aptr) (i.e., *aptr).

Stop



Program 2 — Pointer Arithmetic

Start

Declare integer a and set a ← 10.

Declare pointer to int aptr ← address_of(a).

Output current pointer value aptr.

Increment pointer: aptr ← aptr + 1.

Output new pointer value aptr.

Stop



Program 3 — Dereferencing and Arrays

Start

Declare integer a and set a ← 10.

Declare pointer to int aptr ← address_of(a).

Output value_at(aptr).

Modify through pointer: value_at(aptr) ← 20.

Output a.

Declare integer array arr ← [10, 20, 30].

Output value_at(arr) which gives the first element.

Stop



Program 4 — Call by Value Function

Start

Define function increment(x):

Step F1: Inside function, set x ← x + 1.

Step F2: Return.

In main, declare integer a and set a ← 2.

Call increment(a).

Output a.

Stop



CONCLUSION :

Through these programs, the following conclusions can be drawn:

Pointers provide direct access to memory addresses, and dereferencing allows retrieval and modification of stored values.

Pointer arithmetic is dependent on data type size, demonstrating how memory is organized.

Arrays and pointers are strongly linked, as arrays inherently act as constant pointers.

Call by value in functions does not modify the original variable, highlighting the need for call by reference or pointer arguments when changes are required.

Overall, these experiments build a strong foundation in memory management, data manipulation, and function parameter passing in C++. They form the stepping stones toward advanced programming concepts such as dynamic memory allocation, data structures, and system-level programming.
