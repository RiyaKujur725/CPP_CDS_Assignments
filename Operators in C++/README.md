Aim

To develop a C++ program that calculates the total marks, percentage, and grade of a student based on marks entered for five subjects and displays the results accordingly.

Theory

This program demonstrates the use of basic input and output operations, arithmetic calculations, and conditional statements in C++. It takes individual marks for five subjects as input, computes the total marks by summing these values, and calculates the average percentage. Based on the percentage obtained, it assigns a grade using a series of conditional checks.

The grading system used follows a typical academic scale where percentages are divided into ranges and assigned letter grades like A+, A, B+, B, C, D, or F for fail. This shows the application of relational operators (>= and <=) and logical operators (&&) in decision making.

This program helps in understanding how to handle multiple inputs, perform arithmetic operations with different data types (int and float), and make decisions using if-else statements to execute different outputs based on conditions.

Algorithm

I. Start the program.
II. Declare integer variables m1, m2, m3, m4, m5 for marks and total for sum of marks.
III. Declare a floating-point variable average to store the percentage.
IV. Display a welcome message for the marks and grade calculator.
V. Prompt the user to enter marks for each of the five subjects one by one.
VI. Read the marks and store them in the respective variables.
VII. Calculate the total marks by adding m1, m2, m3, m4, and m5.
VIII. Calculate the average by dividing the total by 5.0 to get the percentage.
IX. Display the total marks out of 500 and the percentage obtained.
X. Use conditional statements to assign grades based on the percentage:
  - If percentage is between 90 and 100, grade is A+.
  - If percentage is between 80 and 89, grade is A.
  - If percentage is between 70 and 79, grade is B+.
  - If percentage is between 60 and 69, grade is B.
  - If percentage is between 50 and 59, grade is C.
  - If percentage is between 40 and 49, grade is D.
  - Otherwise, grade is F (Fail).
XI. Display the grade.
XII. End the program.

Conclusion

This program successfully calculates and displays a student’s total marks, percentage, and corresponding grade based on the input marks for five subjects. It demonstrates the fundamental concepts of C++ programming such as variable declaration, input/output handling, arithmetic operations, and decision-making using conditional statements.

Through this program, users gain practical experience in handling user inputs, performing calculations involving integers and floating-point numbers, and implementing logical conditions to categorize data. The use of the grading system also highlights real-world application scenarios for programming logic.

Overall, this program serves as a useful tool for beginner programmers to understand how to combine multiple programming concepts into a functional application. It also forms a basis for more complex academic or administrative software where grading and performance evaluation is required.
