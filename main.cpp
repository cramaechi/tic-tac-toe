//Program that simulates a tic-tac-toe game.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

const int ROW = 3;
const int COLUMN = 3;

void playerInput(int& row, int& column, char& player, int& turn);
//Precondition: row and column >= 1 && <= 3. playeNumber == 1 || playNumber == 2.
//Postcondition: The values of row and column have been set to integers from the keyboard.

void updateTicTacToeGame(char game[][COLUMN], int row, int column, char player);
//Precondition: The values of row column, and player have been set.
//Postcondition: Resets a value of an element of the array in correspondence 
//with the values of row and column.

void displayTicTacToeGame(char game[][COLUMN]);
//Precondition: Array game has been filled.
//Displays the tic-tac-toe game.

bool isDiagonal(char game[][COLUMN], char player);
//Precondition: The array game has been filled. player == 'X' ||
//player == 'O'.
//Postcondition: Returns true if there are three consecutive
//player characaters formed diagonally, and false if not.

bool isVertical(char game[][COLUMN], char player);
//Precondition: The array game has been filled. player == 'X' ||
//player == 'O'.
//Postcondition: Returns true if there are three consecutive
//player characaters formed vertically, and false if not.

bool isHorizontal(char game[][COLUMN], char player);
//Precondition: The array game has been filled. player == 'X' ||
//player == 'O'.
//Postcondition: Returns true if there are three consecutive
//player characaters formed horizontally, and false if not.

bool playerWins(char game[][COLUMN], char player);
//Precondition: The array game has been partially filled. arraySize >= 1 && <= 3.
//Postcondition: Returns true if three consecutive characters of 'X' or 'O' are formed 
//horizontally, vertically, or diagonally.

int main()
{
	char ticTacToe[ROW][COLUMN]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'}, player;
	int row, column, turn = 0;
	
	displayTicTacToeGame(ticTacToe);

	do
	{
		playerInput(row, column, player, turn);
		updateTicTacToeGame(ticTacToe, row, column, player);

	}while(!(playerWins(ticTacToe, player)));

	cout<<"Player "<<player<<" wins!\n";

	return 0;
}

void playerInput(int& row, int& column, char& player, int& turn)
{
	if (turn == 0)
	{
		player = 'X';
		turn = 1;
	}
	else 
	{
		player = 'O';
		turn = 0;
	}

	cout<<"Player "<<player<<", mark your position (in coordinates): ";
	cin>>row>>column;
	cout<<"\n\n";
}

void updateTicTacToeGame(char game[][COLUMN], int row, int column, char player)
{
	game[row][column] = player;

	for (int row = 0; row < ROW; row++)
	{
		cout<<setw(37);

		for (int column = 0; column < COLUMN; column++)
			cout<<game[row][column]<<" ";
		
		cout<<"\n\n";
	}
}

void displayTicTacToeGame(char game[][COLUMN])
{
	for (int row = 0; row < ROW; row++)
	{
		cout<<setw(37);

		for (int column = 0; column < COLUMN; column++)
			cout<<game[row][column]<<" ";
		
		cout<<"\n\n";
	}
}

bool playerWins(char game[][COLUMN], char player)
{
	return (isHorizontal(game, player) || isVertical(game, player) || isDiagonal(game, player));
}

bool isHorizontal(char game[][COLUMN], char player)
{
	int threeInARow = 0;

	for (int row = 0; row < ROW; row++)
	{
		for (int column = 0; column < COLUMN; column++)
		{
			if (game[row][column] == player)
				++threeInARow;
		}

		if (threeInARow == 3)
			return true;
		else
			threeInARow = 0;
	}

	return false;
}

bool isVertical(char game[][COLUMN], char player)
{
	int threeInARow = 0;

	for (int column = 0; column < COLUMN; column++)
	{
		for (int row = 0; row < ROW; row++)
		{
			if (game[row][column] == player)
				++threeInARow;
		}

		if (threeInARow == 3)
			return true;
		else
			threeInARow = 0;
	}

	return false;
}

bool isDiagonal(char game[][COLUMN], char player)
{
	int threeInARow = 0;

	for (int row = 0; row < ROW; row++)
	{
		for (int column = 0; column < COLUMN; column++)
		{
			if ((row == column) && game[row][column] == player)
				++threeInARow;
		}

		if (threeInARow == 3)
			return true;
	}
	
	threeInARow = 0;

	for (int row = 0; row < ROW; row++)
	{
		for (int column = 0; column < COLUMN; column++)
		{
			if ((row + column == COLUMN - 1) && game[row][column] == player)
				++threeInARow;
		}

		if (threeInARow == 3)
			return true;
	}

	return false;
}
