#include <iostream>
#include <vector>

using namespace std;

// Define a matrix as a vector of vector of integers
typedef vector<vector<int>> Matrix;

// Function to split a matrix into 4 submatrices
void split(const Matrix &A, Matrix &A11, Matrix &A12, Matrix &A21, Matrix &A22) {
    int newSize = A.size() / 2;
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            A11[i][j] = A[i][j]; // Top-left
            A12[i][j] = A[i][j + newSize]; // Top-right
            A21[i][j] = A[i + newSize][j]; // Bottom-left
            A22[i][j] = A[i + newSize][j + newSize]; // Bottom-right
        }
    }
}

// Function to add two matrices
Matrix add(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

// Function to subtract two matrices
Matrix subtract(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

// Strassen's matrix multiplication algorithm
Matrix strassen(const Matrix &A, const Matrix &B) {
    int n = A.size();

    // Base case for recursion (when the matrix is 1x1)
    if (n == 1) {
        Matrix C(1, vector<int>(1, A[0][0] * B[0][0]));
        return C;
    }

    // Initialize submatrices
    int newSize = n / 2;
    Matrix A11(newSize, vector<int>(newSize));
    Matrix A12(newSize, vector<int>(newSize));
    Matrix A21(newSize, vector<int>(newSize));
    Matrix A22(newSize, vector<int>(newSize));

    Matrix B11(newSize, vector<int>(newSize));
    Matrix B12(newSize, vector<int>(newSize));
    Matrix B21(newSize, vector<int>(newSize));
    Matrix B22(newSize, vector<int>(newSize));

    // Split matrices A and B into 4 submatrices
    split(A, A11, A12, A21, A22);
    split(B, B11, B12, B21, B22);

    // Strassen's 7 recursive multiplications
    Matrix M1 = strassen(add(A11, A22), add(B11, B22));
    Matrix M2 = strassen(add(A21, A22), B11);
    Matrix M3 = strassen(A11, subtract(B12, B22));
    Matrix M4 = strassen(A22, subtract(B21, B11));
    Matrix M5 = strassen(add(A11, A12), B22);
    Matrix M6 = strassen(subtract(A21, A11), add(B11, B12));
    Matrix M7 = strassen(subtract(A12, A22), add(B21, B22));

    // Combine results into the result matrix C
    Matrix C11 = add(subtract(add(M1, M4), M5), M7);
    Matrix C12 = add(M3, M5);
    Matrix C21 = add(M2, M4);
    Matrix C22 = add(subtract(add(M1, M3), M2), M6);

    // Combine submatrices into one matrix
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            C[i][j] = C11[i][j];              // Top-left
            C[i][j + newSize] = C12[i][j];     // Top-right
            C[i + newSize][j] = C21[i][j];     // Bottom-left
            C[i + newSize][j + newSize] = C22[i][j]; // Bottom-right
        }
    }

    return C;
}

// Helper function to display a matrix
void displayMatrix(const Matrix &matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Main function to demonstrate Strassen's Matrix Multiplication
int main() {
    // Define two 4x4 matrices
    Matrix A = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15, 16}};

    Matrix B = {{17, 18, 19, 20},
                {21, 22, 23, 24},
                {25, 26, 27, 28},
                {29, 30, 31, 32}};

    // Perform Strassen's Matrix Multiplication
    Matrix C = strassen(A, B);

    // Display the result
    cout << "Matrix A:" << endl;
    displayMatrix(A);
    cout << "Matrix B:" << endl;
    displayMatrix(B);
    cout << "Result of Strassen's Matrix Multiplication (Matrix C):" << endl;
    displayMatrix(C);

    return 0;
}
