#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<vector>
#include <conio.h>
using namespace std;
//vectors are  used to store Multiple arrays. so i stored my sudoku grids in it.
// i used it because my array was not being loaded from the file.
//a sudoku board with empty grids
void sudokuboard1(vector<vector<int>>& sudoku1)
{
	const int s = 9;
	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++)
		{
			sudoku1[r][c] = 0;
		}
	}
}
void sudokuboard(vector<vector<int>>& sudoku)
{
	const int s = 9;
	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++)
		{
			sudoku[r][c] = 0;
		}
	}
}
void sudokuboard2(vector<vector<int>>& sudoku2)
{
	const int s = 9;
	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++)
		{
			sudoku2[r][c] = 0;
		}
	}
}
void getumbersfromfile(vector<vector<int>>& sudoku)
{
	ifstream infile;
	int cell;
	string filename = "sudoku-game.txt";
	infile.open("sudoku-game.txt");
	if (infile.good())
	{
		for (int r = 0; r < 9; r++) {
			for (int c = 0; c < 9; c++)
			{
				infile >> cell;
				sudoku[r][c] = cell;
				//infile >> sudoku[0][0];
				//infile.close();
			}
		}
	}
	else
	{
		cout << "error!there seems to be somethong wrong with your file" << endl;
	}

}
void getumbersfromfile1(vector<vector<int>>& sudoku1)
{
	ifstream infile;
	int cell;
	string filename = "sudoku-game1.txt";
	infile.open("sudoku-game1.txt");
	if (infile.good())
	{
		for (int r = 0; r < 9; r++) {
			for (int c = 0; c < 9; c++)
			{
				infile >> cell;
				sudoku1[r][c] = cell;
				//infile >> sudoku[0][0];
				//infile.close();
			}
		}
	}
	else
	{
		cout << "error!there seems to be somethong wrong with your file" << endl;
	}

}
void getumbersfromfile2(vector<vector<int>>& sudoku2)
{
	ifstream infile;
	int cell;
	string filename = "sudoku-game2.txt";
	infile.open("sudoku-game2.txt");
	if (infile.good())
	{
		for (int r = 0; r < 9; r++) {
			for (int c = 0; c < 9; c++)
			{
				infile >> cell;
				sudoku2[r][c] = cell;
				//infile >> sudoku[0][0];
				//infile.close();
			}
		}
	}
	else
	{
		cout << "error!there seems to be somethong wrong with your file" << endl;
	}

}
void displaysudokuboard1(vector<vector<int>>& sudoku)//int sudoku[][9])
{
	srand(time(0));
	for (int r = 0; r < 9; r++)
	{
		//since the matrix is 3x3 so we divide it by 3
		if (r % 3 == 0)
		{
			cout << "--------------#----------------#--------------" << endl;
		}
		for (int c = 0; c < 9; c++)
		{
			if ((c % 9) != 0 && (c % 9) % 3 == 0)
			{
				cout << "|";
			}
			if (c > 0)
			{
				cout << " ";
			}
			cout << sudoku[r][c];
		}
		cout << endl;
	}
}
void displaysudokuboard2(vector<vector<int>>& sudoku1)//int sudoku[][9])
{
	srand(time(0));
	for (int r = 0; r < 9; r++)
	{
		//since the matrix is 3x3 so we divide it by 3
		if (r % 3 == 0)
		{
			cout << "--------------#----------------#--------------" << endl;
		}
		for (int c = 0; c < 9; c++)
		{
			if ((c % 9) != 0 && (c % 9) % 3 == 0)
			{
				cout << "|";
			}
			if (c > 0)
			{
				cout << " ";
			}
			cout << sudoku1[r][c];
		}
		cout << endl;
	}
}
void displaysudokuboard3(vector<vector<int>>& sudoku3)//int sudoku[][9])
{
	srand(time(0));
	for (int r = 0; r < 9; r++)
	{
		//since the matrix is 3x3 so we divide it by 3
		if (r % 3 == 0)
		{
			cout << "--------------#----------------#--------------" << endl;
		}
		for (int c = 0; c < 9; c++)
		{
			if ((c % 9) != 0 && (c % 9) % 3 == 0)
			{
				cout << "|";
			}
			if (c > 0)
			{
				cout << " ";
			}
			cout << sudoku3[r][c];
		}
		cout << endl;
	}
}
bool fixedvaluesofboard(vector<vector<int>>& sudoku/*int sudoku[][9]*/, int row, int col) {
	if (sudoku[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool fixedvaluesofboard1(vector<vector<int>>& sudoku1, int row, int col) {
	if (sudoku1[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool fixedvaluesofboard2(vector<vector<int>>& sudoku2, int row, int col) {
	if (sudoku2[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool checkingRowsofsudoku(vector<vector<int>>& sudoku/*int sudoku[][9]*/, int row, int number)
{
	int newv;
	for (int c = 0; c < 9; c++)
	{
		newv = sudoku[(row - 1)][c];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "opps!the number you entered is repeated as it is already in row" << endl;
			return true;
		}
	}
	return false;
}
bool checkingRowsofsudoku1(vector<vector<int>>& sudoku1, int row, int number)
{
	int newv;
	for (int c = 0; c < 9; c++)
	{
		newv = sudoku1[(row - 1)][c];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "opps!the number you entered is repeated as it is already in row" << endl;
			return true;
		}
	}
	return false;
}
bool checkingRowsofsudoku2(vector<vector<int>>& sudoku2, int row, int number)
{
	int newv;
	for (int c = 0; c < 9; c++)
	{
		newv = sudoku2[(row - 1)][c];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "opps!the number you entered is repeated as it is already in row" << endl;
			return true;
		}
	}
	return false;
}
bool checkingcolofsudoku(vector<vector<int>>& sudoku/*int sudoku[][9] */, int col, int number)
{
	int newv;
	for (int r = 0; r < 9; r++)
	{
		newv = sudoku[r][(col - 1)];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "oops!the number you have entered is already present in the col" << endl;
		}
	}
	return false;
}
bool checkingcolofsudoku1(vector<vector<int>>& sudoku1, int col, int number)
{
	int newv;
	for (int r = 0; r < 9; r++)
	{
		newv = sudoku1[r][(col - 1)];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "oops!the number you have entered is already present in the col" << endl;
		}
	}
	return false;
}
bool checkingcolofsudoku2(vector<vector<int>>& sudoku2, int col, int number)
{
	int newv;
	for (int r = 0; r < 9; r++)
	{
		newv = sudoku2[r][(col - 1)];
		if (newv == number)//newvalue must not be equal to already present values
		{
			cout << "oops!the number you have entered is already present in the col" << endl;
		}
	}
	return false;
}
bool checkingboxesofsudoku(vector<vector<int>>& sudoku/*int sudoku[][9] */, int row, int col, int number)
{
	int rowb = (row - 1) / 3;//these all are basically the sectors of the grid and define their size too this checks the box for number repetation.
	int colb = (col - 1) / 3;
	int s1 = rowb + 3;
	int s2 = colb + 3;
	for (int r = rowb; r < s1; r++) {
		for (int c = colb; c < s2; c++)
		{
			if (sudoku[r][c] == number)
			{
				cout << "oops!the number you have entered is already present in thr box" << endl;
				return true;
			}
		}
	}
	return false;
}
bool checkingboxesofsudoku1(vector<vector<int>>& sudoku1, int row, int col, int number)
{
	int rowb = (row - 1) / 3;//these all are basically the sectors of the grid and define their size too this checks the box for number repetation.
	int colb = (col - 1) / 3;
	int s1 = rowb + 3;
	int s2 = colb + 3;
	for (int r = rowb; r < s1; r++) {
		for (int c = colb; c < s2; c++)
		{
			if (sudoku1[r][c] == number)
			{
				cout << "oops!the number you have entered is already present in thr box" << endl;
				return true;
			}
		}
	}
	return false;
}
bool checkingboxesofsudoku2(vector<vector<int>>& sudoku2, int row, int col, int number)
{
	int rowb = (row - 1) / 3;//these all are basically the sectors of the grid and define their size too this checks the box for number repetation.
	int colb = (col - 1) / 3;
	int s1 = rowb + 3;
	int s2 = colb + 3;
	for (int r = rowb; r < s1; r++) {
		for (int c = colb; c < s2; c++)
		{
			if (sudoku2[r][c] == number)
			{
				cout << "oops!the number you have entered is already present in thr box" << endl;
				return true;
			}
		}
	}
	return false;
}
int thesudokuboard[9][9];
bool erasethe0s(vector<vector<int>>& sudoku/*int thesudokuboard[][9] */, int row, int col)
{
	if (thesudokuboard[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool erasethe0s1(vector<vector<int>>& thesudokuboard1, int row, int col)
{
	if (thesudokuboard1[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool erasethe0s2(vector<vector<int>>& thesudokuboard2, int row, int col)
{
	if (thesudokuboard2[(row - 1)][(col - 1)] == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main(int argumentc, char* argumentv[])
{
	system("color 4e");
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "%%%                                                                   %%%" << endl;
	cout << "%%%  0 0 0     0    0    0 0 0 0 0     0 0 0      0   0      0 0 0    %%%" << endl;
	cout << "%%%  0         0    0    0        0   0     0     0  0      0     0   %%%" << endl;
	cout << "%%%  0 0 0     0    0    0        0   0     0     0000      0     0   %%%" << endl;
	cout << "%%%       0    0    0    0        0   0     0     0   0     0     0   %%%" << endl;
	cout << "%%%       0    0    0    0        0   0     0     0    0    0     0   %%%" << endl;
	cout << "%%%  0 0 0       0       0 0 0 0 0     0 0 0      0     0    0 0 0    %%%" << endl;

	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%% R U L E S%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "[1] the program will display a 9x9 grid\n. fill the row and col with numbers" << endl;
	cout << "[2] the number can only be between 1 and 9" << endl;
	cout << "[3] already present no cannot be redefined" << endl;
	cout << "[4] can can convet yout ans to 0 to eneter again.HAVE FUN!!!" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "[1] level-1" << endl;
	cout << "[2] level-2" << endl;
	cout << "[3] level-3" << endl;
	int main;
	cout << "choose your level(1,2,3)";
	cin >> main;
	
	if (main == 1)
	{
		int row;
		int col;
		int number;
		string filename;
		vector<vector<int>> sudoku(9, vector<int>(9));
		vector<vector<int>> thesudokuboard(9, vector<int>(9));
		//int sudoku[9][9];
		//int thesudokuboard[9][9];
		switch (argumentc)
		{
		default:
			filename = "sudoku-game.txt";
			break;
		}
		sudokuboard(sudoku);
		getumbersfromfile(sudoku);
		sudokuboard(thesudokuboard);
		getumbersfromfile(thesudokuboard);
		//getumbersfromfile1(thesudokuboard);
		//getumbersfromfile1(thesudokuboard);
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0 0 0 0 0     0 0 0      0   0      0 0 0    %%%" << endl;
		cout << "%%%  0         0    0    0        0   0     0     0  0      0     0   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0        0   0     0     0000      0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0   0     0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0    0    0     0   %%%" << endl;
		cout << "%%%  0 0 0       0       0 0 0 0 0     0 0 0      0     0    0 0 0    %%%" << endl;

		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%% R U L E S%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "[1] the program will display a 9x9 grid\n. fill the row and col with numbers" << endl;
		cout << "[2] the number can only be between 1 and 9" << endl;
		cout << "[3] already present no cannot be redefined" << endl;
		cout << "[4] can can convet yout ans to 0 to eneter again.HAVE FUN!!!" << endl;
		cout << "%%%                          MAIN MENU                                %%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		//main mennu
		string userschoice = "";
		do
		{
			cout << "%%%                                                                   %%%" << endl;
			cout << "%%%        please choose from the below plz                           %%%" << endl;
			cout << "%%%                        --> print                                  %%%" << endl;
			cout << "%%%                         -->play                                   %%%" << endl;
			cout << "%%%                          -->change                                %%%" << endl;
			cout << "%%%                          -->quit                                  %%%" << endl;
			cout << "%%%                           -->resume                               %%%" << endl;
			cin >> userschoice;
			if (userschoice == "print")
			{
				displaysudokuboard1(sudoku);
				continue;
			}
			if (userschoice == "play")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				cout << "enter the number you want" << endl;
				cin >> number;
				if (fixedvaluesofboard(sudoku, row, col) == false && checkingRowsofsudoku(sudoku, row, number) == false && checkingcolofsudoku(sudoku, col, number) == false)
				{
					sudoku[(row - 1)][(col - 1)] = number;
					displaysudokuboard1(sudoku);
					cout << "you are doing great" << endl;
				}
				else
				{
					cout << " " << endl;
				}
				continue;
			}
			if (userschoice == "change")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				if (erasethe0s(thesudokuboard, row, col) == false)
				{
					sudoku[(row - 1)][(col - 1)] = 0;
					displaysudokuboard1(sudoku);
				}
				else
				{
					cout << "oops!the number you have entered is already fixed" << endl;
				}
				continue;
			}
			if (userschoice == "resume")
			{
				displaysudokuboard2(sudoku);
				continue;
			}
		} while (userschoice != "quit");
		if (userschoice == "quit")
		{
			char choice;
			cout << "are you sure you want to quit(y/n)";
			cin >> choice;
			if (choice == 'y')
			{
				cout << "thank you for playing. come again!" << endl;
			}
			else {
				cout << "we will save the game" << endl;
				cout << "saved!!!!" << endl;
			}
		}
		return 0;
	}
	else if (main == 2)
	{
		int row;
		int col;
		int number;
		string filename;
		vector<vector<int>> sudoku1(9, vector<int>(9));
		vector<vector<int>> thesudokuboard1(9, vector<int>(9));
		//int thesudokuboard[9][9];
		switch (argumentc)
		{
		default:
			filename = "sudoku-game1.txt";
			break;
		}
		sudokuboard1(thesudokuboard1);
		sudokuboard1(sudoku1);
		getumbersfromfile1(sudoku1);
		getumbersfromfile1(thesudokuboard1);
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0 0 0 0 0     0 0 0      0   0      0 0 0    %%%" << endl;
		cout << "%%%  0         0    0    0        0   0     0     0  0      0     0   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0        0   0     0     0000      0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0   0     0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0    0    0     0   %%%" << endl;
		cout << "%%%  0 0 0       0       0 0 0 0 0     0 0 0      0     0    0 0 0    %%%" << endl;

		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%% R U L E S%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "[1] the program will display a 9x9 grid\n. fill the row and col with numbers" << endl;
		cout << "[2] the number can only be between 1 and 9" << endl;
		cout << "[3] already present no cannot be redefined" << endl;
		cout << "[4] can can convet yout ans to 0 to eneter again.HAVE FUN!!!" << endl;
		cout << "%%%                          MAIN MENU                                %%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		//main mennu
		string userschoice = "";
		do
		{
			cout << "%%%                                                                   %%%" << endl;
			cout << "%%%        please choose from the below plz                           %%%" << endl;
			cout << "%%%                        --> print                                  %%%" << endl;
			cout << "%%%                         -->play                                   %%%" << endl;
			cout << "%%%                          -->change                                %%%" << endl;
			cout << "%%%                          -->quit                                  %%%" << endl;
			cout << "%%%                           -->resume                               %%%" << endl;
			cin >> userschoice;
			if (userschoice == "print")
			{
				getumbersfromfile1(sudoku1);
				displaysudokuboard2(sudoku1);
				continue;
			}
			if (userschoice == "play")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				cout << "enter the number you want" << endl;
				cin >> number;
				if (fixedvaluesofboard1(sudoku1, row, col) == false && checkingRowsofsudoku1(sudoku1, row, number) == false && checkingcolofsudoku1(sudoku1, col, number) == false)
				{
					sudoku1[(row - 1)][(col - 1)] = number;
					displaysudokuboard2(sudoku1);
					cout << "you are doing great" << endl;
				}
				else
				{
					cout << " " << endl;
				}
				continue;
			}
			if (userschoice == "change")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				if (erasethe0s1(thesudokuboard1, row, col) == false)
				{
					sudoku1[(row - 1)][(col - 1)] = 0;
					displaysudokuboard2(sudoku1);
				}
				else
				{
					cout << "oops!the number you have entered is already fixed" << endl;
				}
				continue;
			}
			if (userschoice == "resume")
			{
				displaysudokuboard2(sudoku1);
				continue;
			}
		} while (userschoice != "quit");
		if (userschoice == "quit")
		{
			char choice;
			cout << "are you sure you want to quit(y/n)";
			cin >> choice;
			if (choice == 'y')
			{
				cout << "thank you for playing. come again!" << endl;
			}
			else {
				cout << "we will save the game" << endl;
				cout << "saved!!!!" << endl;
			}
		}
	}
	else if (main == 3)
	{
		int row;
		int col;
		int number;
		string filename;
		vector<vector<int>> sudoku2(9, vector<int>(9));
		vector<vector<int>> thesudokuboard2(9, vector<int>(9));
		//int thesudokuboard[9][9];
		switch (argumentc)
		{
		default:
			filename = "sudoku-game2.txt";
			break;
		}
		sudokuboard2(thesudokuboard2);
		sudokuboard2(sudoku2);
		getumbersfromfile2(sudoku2);
		getumbersfromfile2(thesudokuboard2);
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0 0 0 0 0     0 0 0      0   0      0 0 0    %%%" << endl;
		cout << "%%%  0         0    0    0        0   0     0     0  0      0     0   %%%" << endl;
		cout << "%%%  0 0 0     0    0    0        0   0     0     0000      0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0   0     0     0   %%%" << endl;
		cout << "%%%       0    0    0    0        0   0     0     0    0    0     0   %%%" << endl;
		cout << "%%%  0 0 0       0       0 0 0 0 0     0 0 0      0     0    0 0 0    %%%" << endl;

		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%% R U L E S%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "[1] the program will display a 9x9 grid\n. fill the row and col with numbers" << endl;
		cout << "[2] the number can only be between 1 and 9" << endl;
		cout << "[3] already present no cannot be redefined" << endl;
		cout << "[4] can can convet yout ans to 0 to eneter again.HAVE FUN!!!" << endl;
		cout << "%%%                          MAIN MENU                                %%%" << endl;
		cout << "%%%                                                                   %%%" << endl;
		//main mennu
		string userschoice = "";
		do
		{
			cout << "%%%                                                                   %%%" << endl;
			cout << "%%%        please choose from the below plz                           %%%" << endl;
			cout << "%%%                        --> print                                  %%%" << endl;
			cout << "%%%                         -->play                                   %%%" << endl;
			cout << "%%%                          -->change                                %%%" << endl;
			cout << "%%%                          -->quit                                  %%%" << endl;
			cout << "%%%                           -->resume                               %%%" << endl;
			cin >> userschoice;
			if (userschoice == "print")
			{
				getumbersfromfile2(sudoku2);
				displaysudokuboard3(sudoku2);
				continue;
			}
			if (userschoice == "play")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				cout << "enter the number you want" << endl;
				cin >> number;
				if (fixedvaluesofboard2(sudoku2, row, col) == false && checkingRowsofsudoku2(sudoku2, row, number) == false && checkingcolofsudoku2(sudoku2, col, number) == false)
				{
					sudoku2[(row - 1)][(col - 1)] = number;
					displaysudokuboard3(sudoku2);
					cout << "you are doing great" << endl;
				}
				else
				{
					cout << " " << endl;
				}
				continue;
			}
			if (userschoice == "change")
			{
				cout << "enter the row where you want to enter" << endl;
				cin >> row;
				cout << "enter the column where you want to enter" << endl;
				cin >> col;
				if (erasethe0s2(thesudokuboard2, row, col) == false)
				{
					sudoku2[(row - 1)][(col - 1)] = 0;
					displaysudokuboard3(sudoku2);
				}
				else
				{
					cout << "oops!the number you have entered is fixed" << endl;
				}
				continue;
			}
			if (userschoice == "resume")
			{
				displaysudokuboard3(sudoku2);
				continue;
			}
		} while (userschoice != "quit");
		if (userschoice == "quit")
		{
			char choice;
			cout << "are you sure you want to quit(y/n)";
			cin >> choice;
			if (choice == 'y')
			{
				cout << "thank you for playing. come again!" << endl;
			}
			else {
				cout << "we will save the game" << endl;
				cout << "saved!!!!" << endl;
			}
		}
	}
	return 0;
}
