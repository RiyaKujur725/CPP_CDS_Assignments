##  AIM

The aim of these programs is to:

1. Demonstrate **constructor overloading** in C++ by designing multiple constructors with different argument lists and performing different operations.
2. Illustrate how **operator overloading** allows us to redefine operators (`+`, `*`, etc.) for user-defined objects.
3. Show practical applications of these concepts through real-world examples such as:
   - Adding integers, floats, and three integers.
   - Calculating simple and compound interest.
   - Concatenating strings and characters.
   - Comparing volumes of boxes using the multiplication operator.
   - Adding two number objects with the plus operator.
4. Provide a hands-on understanding of **compile-time polymorphism** and its benefits in object-oriented programming.



##  THEORY

### 1. Introduction to Polymorphism in C++

Polymorphism is one of the four core principles of **Object-Oriented Programming (OOP)**, alongside **abstraction, encapsulation, and inheritance**. In simple words, polymorphism means *"one name, many forms"*. In C++, polymorphism can be achieved in two ways:

- **Compile-time Polymorphism** (also known as static binding)  
  Achieved through **function overloading**, **constructor overloading**, and **operator overloading**. The function or operator to be executed is decided at compile time.
  
- **Runtime Polymorphism** (also known as dynamic binding)  
  Achieved through **virtual functions** and **inheritance**, where the decision is made at runtime.

The programs in this repository focus on **compile-time polymorphism**.



### 2. Constructor Overloading

A **constructor** in C++ is a special function that initializes objects of a class.  
- **Constructor overloading** occurs when a class has multiple constructors with different parameter lists.  
- Based on the number and type of arguments passed, the compiler chooses the appropriate constructor.  

For example:
- `Add(int, int)` → Performs integer addition.
- `Add(float, float)` → Performs float addition.
- `Add(int, int, int)` → Performs addition of three integers.  

This makes objects **flexible** and able to perform tasks with varying input types.

Applications:
- Performing different calculations depending on user input.
- Initializing objects in multiple ways.



### 3. Operator Overloading

C++ allows us to **redefine operators** for user-defined types. This makes objects behave like built-in data types.  

For example:
- The `+` operator is normally used for addition of numbers. But we can **overload** it to add two objects of a class `Number`.  
- The `*` operator can be overloaded to compare two objects such as `Box` volumes.

Benefits:
- **Improves readability**: Instead of writing functions like `addNumbers(obj1, obj2)`, we can simply write `obj1 + obj2`.
- **Consistency**: Objects act like primitive types.
- **Flexibility**: Operators can be extended to new domains.



### 4. Real-Life Relevance

These concepts are not just academic but have real-world importance:
- **Financial Applications**: Constructor overloading can calculate **Simple Interest (SI)** and **Compound Interest (CI)** depending on user input.  
- **Data Handling**: Concatenation of strings and characters is a core operation in text processing.  
- **Mathematical Models**: Operator overloading helps define operations on vectors, matrices, and complex numbers.  
- **Object Comparison**: Comparing volumes of containers (boxes) or weights can be represented neatly using operator overloading.




##  ALGORITHMS


###  Program 1: Addition using Constructor Overloading

**Algorithm:**
1. Start the program.
2. Define a class `Add`.
3. Overload constructors as follows:
   - `Add(int, int)` → Adds two integers.
   - `Add(float, float)` → Adds two floating-point numbers.
   - `Add(int, int, int)` → Adds three integers.
4. In `main()`, create three objects with different argument types.
5. Constructor automatically executes and prints results.
6. End program.



###  Program 2: Interest Calculation (SI and CI)

**Algorithm:**
1. Start the program.
2. Define a class `Interest`.
3. Create two constructors:
   - `Interest(int p, int r, int n)` → Calculate Simple Interest using formula:  
     \[
     SI = \frac{P \times R \times N}{100}
     \]
   - `Interest(double p, double r, int n)` → Calculate Compound Interest using formula:  
     \[
     CI = P \times \left(1 + \frac{R}{100}\right)^N - P
     \]
4. In `main()`, create object with required values.
5. Display interest calculated.
6. End program.



###  Program 3: String and Character Concatenation

**Algorithm:**
1. Start the program.
2. Define a class `Concat`.
3. Overload functions:
   - `Concatenate(string, string)` → Return concatenated string.
   - `Concatenate(char, char)` → Convert characters to string and return.
4. In `main()`, call both versions and print results.
5. End program.



###  Program 4: Box Volume Comparison using Operator Overloading

**Algorithm:**
1. Start the program.
2. Define a class `Box` with attributes `length, width, height`.
3. Define:
   - Constructor with default arguments.
   - `volume()` function to compute volume.
   - Overloaded operator `*` to compare two volumes.
4. In `main()`, create two `Box` objects.
5. Use overloaded operator to compare volumes.
6. Display which box is bigger.
7. End program.



###  Program 5: Number Addition using Operator Overloading

**Algorithm:**
1. Start the program.
2. Define a class `Number` with attribute `value`.
3. Overload `+` operator to add two objects.
4. Define `display()` function to print result.
5. In `main()`, create two `Number` objects.
6. Add them using `+` operator and store in third object.
7. Display all values.
8. End program.



##  CONCLUSION

From these programs, we conclude that:
- **Constructor Overloading** allows using multiple constructors with different parameters, making objects versatile in handling various input types.
- **Operator Overloading** enhances C++ operators to work with user-defined classes, increasing code readability and flexibility.
- These examples showcase **compile-time polymorphism** in C++, a key feature of OOP.
- Real-life applications:
  - Mathematical computations (Addition, Interest).
  - Data manipulation (String concatenation).
  - Object comparison (Box volumes, Number addition).

Thus, constructor and operator overloading make C++ more powerful and adaptable for solving real-world problems.

