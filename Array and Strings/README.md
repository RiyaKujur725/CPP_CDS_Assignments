Aim:
To implement various basic operations on arrays and strings such as searching, finding minimum and maximum values, displaying elements, calculating sum and average, reversing strings, and checking palindromes using C++.

Theory:
Arrays:
An array is a collection of elements of the same data type stored at contiguous memory locations. Arrays allow storing multiple values in a single variable.

Searching:
Linear search is a simple search algorithm that checks each element of the array sequentially until the desired element is found or the list ends.

Minimum and Maximum:
Finding the minimum and maximum involves iterating through all elements and tracking the smallest and largest values.

Strings:
A string is a sequence of characters. Operations on strings include reversing and checking if the string reads the same forwards and backwards (palindrome).

Sum and Average:
Sum is the total of all elements, and average is the sum divided by the number of elements.

Algorithms:
1. Linear Search in Array
Input: An integer array and a number to search for.
Output: Index of the number if found, else message not found.

Steps:

Initialize an array with predefined values.

Take the key (number to search) as input.

Loop through the array:

If current element equals key, print index and exit loop.

If key not found, print message.

End.

2. Finding Minimum and Maximum Marks in Array
Input: Number of subjects n, marks for each subject.
Output: Minimum and maximum marks.

Steps:

Input number of subjects n.

Input marks for each subject into an array.

Initialize min and max as first element.

Loop through the array starting from second element:

Update min if current element is smaller.

Update max if current element is larger.

Display min and max.

End.

3. Search for a Mark in Student Marks Array
Input: Number of subjects n, marks, mark to search.
Output: Position of searched mark or not found message.

Steps:

Input number of subjects and marks.

Input the mark to search.

Loop through the marks array:

If mark found, print position and set found flag.

If not found, print message.

End.

4. Student Marks Recorder (Input and Display)
Input: Number of subjects and marks.
Output: Display all marks entered.

Steps:

Input number of subjects.

Input marks for each subject.

Loop through the array and print all marks with subject number.

End.

5. Palindrome Checker for a String
Input: A string without spaces.
Output: Whether the string is palindrome or not.

Steps:

Input string.

Reverse the string by iterating from end to start.

Compare original and reversed strings.

If equal, print palindrome message.

Else, print not palindrome message.

End.

6. Display Elements of an Array
Input: Predefined array of integers.
Output: Elements of the array.

Steps:

Initialize array.

Calculate size using sizeof operator.

Loop through array and print each element.

End.

7. String Reverser (No Spaces Input)
Input: A string without spaces.
Output: The reversed string.

Steps:

Input string.

Reverse it by appending characters from the end to a new string.

Print reversed string.

End.

8. Sum and Average of Array Elements
Input: Number of elements, array elements.
Output: Sum and average of the elements.

Steps:

Input number of elements.

Input elements into array.

Initialize sum to zero.

Loop through array to calculate sum.

Calculate average as sum/number of elements.

Print array, sum, and average.

End.

Conclusion:
These programs demonstrate fundamental programming concepts such as working with arrays and strings in C++. They cover input/output operations, loops, conditional statements, and basic algorithms like searching, finding minimum and maximum values, string reversal, and palindrome checking. Understanding and practicing these programs helps build a strong foundation in programming logic and problem-solving skills, essential for more complex programming tasks.
