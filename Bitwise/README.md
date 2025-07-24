AIM : 

To demonstrate the use of bitwise operators and bit manipulation techniques in C++ by performing various bitwise operations such as AND, OR, XOR, NOT, left shift, and right shift on integers, and by allowing the user to set or reset specific bits of a given number.

APPLICATION USED : VS Code

THEORY : 

Bitwise operators in C++ allow direct manipulation of individual bits within integer data types. These operators are fundamental in low-level programming, system programming, and situations where performance and memory optimization are critical.
The first program illustrates standard bitwise operations on two integers. The bitwise AND (&) returns 1 only if both bits are 1. The OR (|) operator returns 1 if at least one bit is 1. The XOR (^) returns 1 only if the bits differ. The NOT (~) operator inverts every bit of the operand. Left shift (<<) moves bits to the left by a specified number of positions, effectively multiplying the number by powers of two. Right shift (>>) moves bits to the right, effectively dividing by powers of two.
The second program introduces bit manipulation by enabling the user to set (turn on) or reset (turn off) a specific bit in an integer using bitwise operations. Setting a bit is achieved by OR-ing the number with a mask that has a 1 in the target bit position. Resetting a bit is done by AND-ing the number with the complement of a mask that has a 1 in the target bit position. These techniques are crucial in embedded systems, encryption, compression, and other performance-critical applications.
Understanding bitwise operations and manipulation enhances one’s ability to optimize code and interact with hardware or system-level resources efficiently.

ALGORITHM : 

For the Bitwise Operations Program:

I. Start the program.

II. Initialize two integers a and b with predefined values.

III. Perform bitwise AND of a and b and store the result.

IV. Perform bitwise OR of a and b and store the result.

V. Perform bitwise XOR of a and b and store the result.

VI. Perform bitwise NOT on a and store the result.

VII. Perform bitwise NOT on b and store the result.

VIII. Perform left shift on a by 1 bit and store the result.

IX. Perform left shift on b by 1 bit and store the result.

X. Perform right shift on a by 1 bit and store the result.

XI. Perform right shift on b by 1 bit and store the result.

XII. Display all the results to the user.

XIII. End the program.


For the Bit Set and Reset Program:


I. Start the program.

II. Initialize an integer variable a with a predefined value.

III. Prompt the user to enter the bit position to set (turn on).

IV. Read the bit position for setting.

V. Prompt the user to enter the bit position to reset (turn off).

VI. Read the bit position for resetting.

VII. Create a mask by left shifting 1 by the set bit position and perform bitwise OR with a to set the bit.

VIII. Create a mask by left shifting 1 by the reset bit position, take its complement, and perform bitwise AND with a to reset the bit.

IX. Display the results after setting and resetting bits.

X. End the program.


CONCLUSION : 


These two programs provide a practical introduction to bitwise operations and bit manipulation in C++. The first program highlights fundamental bitwise operators, demonstrating how binary representations of integers can be combined or altered through AND, OR, XOR, NOT, and bit shifts. This knowledge is essential for understanding how data is processed at the binary level and is widely applicable in system programming and hardware interfacing.

The second program emphasizes dynamic bit manipulation by allowing users to set or reset individual bits, showcasing how masks and bitwise logic are used to control specific bits within an integer. This technique is crucial in areas like configuring hardware registers, managing permissions, and optimizing storage.

Together, these programs build foundational skills for working with binary data efficiently and provide a stepping stone toward more advanced topics such as bit fields, flag registers, and performance-critical programming in embedded systems and cryptography.

By mastering these operations, programmers gain finer control over data representation and manipulation, enabling efficient, low-level programming that directly interacts with computer architecture.

