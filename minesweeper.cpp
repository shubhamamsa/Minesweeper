#include<bits/stdc++.h>

using namespace std;

class Minesweeper	{
	private:
		int map[100][100];
		int difficulty;
		int bombs;
		int row;
		int col;
	public:
		void difficulty();
		void mapInit();
		void mapShow();
};

void Minesweeper::difficulty()	{
	cout << "Enter difficulty (1 2 3): ";
	cin >> difficulty;
	if(difficulty == 1)	{
		bombs = 10;
		row = 8;
		col = 10;
	}
	else if(difficulty == 2)	{
		bombs = 40;
		row = 14;
		col = 18;
	}
	else if(difficulty == 3)	{
		bombs = 99;
		row = 20;
		col = 24;
	}
	else	{
		cout << "Wrong choice entered";
		return;
	}
	mapInit();
}

void Minesweeper::mapInit()	{
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			map[i][j] = 0;
	for(int i=0;i<bombs;i++)	{
		
	}
}

int main()	{
	return 0;
}
