#include <stdio.h>
void read(int mat[10][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
        {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
}

void display(int mat[10][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

void add(int mat1[10][10], int mat2[10][10], int res[10][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            res[i][j] = mat1[i][j] + mat2[i][j];
}

void multiply(int mat1[10][10], int mat2[10][10], int res[10][10], int row1, int col1, int col2)
{
    int i, j, k;
    for(i = 0; i < row1; i++)
        for(j = 0; j < col2; j++)
        {
            res[i][j] = 0;
            for(k = 0; k < col1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
}

void transpose(int mat[10][10], int trans[10][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            trans[j][i] = mat[i][j];
}

int main()
{
    int mat1[10][10], mat2[10][10], res[10][10], trans[10][10];
    int row1, col1, row2, col2;

    printf("Enter rows and columns for first matrix:\n ");
    scanf("%d %d", &row1, &col1);
    read(mat1, row1, col1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);
    read(mat2, row2, col2);

    if(row1 == row2 && col1 == col2)
    {
        add(mat1, mat2, res, row1, col1);
        printf("\nMatrix Addition:\n");
        display(res, row1, col1);
    }
    else
        printf("\nAddition not possible (dimension mismatch).\n");

    if(col1 == row2)
    {
        multiply(mat1, mat2, res, row1, col1, col2);
        printf("\nMatrix Multiplication:\n");
        display(res, row1, col2);
    }
    else
        printf("\nMultiplication not possible (dimension mismatch).\n");

    transpose(mat1, trans, row1, col1);
    printf("\nTranspose of first matrix:\n");
    display(trans, col1, row1);

    transpose(mat2, trans, row2, col2);
    printf("\nTranspose of second matrix:\n");
    display(trans, col2, row2);

    return 0;
}
