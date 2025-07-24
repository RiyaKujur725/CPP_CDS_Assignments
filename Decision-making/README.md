AIM : 

To develop and demonstrate fundamental programming concepts in C++ through multiple small-scale applications that perform arithmetic calculations, logical checks, and decision-making tasks. The programs include:

A simple calculator performing basic arithmetic operations.
An even or odd number checker.
A program to find the largest among three numbers.
A menu-driven movie review selector.
A vowel or consonant checker for single alphabet inputs.

These programs collectively illustrate core concepts such as input/output handling, conditional statements, loops, and switch-case structures in C++.

THEORY : 

Programming in C++ enables us to translate logic and mathematical operations into automated processes that computers can execute. The provided programs cover essential programming structures and concepts:

Simple Calculator:
This program demonstrates how arithmetic operators work and how conditional statements can control the flow of a program based on user input. The calculator handles addition, subtraction, multiplication, and division, incorporating error handling for division by zero and invalid operator inputs.

Even or Odd Checker:
Utilizes the modulus operator (%) to determine the parity of an integer. If a number modulo 2 equals zero, it is even; otherwise, it is odd. This program introduces basic condition checking.

Largest of Three Numbers:
Uses relational operators and logical conditions to compare three integers and determine the largest. This program illustrates compound conditions and decision-making using if-else statements.

Movie Review Selector:
Demonstrates the use of a switch-case statement, a control structure used to select one of many code blocks to execute based on the value of a variable. It enhances user interaction by offering a menu for selecting movies and viewing associated ratings.

Vowel or Consonant Checker:
Employs string and character handling functions, including input validation, character classification (isalpha), and case conversion (tolower). The program identifies vowels and consonants, demonstrating loops and input validation for robust user interaction.

PROGRAMMING CONCEPTS : 

Input/Output (I/O): Using cin and cout to receive user inputs and display outputs.
Variables and Data Types: Use of int, float, char, and string types to hold data.
Operators: Arithmetic, relational, and logical operators for processing data.
Conditional Statements: if, else if, and else to make decisions.
Switch-Case: An alternative to multiple if statements for multi-way branching.
Loops: Using while to ensure valid user input.
Error Handling: Checking for invalid inputs (e.g., invalid operators, division by zero, non-alphabet inputs).
Code Modularity and Readability: Clear prompts and user feedback to guide interaction.
Collectively, these programs provide foundational practice for beginner programmers to understand flow control and data manipulation in C++.

ALGORITHM : 

1. Simple Calculator

I. Start the program.
II. Display the calculator instructions and supported operations.
III. Prompt the user to input the first number, operator, and second number.
IV. Read inputs: num1, op, and num2.
V. Check the operator (op):
  a. If op is +, calculate and display num1 + num2.
  b. Else if op is -, calculate and display num1 - num2.
  c. Else if op is *, calculate and display num1 * num2.
  d. Else if op is /:
    i. If num2 is not zero, calculate and display num1 / num2.
    ii. Else display an error message about division by zero.
  e. Else display an invalid operator message.
VI. Thank the user.
VII. End the program.

2. Even or Odd Checker

I. Start the program.
II. Display the program title.
III. Prompt the user to enter an integer number.
IV. Read the input number.
V. Check if the number modulo 2 equals zero:
  a. If yes, display that the number is even.
  b. Else display that the number is odd.
VI. End the program.

3. Largest of Three Numbers

I. Start the program.
II. Display the program title.
III. Prompt the user to enter three numbers one by one.
IV. Read num1, num2, and num3.
V. Compare the numbers:
  a. If num1 is greater than or equal to both num2 and num3, display num1 as the largest.
  b. Else if num2 is greater than or equal to both num1 and num3, display num2 as the largest.
  c. Else display num3 as the largest.
VI. End the program.

4. Movie Review Selector

I. Start the program.
II. Display a list of movies numbered 1 to 6.
III. Prompt the user to select a movie by entering a number between 1 and 6.
IV. Read the user’s choice.
V. Use a switch statement to match the choice:
  a. For each valid choice (1 to 6), display the corresponding movie title and rating.
  b. For invalid choices, display an error message indicating the selection is invalid.
VI. End the program.

5. Vowel or Consonant Checker

I. Start the program.
II. Display the program title.
III. Enter a loop to validate user input.
IV. Prompt the user to enter a single alphabet character.
V. Read the input as a string.
VI. Check if the input length is exactly one and if the character is an alphabet letter:
  a. If valid, break out of the loop.
  b. Else display an error message and repeat Step IV.
VII. Convert the input character to lowercase.
VIII. Check if the character is a vowel (a, e, i, o, u):
  a. If yes, display that it is a vowel.
  b. Else display that it is a consonant.
IX. Thank the user.
X. End the program.

CONCLUSION : 

These five programs collectively reinforce foundational programming skills in C++. They provide hands-on experience with input handling, arithmetic operations, conditional logic, loops, and basic error checking. Each program tackles a different use case, illustrating how programming structures can be applied to solve diverse problems.
The Simple Calculator consolidates arithmetic operations with user-driven choices and basic exception handling for invalid operations and division by zero. This builds understanding of operator usage and control flow.
The Even or Odd Checker and Largest of Three Numbers programs focus on logical comparisons and decision-making, essential for algorithmic thinking. The largest number finder enhances conditional logic skills through multiple comparisons.
The Movie Review Selector introduces a switch-case construct, showcasing efficient handling of multiple discrete choices, which is more readable than numerous if-else statements.
The Vowel or Consonant Checker emphasizes input validation, string and character manipulation, and looping to ensure robustness and user-friendly interaction.
Together, these programs form a solid foundation for beginners in C++ programming by applying theory to practical tasks. They encourage good programming habits such as validating input, handling errors gracefully, and writing clear, maintainable code.

Future enhancements might include expanding these programs with more features, better error handling, graphical interfaces, or integration with files and databases to handle larger and persistent data sets. Nonetheless, mastery of these basics is critical for progressing to advanced programming topics.
