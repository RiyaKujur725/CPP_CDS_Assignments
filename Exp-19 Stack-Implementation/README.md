##  AIM
The aim of this program is to **implement a stack data structure using arrays in C++**.  
The program provides the basic operations of a stack such as:
- **Push** (inserting an element onto the stack)  
- **Pop** (removing the top element from the stack)  
- **Display** (showing the current contents of the stack)  



##  THEORY

### 1. Introduction to Stack
A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
- The last element inserted into the stack is the first one to be removed.  
- A stack can be imagined as a **stack of plates**:  
  - You place (push) a new plate on top.  
  - You remove (pop) the topmost plate first.  



### 2. Characteristics of Stack
1. **Linear Order**: Elements are placed in sequence.  
2. **Single Pointer**: A variable called **top** keeps track of the most recent element.  
3. **LIFO Principle**: Last inserted, first removed.  
4. **Fixed Size in Arrays**: Limited by array size.  
5. **Error Conditions**:  
   - **Overflow** → When trying to push an element into a full stack.  
   - **Underflow** → When trying to pop from an empty stack.  



### 3. Operations on Stack
1. **Push (Insertion)**  
   - Adds an element at the top of the stack.  
   - Requires incrementing the `top` pointer.  
   - If `top == SIZE-1`, stack is full.  

2. **Pop (Deletion)**  
   - Removes the element from the top of the stack.  
   - Requires decrementing the `top` pointer.  
   - If `top == -1`, stack is empty.  

3. **Display**  
   - Prints all elements from top to bottom.  
   - Helps visualize the current contents.  



### 4. Advantages of Stack
- Provides a **clean, simple way** to handle data.  
- Useful for solving recursive problems (using function call stack).  
- Memory management in compilers is based on stacks.  
- Very efficient: both push and pop run in **O(1)** time.  



### 5. Disadvantages of Stack (Array-based)
- **Fixed Size**: Once the stack is full, no more elements can be added.  
- **Wasted Space**: Unused memory if stack size is not fully utilized.  
- **Limited Flexibility**: Dynamic memory allocation (linked list) is more efficient for variable size needs.  



### 6. Real-World Applications of Stack
1. **Undo/Redo operations** in text editors.  
2. **Back/Forward navigation** in web browsers.  
3. **Expression evaluation** in calculators (postfix, prefix).  
4. **Function call management** in programming languages (system call stack).  
5. **Reversing data** (strings, arrays, lists).  



##  ALGORITHM

### Step-by-Step Procedure

#### **1. Initialization**
- Define `SIZE` for the stack (fixed).  
- Create an array `arr[SIZE]`.  
- Initialize `top = -1` (indicating empty stack).  

#### **2. Push Operation**
1. Check if stack is full → `top == SIZE - 1`.  
   - If true, print **Stack Overflow**.  
2. If not full:  
   - Increment `top`.  
   - Insert the value at `arr[top]`.  
   - Print success message.  

#### **3. Pop Operation**
1. Check if stack is empty → `top == -1`.  
   - If true, print **Stack Underflow**.  
2. If not empty:  
   - Print the element being removed.  
   - Decrement `top`.  

#### **4. Display Operation**
1. If stack is empty → print "Stack is empty".  
2. Otherwise:  
   - Print all elements from `arr[top]` down to `arr[0]`.  



##  CONCLUSION

The stack program implemented in C++ using arrays successfully demonstrates the **LIFO principle** of data organization. Through the `push`, `pop`, and `display` operations, we gained a deep understanding of how stacks work in real programming environments.

1. **Understanding Stack Behavior**  
   - The **push** operation places data at the top of the stack.  
   - The **pop** operation removes the most recent element.  
   - The **display** operation shows the current contents from top to bottom.  
   This closely reflects real-world stack behavior (like stacking plates).  

2. **Error Handling**  
   - Attempting to push onto a full stack results in **overflow**.  
   - Attempting to pop from an empty stack results in **underflow**.  
   - These conditions were clearly demonstrated in the implementation.  

3. **Efficiency of Stack Operations**  
   - Both `push` and `pop` execute in **O(1)** time, making them extremely efficient.  
   - Memory access in arrays is direct (index-based), ensuring fast performance.  

4. **Practical Relevance**  
   - Stacks are integral in many computer science domains:  
     - **Function call stack** in recursion and programming languages.  
     - **Undo/Redo operations** in text editors.  
     - **Backtracking algorithms** (mazes, puzzles, AI).  
     - **Expression evaluation** in compilers and interpreters.  
   - This shows that stacks are not just theoretical but widely applicable.  

5. **Limitations Identified**  
   - The array-based stack has a **fixed size**. Once full, no more elements can be added even if memory is available elsewhere.  
   - Memory utilization is rigid: if fewer elements are stored, unused memory is wasted.  
   - These limitations highlight the importance of **dynamic stack implementations** (linked lists, dynamic arrays).  

6. **Conceptual Insights**  
   - The use of a single pointer `top` simplifies stack management.  
   - The **sequential nature** of operations (always at the top) makes stacks more predictable than other data structures like queues or linked lists.  
   - This program strengthens the foundation for understanding **recursive function calls, compiler design, and algorithm optimization**.  

