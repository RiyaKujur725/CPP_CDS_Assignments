## AIM  
To demonstrate the use of bitwise operators and bit manipulation techniques in C++ by performing various bitwise operations such as **AND, OR, XOR, NOT, left shift, and right shift** on integers, and by allowing the user to set or reset specific bits of a given number.



## APPLICATION USED  
**Visual Studio Code (VS Code)**



## THEORY  
Bitwise operators in C++ allow direct manipulation of individual bits within integer data types. These operators are fundamental in **low-level programming, system programming, and performance-critical applications**.

1. **Bitwise AND (&)** – Returns 1 only if both bits are 1.  
2. **Bitwise OR (|)** – Returns 1 if at least one bit is 1.  
3. **Bitwise XOR (^)** – Returns 1 only if the bits differ.  
4. **Bitwise NOT (~)** – Inverts every bit of the operand.  
5. **Left Shift (<<)** – Moves bits to the left by n positions (equivalent to multiplying by 2ⁿ).  
6. **Right Shift (>>)** – Moves bits to the right by n positions (equivalent to dividing by 2ⁿ).  

The **Bit Manipulation Program** demonstrates setting and resetting specific bits:  
- **Setting a bit**: Use OR with a mask (`1 << position`).  
- **Resetting a bit**: Use AND with the complement of a mask (`~(1 << position)`).  

These operations are widely used in **embedded systems, encryption, compression, hardware programming, and optimization tasks**.



## ALGORITHM  

### 1. Bitwise Operations Program  

1. Start the program.  
2. Initialize two integers `a` and `b`.  
3. Perform:  
   - Bitwise AND → `a & b`  
   - Bitwise OR → `a | b`  
   - Bitwise XOR → `a ^ b`  
   - Bitwise NOT of `a` → `~a`  
   - Bitwise NOT of `b` → `~b`  
   - Left Shift `a` → `a << 1`  
   - Left Shift `b` → `b << 1`  
   - Right Shift `a` → `a >> 1`  
   - Right Shift `b` → `b >> 1`  
4. Display all results.  
5. End the program.  



### 2. Bit Set and Reset Program  

1. Start the program.  
2. Initialize an integer `a`.  
3. Prompt the user to **enter a bit position to set (turn ON)**.  
4. Read input and create mask → `1 << position`.  
5. Perform `a | mask` to set the bit.  
6. Prompt the user to **enter a bit position to reset (turn OFF)**.  
7. Read input and create mask → `~(1 << position)`.  
8. Perform `a & mask` to reset the bit.  
9. Display updated results.  
10. End the program.  



## CONCLUSION  
These programs provide a **practical introduction** to bitwise operations and manipulation in C++.  

- The **Bitwise Operations Program** demonstrates how integers are processed at the binary level using AND, OR, XOR, NOT, and shifts. This is essential for understanding **system-level programming and hardware interfacing**.  
- The **Bit Set/Reset Program** highlights how individual bits can be dynamically controlled using masks. This technique is widely applied in **configuring hardware registers, managing permissions, and optimizing storage**.  

By mastering these concepts, programmers gain **fine control over binary data**, enabling efficient and optimized **low-level programming**, especially in areas such as **embedded systems, cryptography, and performance-critical software**.

