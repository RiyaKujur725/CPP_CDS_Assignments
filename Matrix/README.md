# Matrix Operations in C++

AIM
To write and execute C++ programs for:
1. Addition of two matrices  
2. Multiplication of two matrices  
3. Diagonal addition of a square matrix  
4. Transpose of a matrix  
5. Comparing elements of the first row with the second row in a matrix  



APPLICATION USED : VS Code



THEORY

1. Addition of Two Matrices
Matrix addition is done by adding the corresponding elements of the two matrices. Both matrices must have the same order (same number of rows and columns).

2. Multiplication of Two Matrices
Matrix multiplication involves multiplying rows of the first matrix with columns of the second matrix. The number of columns in the first matrix must equal the number of rows in the second matrix.

### 3. Diagonal Addition
The diagonal of a square matrix consists of elements where the row and column indices are equal. Diagonal addition is the sum of all these elements.

4. Transpose of a Matrix
The transpose of a matrix is obtained by swapping its rows and columns. The element at position `(i, j)` becomes `(j, i)`.

5. Compare First Row with Second Row
This process checks whether the elements in the first row are equal to the corresponding elements in the second row, column by column.



ALGORITHM

Program 1: Addition of Two Matrices
1. Start the program.  
2. Input number of rows and columns.  
3. Input elements of the first matrix.  
4. Input elements of the second matrix.  
5. Add corresponding elements of both matrices.  
6. Display the resulting sum matrix.  
7. Stop.



Program 2: Multiplication of Two Matrices
1. Start the program.  
2. Input rows and columns for both matrices.  
3. Check if the multiplication is possible (`columns of first = rows of second`).  
4. Input elements of both matrices.  
5. Multiply using nested loops: `result[i][j] += first[i][k] * second[k][j]`.  
6. Display the resulting matrix.  
7. Stop.



Program 3: Diagonal Addition
1. Start the program.  
2. Input the size of the square matrix.  
3. Input matrix elements.  
4. Initialize sum = 0.  
5. Loop through the matrix and add elements where `i == j`.  
6. Display the sum.  
7. Stop.



Program 4: Transpose of a Matrix
1. Start the program.  
2. Input rows and columns of the matrix.  
3. Input matrix elements.  
4. Swap rows and columns: `transpose[j][i] = matrix[i][j]`.  
5. Display the transpose.  
6. Stop.



Program 5: Compare First Row with Second Row
1. Start the program.  
2. Input rows and columns of the matrix.  
3. Input matrix elements.  
4. If rows < 2, display a message and stop.  
5. Compare `matrix[0][j]` with `matrix[1][j]` for each column.  
6. Display whether they are equal or not for each column.  
7. Stop.



CONCLUSION
By implementing these programs, we understand:
- How to perform basic operations on matrices using nested loops.  
- The conditions required for matrix addition and multiplication.  
- How to work with specific elements like diagonals and transposes.  
- How to compare rows in a matrix.

These operations form the foundation for more advanced topics in numerical methods, computer graphics, and data processing.
