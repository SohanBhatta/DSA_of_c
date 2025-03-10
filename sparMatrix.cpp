//Checking Spar matrix
#include <stdio.h>

int main() {
    int rows, cols, count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                count++; 
            }
        }
    }

    if (count > (rows * cols) / 2) {
        printf("The matrix is a Sparse Matrix.\n");
    } else {
        printf("The matrix is NOT a Sparse Matrix.\n");
    }

    return 0;
}

