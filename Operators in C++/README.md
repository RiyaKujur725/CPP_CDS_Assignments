## AIM  
To develop a C++ program that calculates the total marks, percentage, and grade of a student based on marks entered for five subjects and displays the results accordingly.  



## THEORY  

This program demonstrates the use of **basic input and output operations**, **arithmetic calculations**, and **conditional statements** in C++.  

- It takes marks for **five subjects** as input.  
- Computes the **total marks** by summing the values.  
- Calculates the **average percentage**.  
- Assigns a **grade** based on the percentage using conditional checks.  

The grading system follows a typical academic scale:  

- **90–100** → A+  
- **80–89** → A  
- **70–79** → B+  
- **60–69** → B  
- **50–59** → C  
- **40–49** → D  
- **Below 40** → F (Fail)  

This demonstrates the use of:  
- **Relational operators** (`>=`, `<=`)  
- **Logical operators** (`&&`)  
- **Decision making** with `if-else` statements  

It also shows how to:  
- Handle multiple inputs  
- Perform arithmetic operations with both **int** and **float**  
- Produce different outputs based on given conditions  



## ALGORITHM  

1. **Start the program.**  
2. Declare integer variables `m1, m2, m3, m4, m5` for marks and `total` for sum of marks.  
3. Declare a floating-point variable `average` to store the percentage.  
4. Display a welcome message for the **Marks and Grade Calculator**.  
5. Prompt the user to enter marks for each of the five subjects one by one.  
6. Read the marks and store them in the respective variables.  
7. Calculate the **total marks** = `m1 + m2 + m3 + m4 + m5`.  
8. Calculate the **average (percentage)** = `total / 5.0`.  
9. Display the **total marks (out of 500)** and the **percentage obtained**.  
10. Use conditional statements to assign grades:  
    - If percentage `>= 90` → **A+**  
    - Else if percentage `>= 80` → **A**  
    - Else if percentage `>= 70` → **B+**  
    - Else if percentage `>= 60` → **B**  
    - Else if percentage `>= 50` → **C**  
    - Else if percentage `>= 40` → **D**  
    - Else → **F (Fail)**  
11. Display the grade.  
12. **End the program.**  



## CONCLUSION  

This program successfully calculates and displays a student’s **total marks**, **percentage**, and **grade** based on the input marks for five subjects.  

It demonstrates:  
- **Variable declaration**  
- **Input/output handling**  
- **Arithmetic operations**  
- **Decision-making** using conditional statements  
