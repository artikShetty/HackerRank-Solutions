/******************* Problem Statement*****************/
/*
Printing Patterns using Loops
Link to Problem Statement: https://www.hackerrank.com/challenges/printing-pattern-2/problem
*/
/*****************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int matrix_size = (2*n) - 1;
    int row_val, col_val, final_val;
  	// Complete the code to print the pattern.
    for(int i = 1;i<= matrix_size;i++)
    {
        for(int j = 1; j<=matrix_size;j++)
        {
            row_val = i<matrix_size-i ? i-1 : matrix_size - i;
            col_val = j<matrix_size-j ? j-1 : matrix_size - j;
            final_val = row_val<=col_val ? row_val : col_val;

            printf("%d ", n-final_val);
        }
        printf("\n");
    }
    return 0;
}
