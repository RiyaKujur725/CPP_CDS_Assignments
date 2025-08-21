## AIM  
To demonstrate **basic input-output operations**, **arithmetic calculations using functions**, and **simple string handling in C++** by creating two programs:  

1. A **calculator** performing four basic arithmetic operations with error checking.  
2. A **greeting program** that asks for the user's name and displays a personalized welcome message.  



## APPLICATION USED  
**Visual Studio Code (VS Code)**  



## THEORY  

C++ is a versatile programming language that supports **procedural programming** through the use of **functions** and **input/output mechanisms**.  

### Calculator Program  
- Showcases how **functions modularize code** by separating logic for addition, subtraction, multiplication, and division.  
- Improves **readability, reusability, and maintainability** of code.  
- Introduces **type casting** in the division function to produce a floating-point result.  
- Demonstrates **error handling** (checking for division by zero).  

### Greeting Program  
- Illustrates **basic string input/output** for user interaction.  
- Uses a `string` variable to read the user’s name.  
- Displays a **personalized greeting**, showing how C++ manages text data with `cin` and `cout`.  

Both programs exemplify foundational programming concepts essential for beginners:  
- **Function declaration and definition**  
- **Input validation**  
- **Basic control flow**  



## ALGORITHM  

### For the Calculator Program  

1. Start the program.  
2. Display a welcome message.  
3. Prompt the user to enter two whole numbers.  
4. Read the inputs: `num1`, `num2`.  
5. Call the function `add(num1, num2)` and display the sum.  
6. Call the function `subtract(num1, num2)` and display the difference.  
7. Call the function `multiply(num1, num2)` and display the product.  
8. Check if `num2 == 0`:  
   - If **not zero**, call the function `divide(num1, num2)` and display the quotient.  
   - If **zero**, display an error message.  
9. Display a thank-you message.  
10. End the program.  



### For the Greeting Program  

1. Start the program.  
2. Prompt the user to enter their name.  
3. Read the input into a string variable `name`.  
4. Display a personalized greeting using the entered name.  
5. End the program.  



## CONCLUSION  

The two programs together serve as an excellent introduction to **essential C++ programming concepts**:  

- The **calculator program** demonstrates the power of functions in breaking down operations into manageable tasks.  
  - Improves **clarity** and **reusability**.  
  - Introduces **type casting** and **error handling** (e.g., preventing division by zero).  

- The **greeting program** highlights **user interaction** through string input and output.  
  - Helps understand how to manage **text data** in C++.  

Both programs reinforce good programming practices:  
- Clear user prompts  
- Input validation  
- Modular design  

These fundamentals provide a solid base for further exploration into:  
- **Object-Oriented Programming (OOP)**  
- **File handling**  
- **Graphical User Interfaces (GUI)**  

Through these exercises, beginners gain confidence in:  
- Writing **syntactically correct C++ code**  
- Managing **data types**  
- Implementing **logic with functions**  
- Creating **user-friendly programs**  

These are crucial skills for any aspiring programmer.  
