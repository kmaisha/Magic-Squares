/*Maisha Nabila
COP3503 Section 19F2*/

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "pa1.h"


void createMagicSquares(int size){

	using namespace std;
	int squareArray[15][15];
	// sets arrays to 0
	memset(squareArray, 0, sizeof(squareArray));

	int x = size / 2;
	int y = size - 1;
	int firstx, firsty;

	// place values into an array
	for (int num = 1; num <= size*size; ){
		if (y == size){
			y = 0;
		}
		if (x < 0){
			x = size - 1;
		}
		if (squareArray[x][y]){
			x = firstx;
			y = firsty - 1;
			continue;
		}
		else
			squareArray[x][y] = num++;

		firstx = x;
		firsty = y;
		y++;  x--;
	}

	rowSum = 0;
	colSum = 0;

	// Outputs and Checks values of Magic Square #1
	cout << "Magic Square #1 is: \n" << endl;
	for (x = 0; x<size; x++){
		for (y = 0; y < size; y++){
			printf("%3d ", squareArray[x][y]);
		}
		printf("\n\n");
	}
	//Calculates the sum of each row
	cout << "Checking the sums of every row: ";
	for (int x = 0; x < size; x++){
		for (int y = 0; y < size; y++){
			rowSum = rowSum + squareArray[x][y];
		}
		cout << " " << rowSum;
		rowSum = 0;
	}

	//Calculates the sum of each column
	cout << "\nChecking the sums of every column: ";
	for (int y = 0; y < size; y++){
		for (int x = 0; x < size; x++){
			colSum = colSum + squareArray[x][y];
		}
		cout << " " << colSum;
		colSum = 0;
	}
	//Calculates sum of diagonal elements
	cout << "\nChecking the sums of every diagonal: ";
	int diag1Sum1 = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (j == i)
				diag1Sum1 += squareArray[i][j];
	cout << diag1Sum1 << " ";

	int diag1Sum2 = 0;
	for (int l = 0; l < size; l++)
		for (int m = 0; m < size; m++)
			if (m == ((size - l - 1) % size))
				diag1Sum2 += squareArray[l][m];
	cout << diag1Sum2 << " ";
	printf("\n\n");

	// Outputs and Checks values of Magic Square #2
	cout << "Magic Square #2 is: \n" << endl;
	for (y = 0; y < size; y++) {
		for (x = 0; x < size; x++) {
			printf("%3d ", squareArray[x][y]);
		}
		printf("\n\n");
	}
	//Calculates the sum of each row
	cout << "Checking the sums of every row: ";
	for (int x = 0; x < size; x++){
		for (int y = 0; y < size; y++){
			rowSum = rowSum + squareArray[x][y];
		}
		cout << " " << rowSum;
		rowSum = 0;
	}

	//Calculates the sum of each column
	cout << "\nChecking the sums of every column: ";
	for (int y = 0; y < size; y++){
		for (int x = 0; x < size; x++){
			colSum = colSum + squareArray[x][y];
		}
		cout << " " << colSum;
		colSum = 0;
	}
	//Calculates sum of diagonal elements
	cout << "\nChecking the sums of every diagonal: ";
	int diag2Sum1 = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (j == i)
				diag2Sum1 += squareArray[i][j];
	cout << diag2Sum1 << " ";

	int diag2Sum2 = 0;
	for (int l = 0; l < size; l++)
		for (int m = 0; m < size; m++)
			if (m == ((size - l - 1) % size))
				diag2Sum2 += squareArray[l][m];
	cout << diag2Sum2 << " ";
	printf("\n\n");

	//Pointer used to refer array
	int **thirdSquare = new int*[size];
	for (int num = 0; num < size; num++) {
		thirdSquare[num] = new int[size];
	}

	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			thirdSquare[row][col] = squareArray[row][size - 1 - col];
		}
	}

	// Outputs and Checks values of Magic Square #3
	cout << "Magic Square #3 is: \n" << endl;
	for (x = 0; x < size; x++) {
		for (y = 0; y < size; y++) {
			printf("%3d ", thirdSquare[y][x]);
		}
		printf("\n\n");
	}
	//Calculates the sum of each row
	cout << "Checking the sums of every row: ";
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			rowSum = rowSum + squareArray[x][y];
		}
		cout << " " << rowSum;
		rowSum = 0;
	}

	//Calculates the sum of each column
	cout << "\nChecking the sums of every column: ";
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			colSum = colSum + squareArray[x][y];
		}
		cout << " " << colSum;
		colSum = 0;
	}
	//Calculates sum of diagonal elements
	cout << "\nChecking the sums of every diagonal: ";
	int diag3Sum1 = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (j == i)
				diag3Sum1 += squareArray[i][j];
	cout << diag3Sum1 << " ";

	int diag3Sum2 = 0;
	for (int l = 0; l < size; l++)
		for (int m = 0; m < size; m++)
			if (m == ((size - l - 1) % size))
				diag3Sum2 += squareArray[l][m];
	cout << diag3Sum2 << " ";
	printf("\n\n");

	//Pointer used to refer array
	int **fourthSquare = new int*[size];
	for (int num = 0; num < size; num++) {
		fourthSquare[num] = new int[size];
	}

	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			fourthSquare[row][col] = squareArray[size - 1 - row][col];
		}
	}

	// Outputs and Checks values of Magic Square #4
	cout << "Magic Square #4 is: \n" << endl;
	for (x = 0; x < size; x++) {
		for (y = 0; y < size; y++) {
			printf("%3d ", fourthSquare[y][x]);
		}
		printf("\n\n");
	}
	//Calculates the sum of each row
	cout << "Checking the sums of every row: ";
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			rowSum = rowSum + squareArray[x][y];
		}
		cout << " " << rowSum;
		rowSum = 0;
	}

	//Calculates the sum of each column
	cout << "\nChecking the sums of every column: ";
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			colSum = colSum + squareArray[x][y];
		}
		cout << " " << colSum;
		colSum = 0;
	}

	//Calculates sum of diagonal elements
	cout << "\nChecking the sums of every diagonal: ";
	int diag4Sum1 = 0;
	for (int i = 0; i < size; i++)    
		for (int j = 0; j < size; j++)
			if (j == i)
				diag4Sum1 += squareArray[i][j];
	cout << diag4Sum1 << " ";

	int diag4Sum2 = 0;
	for (int l = 0; l < size; l++)     
		for (int  m = 0; m < size; m++)
			if (m == ((size - l - 1) % size))
				diag4Sum2 += squareArray[l][m];
	cout << diag4Sum2 << " ";
	printf("\n\n");


}

// Runs the Magic Square 

//main program
int main() {
	//data members
	int m = 0;
	bool allowableInput = false;

	//loops until input is allowable
	while (allowableInput == false) {       
		std::cout << "Enter the size of a magic square: ";
		std::cin >> m;
		if (m >= 3 && m <= 15 && (m % 2 == 1) && !(std::cin.fail()))
			allowableInput = true;
		else {
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cout << "Invalid Input.\n\n";
		}
	}
	const int n = m;
	//creates 4 different nxn magic squares
	createMagicSquares(n);   
	return 0;
}