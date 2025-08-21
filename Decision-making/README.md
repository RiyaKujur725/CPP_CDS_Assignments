## AIM  

To develop and demonstrate fundamental programming concepts in **C++** through multiple small-scale applications that perform arithmetic calculations, logical checks, and decision-making tasks. The programs include:

- A simple calculator performing basic arithmetic operations.  
- An even or odd number checker.  
- A program to find the largest among three numbers.  
- A menu-driven movie review selector.  
- A vowel or consonant checker for single alphabet inputs.  

These programs collectively illustrate core concepts such as **input/output handling, conditional statements, loops, and switch-case structures** in C++.



## APPLICATION USED  
**Visual Studio Code (VS Code)**



## THEORY  

Programming in **C++** enables us to translate logic and mathematical operations into automated processes that computers can execute. The provided programs cover essential programming structures and concepts:

### 1. Simple Calculator
- Demonstrates **arithmetic operators** and **conditional statements**.  
- Handles `+`, `-`, `*`, `/` operations with error handling for **division by zero** and invalid operators.

### 2. Even or Odd Checker
- Uses the **modulus operator (%)** to check parity of an integer.  
- If `num % 2 == 0`, the number is even; otherwise odd.  

### 3. Largest of Three Numbers
- Uses **relational and logical operators** to compare numbers.  
- Applies compound conditions with **if-else statements** to find the largest number.  

### 4. Movie Review Selector
- Implements **switch-case** for menu-driven interaction.  
- Displays movie names and ratings based on user choice.  

### 5. Vowel or Consonant Checker
- Uses **string and character handling** (`isalpha`, `tolower`).  
- Ensures **input validation** using loops and checks whether the input is a vowel or consonant.  



## PROGRAMMING CONCEPTS  

- **Input/Output (I/O):** Using `cin` and `cout` for user interaction.  
- **Variables and Data Types:** `int`, `float`, `char`, `string`.  
- **Operators:** Arithmetic, relational, and logical operators.  
- **Conditional Statements:** `if`, `else if`, `else`.  
- **Switch-Case:** For multi-way branching.  
- **Loops:** `while` loop for input validation.  
- **Error Handling:** Invalid operator, division by zero, non-alphabet input.  
- **Code Modularity and Readability:** Clear prompts and user feedback.  

These concepts collectively form the foundation for programming in C++.  



## ALGORITHM  

### 1. Simple Calculator  
1. Start program.  
2. Display supported operations.  
3. Input `num1`, `op`, `num2`.  
4. Check operator:  
   - `+`: Display sum.  
   - `-`: Display difference.  
   - `*`: Display product.  
   - `/`: If `num2 != 0`, display quotient; else show error.  
   - Else: Invalid operator message.  
5. End program.  



### 2. Even or Odd Checker  
1. Start program.  
2. Input number.  
3. If `num % 2 == 0`, display even.  
4. Else, display odd.  
5. End program.  



### 3. Largest of Three Numbers  
1. Start program.  
2. Input `num1`, `num2`, `num3`.  
3. Compare:  
   - If `num1 >= num2 && num1 >= num3`, display `num1`.  
   - Else if `num2 >= num1 && num2 >= num3`, display `num2`.  
   - Else, display `num3`.  
4. End program.  



### 4. Movie Review Selector  
1. Start program.  
2. Display menu of movies (1–6).  
3. Input choice.  
4. Use `switch`:  
   - Case 1–6: Display movie and rating.  
   - Default: Invalid choice message.  
5. End program.  



### 5. Vowel or Consonant Checker  
1. Start program.  
2. Prompt user for input.  
3. Validate: Input must be a single alphabet.  
4. Convert to lowercase.  
5. If character is `a, e, i, o, u` → vowel.  
6. Else → consonant.  
7. End program.  



## CONCLUSION  

These five programs collectively reinforce **foundational programming skills in C++**. They provide hands-on experience with:

- Input handling  
- Arithmetic operations  
- Conditional logic  
- Loops  
- Error handling  
