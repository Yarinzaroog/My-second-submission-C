// Course: Advanced C programming
// exercise 2, question 1
// file name: ex2_q1.c

// --------------------------- //
//
//	Assigned by:
//		Student1_Full_Name #ID
//		Student2_Full_Name #ID
//
// --------------------------- //

// --------------------------------------- //
// Include and definition package section:
// --------------------------------------- //
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define scanf_s scanf
#define ROWS 4
#define COLS 4
// --------------------------------------- //
// Types declration section:
// --------------------------------------- //
typedef struct fraction
{
	int num, numerator, denominator;
} fraction;
// --------------------------------------- //
// Functions declration section:
// --------------------------------------- //

fraction ** createMatrix(int rows, int cols);
fraction ** matrixAverageNeighbor(int A[][COLS], int rows, int cols);
fraction neighborFractionAverage(int A[][COLS], int i, int j, int rows, int cols);
void printMatrix(fraction** B, int rows, int cols);
void freeMatrix(fraction** B, int rows);
/** DECLARE HERE ONE FUNCTION ACCORDING TO YOUR NEEDS **/
// --------------------------------------- //
// Main section:
// --------------------------------------- //
int main()
{	
	fraction** B;
	int A[ROWS][COLS] = {
		{5, 12, 6, 8},
		{4, 7, 0, 9},
		{13, 20, 8, 2},
		{18, 0, 2, 6}
	};
	
	// Start Program:
	printf("Start Program\n");

	// call functions:
	B = matrixAverageNeighbor(A, ROWS, COLS);

	// write output:
	printf("Output:\n");
	printMatrix(B, ROWS, COLS);

	// free matrix:
	freeMatrix(B, ROWS);

	return 0;
}
// --------------------------- //

/// <summary>
/// This code required one extra important function.
/// Think hard about what it should be.
/// </summary>
/// <params>You decide</params>
/// <returns>You decide</returns>

	// your code:

// --------------------------- //

/// <summary>
/// This function allocate a dynamic matrix from type fraction.
/// </summary>
/// <param>int rows - the number of rows in the matrix</param>
/// <param>int cols - the number of colums in the matrix</param>
/// <returns>allocated empty matrix B from type fraction</returns>
fraction** createMatrix(int rows, int cols)
{
	// your code:
}
// --------------------------- //

/// <summary>
/// The function receives a static matrix 
/// and for each cell in the matrix calculates 
/// the average of its neighbors.  
/// </summary>
/// <param>int A[][COLS] - the static matrix</param>
/// <param>int rows - the number of rows in the matrix</param>
/// <param>int cols - the number of colums in the matrix</param>
/// <returns>matrix B from type fraction</returns>
fraction** matrixAverageNeighbor(int A[][COLS], int rows, int cols)
{
	// your code:
}
// --------------------------- //

/// <summary>
/// The function receives a static matrix, and a cell value,
/// and calculates the average of its neighbors.  
/// </summary>
/// <param>int A[][COLS] - the static matrix</param>
/// <param>int i - the cell row number in matrix</param>
/// <param>int j - the cell colum number in the matrix</param>
/// <param>int rows - the number of rows in the matrix</param>
/// <param>int cols - the number of colums in the matrix</param>
/// <returns>value from type fraction</returns>
fraction neighborFractionAverage(int A[][COLS], int i, int j, int rows, int cols)
{
	// your code:
}
// --------------------------- //


/// <summary>
/// The function receives a dynamic matrix from type fraction,
/// and print the matrix as double varibles.  
/// </summary>
/// <param>fraction** B - the dynamic matrix</param>
/// <param>int rows - the number of rows in the matrix</param>
/// <param>int cols - the number of colums in the matrix</param>
/// <returns>None</returns>
void printMatrix(fraction** B, int rows, int cols)
{
	// your code:
}
// --------------------------- //


/// <summary>
/// The function receives a dynamic matrix from type fraction,
/// and free all allocated memory.  
/// </summary>
/// <param>fraction** B - the dynamic matrix</param>
/// <param>int rows - the number of rows in the matrix</param>
/// <returns>None</returns>
void freeMatrix(fraction** B, int rows)
{
	// your code:
}
// --------------------------- //
