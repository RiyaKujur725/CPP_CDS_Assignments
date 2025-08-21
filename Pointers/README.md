This repository contains a collection of C++ programs that explain the basic concepts of **pointers, pointer arithmetic, dereferencing, arrays, and function parameter passing**. Each program is structured with **Aim, Theory, Algorithm, and Conclusion** to help learners clearly understand the concepts.  

---

## AIM  

The aim of these programs is to:  
1. Demonstrate the use of pointers to access and manipulate memory (**Basic Pointer Demonstration**).  
2. Illustrate pointer arithmetic and how incrementing affects addresses (**Pointer Arithmetic**).  
3. Show how pointers can modify variable values and access array elements (**Dereferencing and Arrays**).  
4. Explain the concept of function calls using call by value (**Call by Value Function**).  



## THEORY  

- A **pointer** is a variable that stores the address of another variable.  
- The operator `&` gives the address of a variable, while the operator `*` (dereference) gives the value stored at that address.  
- **Pointer arithmetic** shows how pointers move depending on the size of the data type (e.g., an `int*` increments by 4 bytes on most systems).  
- **Arrays and pointers** are closely related, as an array name acts as a constant pointer to its first element.  
- In **call by value**, a copy of the variable is passed to a function, so changes inside the function do not affect the original variable.  



## ALGORITHM  

### Program 1: Basic Pointer Demonstration  
1. Start  
2. Declare integer `a` and set `a = 10`  
3. Declare pointer `aptr`  
4. Assign address of `a` to `aptr`  
5. Print address of `a`  
6. Print `aptr`  
7. Print `*aptr`  
8. Stop  



### Program 2: Pointer Arithmetic  
1. Start  
2. Declare integer `a = 10`  
3. Assign pointer `aptr = &a`  
4. Print `aptr`  
5. Increment pointer (`aptr++`)  
6. Print new `aptr`  
7. Stop  



### Program 3: Dereferencing and Arrays  
1. Start  
2. Declare integer `a = 10`  
3. Assign pointer `aptr = &a`  
4. Print `*aptr`  
5. Modify `*aptr = 20`  
6. Print `a`  
7. Declare array `arr = {10, 20, 30}`  
8. Print `*arr` (first element)  
9. Stop  



### Program 4: Call by Value in Functions  
1. Start  
2. Define function `increment(x)` → `x = x + 1`  
3. In `main`, declare `a = 2`  
4. Call `increment(a)`  
5. Print `a`  
6. Stop  



## CONCLUSION  

- Pointers store memory addresses and allow direct manipulation of variable values.  
- Pointer arithmetic is based on data type size, not a simple integer increment.  
- Dereferencing pointers enables both reading and modifying the value at a memory location.  
- Arrays and pointers are deeply connected, as arrays naturally behave like pointers.  
- Call by value does not modify the original variable, proving the need for call by reference or pointers when changes are required.  



✍️ With these programs, learners gain a clear understanding of **memory management, pointer usage, and function behavior in C++**, which form the foundation for advanced programming concepts like **dynamic memory allocation and data structures**.
