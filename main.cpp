#include<iostream>
#include<cstdlib>
#include"Sudoku.h"
using namespace std;

int main()
{
	int i, j;
	Sudoku tmr1;
	tmr1.readIn();
	/*for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			cout << tmr1.board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	tmr1.flip(1);*/
	tmr1.solve();
	
	/*for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			cout << tmr1.board[i][j] << " ";
		}
		cout << endl;
	}*/
	
    
	return 0;
}
