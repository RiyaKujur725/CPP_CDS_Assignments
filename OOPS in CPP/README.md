##  AIM  
To demonstrate the concepts of **Object-Oriented Programming in C++** using simple class-based experiments:  
1. Student Class  
2. Movie Class  
3. Circle Area Calculation  
4. Calculator Class  
5. Cube Volume (Inside & Outside Class)  
6. Cube Volume (Private Data Members)  



## THEORY  

Object-Oriented Programming (OOP) in C++ is based on the concept of **classes and objects**.  
- A **class** is a blueprint that defines properties (data members) and behaviors (member functions).  
- An **object** is an instance of a class.  
- Member functions can be defined **inside** or **outside** the class using the scope resolution operator `::`.  
- This approach helps in modularity, reusability, and abstraction.  

In these experiments, we practice:  
- Creating classes with attributes and methods.  
- Initializing and accessing object data.  
- Performing mathematical operations with objects.  
- Defining member functions inside and outside the class.  



##  ALGORITHMS  

### **1. Student Class**
**Aim:** To create a `Student` class and display student details.  
**Algorithm:**  
1. Start the program.  
2. Define a class `Student` with attributes: name, branch, subject, year, result.  
3. Create objects `s1` and `s2`.  
4. Assign values to their attributes.  
5. Display all details using `cout`.  
6. End program.  



### **2. Movie Class**
**Aim:** To create a `Movie` class and display movie details.  
**Algorithm:**  
1. Start the program.  
2. Define a class `Movie` with attributes: moviename, protagonist, antagonist, year, IMDB rating.  
3. Create two objects `m1` and `m2`.  
4. Assign values to their attributes.  
5. Display the details of both movies.  
6. End program.  



### **3. Circle Area**
**Aim:** To calculate the area of a circle using a class.  
**Algorithm:**  
1. Start the program.  
2. Define a class `Circle` with attribute radius.  
3. Define a member function `area()` to calculate `π × r²`.  
4. Create object `c1` and take input radius.  
5. Call `area()` and display result.  
6. End program.  



### **4. Calculator**
**Aim:** To create a calculator using member functions.  
**Algorithm:**  
1. Start the program.  
2. Define a class `Calculator` with attributes `a`, `b`.  
3. Define member functions `add()`, `sub()`, `mul()`, `divi()`.  
4. Take input for two numbers.  
5. Perform all operations and display results.  
6. Handle division by zero in `divi()`.  
7. End program.  



### **5. Cube Volume (Inside & Outside Class)**
**Aim:** To calculate volume of a cube with methods inside and outside the class.  
**Algorithm:**  
1. Start the program.  
2. Define class `Cube` with attribute `side`.  
3. Define `volumeIn()` inside the class and `volumeOut()` outside using scope resolution operator.  
4. Create object `c1`.  
5. Take input for side.  
6. Display results from both functions.  
7. End program.  



### **6. Cube Volume (Private Members)**
**Aim:** To calculate volume of cube using private data members.  
**Algorithm:**  
1. Start the program.  
2. Define class `cube` with private attributes: height, width, length.  
3. Define public method `volume()` that calculates `height × width × length`.  
4. Create object `cube1`.  
5. Call `volume()` and display result.  
6. End program.  



##  CONCLUSION  

Through these experiments, we understood:  
- How to define and use **classes and objects** in C++.  
- Implementation of **methods inside and outside** the class.  
- Using **scope resolution operator (::)**.  
- Practical applications of OOP for **real-world entities** (Students, Movies, Circle, Calculator, Cube).  
- The importance of **encapsulation and abstraction** in C++.  
