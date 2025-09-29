## AIM

The aim of these programs is to:

1. Understand the concept of **inheritance** in C++ and how it allows one class to acquire properties and functions from another class.
2. Demonstrate various types of inheritance such as:
   - Multiple Inheritance
   - Multilevel Inheritance
   - Hierarchical Inheritance
   - Use of Protected and Private Members in Inheritance
3. Explore how data members and functions are shared across base and derived classes.
4. Learn how to control accessibility of members using access specifiers (`public`, `protected`, `private`).
5. Provide real-world inspired examples such as student profiles, company departments, engineering branches, and GitHub repositories.

---

## THEORY
Types of Inheritance

Single Inheritance
A derived class inherits from only one base class.

Multiple Inheritance
A derived class inherits from more than one base class.

Multilevel Inheritance
A class is derived from another derived class, forming a chain.

Hierarchical Inheritance
Multiple derived classes inherit from a single base class.

Hybrid Inheritance
A combination of multiple types of inheritance.

Access Specifiers in Inheritance

Public: Members are accessible from outside the class.

Protected: Members are accessible within the class and its derived classes.

Private: Members are accessible only within the class itself.

When inheriting:

Public inheritance keeps public members public and protected members protected.

Protected inheritance converts public and protected members into protected.

Private inheritance converts all inherited members into private.

Practical Importance

Inheritance models real-world relationships:

A profile inherits details from both student and subject.

Employees inherit from departments and companies.

Specialized engineering branches inherit from a common ENTC department.

GitHub users can access protected or private repository data with controlled access.

ALGORITHMS
Program 1: Multiple Inheritance (Student and Subject)

Define class Student with attributes prn and name.

Define class Subject with attributes sub and marks.

Define derived class Profile that inherits publicly from both classes.

Add an attribute div to Profile.

Create object p1 of type Profile.

Assign values to all attributes and display them.

End program.

Program 2: Multilevel Inheritance (Company, Department, Employee)

Define base class Company with attributes and a function sales().

Define derived class Department from Company.

Define derived class Employee from Department.

Create an object e1 of type Employee.

Assign employee details and company details.

Call base class functions using derived object.

Display all details.

End program.

Program 3: Hierarchical Inheritance (ENTC Branch Specializations)

Define base class Entc with attribute students.

Define two classes derived from Entc: Vlsi and Embedded.

Derive Verifengg and Designengg from Vlsi.

Derive Developer and Micro from Embedded.

Create objects for each derived class.

Assign values and display counts for students in different categories.

End program.

Program 4: Protected and Private Members with Inheritance (GitHub Example)

Define class Github with:

Public function disp().

Protected member repo.

Private function disp2().

Public wrapper function callDisp2() to access disp2().

Define class User inheriting from Github in protected mode.

Add functions in User to set and display protected member repo.

Add a function to call the base class public function disp().

In main(), create objects of Github and User.

Demonstrate access to private, protected, and public members.

End program.


CONCLUSION

From these programs, the following conclusions are drawn:

Multiple Inheritance allows combining attributes and behaviors from more than one base class into a derived class. This was demonstrated in the Student-Subject-Profile example.

Multilevel Inheritance enables a chain of inheritance where a derived class acts as a base for another class. The Company-Department-Employee example demonstrated this concept.

Hierarchical Inheritance allows multiple classes to inherit from a single base class. The ENTC program showed how different engineering specializations can branch from a common base class.

Access Specifiers in Inheritance provide controlled access to class members. Public members are easily accessible, protected members are accessible to derived classes, and private members require wrapper functions for access. The GitHub example highlighted these rules clearly.

Practical Applications:

Educational systems can model student records using inheritance.

Corporate structures can be represented using multilevel inheritance.

Academic branches and divisions can be managed using hierarchical inheritance.

Secure systems such as GitHub repositories can be managed using access specifiers.

Key Learning:

Inheritance promotes reusability by allowing derived classes to reuse base class code.

It enhances maintainability since changes in base classes propagate to derived classes.

It demonstrates real-world relationships in programming.

Proper use of access specifiers ensures data security and encapsulation.

Overall, these programs reinforce the importance of inheritance in object-oriented programming and highlight its versatility in solving real-world problems.
