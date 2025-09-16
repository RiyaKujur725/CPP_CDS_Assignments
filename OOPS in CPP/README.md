##  AIM  
To demonstrate the concepts of **Object-Oriented Programming in C++** using simple class-based experiments:  
1. Student Class  
2. Movie Class  
3. Circle Area Calculation  
4. Calculator Class  
5. Cube Volume (Inside & Outside Class)  
6. Cube Volume (Private Data Members)  



## THEORY  

### 1. **Classes and Objects**  
- A **class** is a user-defined blueprint that represents a concept or entity. It defines two main things:  
  - **Attributes (data members):** These store the state or properties of the object.  
  - **Methods (member functions):** These define the behavior or functionality.  

- An **object** is an instance of a class. While the class provides the structure, objects are the actual entities created in memory during program execution. For example, a `Student` class might have attributes like `name` and `year`, while an object `s1` of type `Student` represents one actual student with specific values.  

### 2. **Encapsulation**  
Encapsulation means binding data and methods together in a single unit (the class). It allows us to restrict direct access to some components by using **access specifiers**:  
- `public`: Accessible from anywhere.  
- `private`: Accessible only within the class.  
- `protected`: Accessible within the class and its derived classes.  

Encapsulation helps in **data hiding**, ensuring that the internal representation of an object is shielded from outside interference and misuse.  

### 3. **Abstraction**  
Abstraction focuses on exposing only the necessary details to the user while hiding internal complexities. For instance, when we call the `area()` method of a `Circle` class, we are concerned only with the output, not with the internal formula `π × r²`. This improves clarity and reduces cognitive load.  

### 4. **Scope Resolution Operator (`::`)**  
In C++, member functions can be defined either inside the class or outside.  
- If defined inside, the function automatically becomes **inline**.  
- If defined outside, the **scope resolution operator (`::`)** is used to specify that the function belongs to a particular class.  

This separation allows better code organization, especially when class definitions are kept in header files and implementations in source files.  

### 5. **Applications in the Experiments**  
In the given experiments, the following OOP principles are applied:  
- **Student Class and Movie Class:** Demonstrate how real-world entities can be modeled with attributes and displayed using objects.  
- **Circle Class:** Shows mathematical abstraction by encapsulating radius and exposing an `area()` method.  
- **Calculator Class:** Implements reusability by grouping arithmetic operations in one place.  
- **Cube Volume Programs:** Illustrate both inside and outside function definitions, as well as encapsulation with private members.  

### 6. **Benefits of OOP**  
- **Modularity:** Programs can be divided into independent classes.  
- **Reusability:** Once a class is written, it can be reused in other programs.  
- **Maintainability:** Code becomes easier to debug and update.  
- **Scalability:** Large projects can be managed better due to abstraction and encapsulation.  



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

From the above experiments, we can conclude:

Classes and Objects: We learned how to define classes and create objects to represent real-world entities like students, movies, and shapes.

Methods Inside and Outside Class: Demonstrated the use of the scope resolution operator (::) to define functions externally.

Encapsulation: Private members ensure controlled access to data, protecting internal state.

Abstraction: Methods like area() and volume() hide implementation details, exposing only essential interfaces.

Reusability: The Calculator or Cube classes can be reused and extended in larger applications.

Practical Utility: These examples mirror real-world applications, such as management systems, cataloging, and computational modules.
