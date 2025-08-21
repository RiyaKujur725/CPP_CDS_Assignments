## Aim  
To implement various basic operations on arrays and strings such as searching, finding minimum and maximum values, displaying elements, calculating sum and average, reversing strings, and checking palindromes using C++.  



## Theory  

### Arrays  
An array is a collection of elements of the same data type stored at contiguous memory locations. Arrays allow storing multiple values in a single variable.  

### Searching  
Linear search is a simple search algorithm that checks each element of the array sequentially until the desired element is found or the list ends.  

### Minimum and Maximum  
Finding the minimum and maximum involves iterating through all elements and tracking the smallest and largest values.  

### Strings  
A string is a sequence of characters. Operations on strings include reversing and checking if the string reads the same forwards and backwards (palindrome).  

### Sum and Average  
- **Sum** is the total of all elements.  
- **Average** is the sum divided by the number of elements.  



## Algorithms  

### 1. Linear Search in Array  
**Input:** An integer array and a number to search for.  
**Output:** Index of the number if found, else message not found.  

**Steps:**  
1. Initialize an array with predefined values.  
2. Take the key (number to search) as input.  
3. Loop through the array:  
   - If current element equals key, print index and exit loop.  
4. If key not found, print message.  
5. End.  



### 2. Finding Minimum and Maximum Marks in Array  
**Input:** Number of subjects `n`, marks for each subject.  
**Output:** Minimum and maximum marks.  

**Steps:**  
1. Input number of subjects `n`.  
2. Input marks for each subject into an array.  
3. Initialize `min` and `max` as first element.  
4. Loop through the array starting from second element:  
   - Update `min` if current element is smaller.  
   - Update `max` if current element is larger.  
5. Display `min` and `max`.  
6. End.  



### 3. Search for a Mark in Student Marks Array  
**Input:** Number of subjects `n`, marks, mark to search.  
**Output:** Position of searched mark or not found message.  

**Steps:**  
1. Input number of subjects and marks.  
2. Input the mark to search.  
3. Loop through the marks array:  
   - If mark found, print position and set found flag.  
4. If not found, print message.  
5. End.  



### 4. Student Marks Recorder (Input and Display)  
**Input:** Number of subjects and marks.  
**Output:** Display all marks entered.  

**Steps:**  
1. Input number of subjects.  
2. Input marks for each subject.  
3. Loop through the array and print all marks with subject number.  
4. End.  



### 5. Palindrome Checker for a String  
**Input:** A string without spaces.  
**Output:** Whether the string is palindrome or not.  

**Steps:**  
1. Input string.  
2. Reverse the string by iterating from end to start.  
3. Compare original and reversed strings.  
4. If equal, print palindrome message.  
5. Else, print not palindrome message.  
6. End.  



### 6. Display Elements of an Array  
**Input:** Predefined array of integers.  
**Output:** Elements of the array.  

**Steps:**  
1. Initialize array.  
2. Calculate size using `sizeof` operator.  
3. Loop through array and print each element.  
4. End.  



### 7. String Reverser (No Spaces Input)  
**Input:** A string without spaces.  
**Output:** The reversed string.  

**Steps:**  
1. Input string.  
2. Reverse it by appending characters from the end to a new string.  
3. Print reversed string.  
4. End.  



### 8. Sum and Average of Array Elements  
**Input:** Number of elements, array elements.  
**Output:** Sum and average of the elements.  

**Steps:**  
1. Input number of elements.  
2. Input elements into array.  
3. Initialize sum to zero.  
4. Loop through array to calculate sum.  
5. Calculate average as `sum / number of elements`.  
6. Print array, sum, and average.  
7. End.  



## Conclusion  

These programs demonstrate fundamental programming concepts such as working with arrays and strings in C++. They cover input/output operations, loops, conditional statements, and basic algorithms like searching, finding minimum and maximum values, string reversal, and palindrome checking.  

Understanding and practicing these programs helps build a strong foundation in programming logic and problem-solving skills, which are essential for tackling more complex programming tasks.  
