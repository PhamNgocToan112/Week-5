#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool CreateMap(int** map, int row, int column, int bomb)
{
	bool check = false;
	srand(time(0));
	int b = bomb;
	int i, j;
	while (b > 0)
	{
		i = rand() % row + 1;
		j = rand() % column + 1;
		if (map[i][j] == 0)
		{
			map[i][j] = -1;
			b--;
		}
	}

	if (b == 0)check = true;

	return check;
}
void PrintfMap(int** map, int row, int column) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			if (map[i][j] != -1 && map[i][j] != 0)cout << map[i][j] << " ";
			else cout << "* ";
		cout << endl;
	}
}

int check(int **map, int row, int column) {
	int number = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (map[row + i][column + j] == -1)number++;
		}
	}

	return number;
}

void spill(int map, int x, int y, int row, int column){
	for(int i = -1; i < 1; i++){
		for(int j = -1; j < 1; j++){
			if(x + i >= 0 &&x + i < row && y + j >= 0 && y + j < column && map[x + i][y + j] == 0) {
				if(check(map, x + i, y + j) == 0){
					 spill(map, x + i, y + j, row, column);
				}
				else{
					map[x + i][y + j] = check(map, x + i, y + j);
				}
			}
		}
	}
	
}

int main() {
	int row, column, bomb;
	cin >> row >> column;

	int sum = row * column;
	do {
		cin >> bomb;
	} while (sum <= bomb);

	int** map = new int* [row];
	for (int i = 0; i <= row + 1; i++) {
		map[i] = new int[column + 2];
	}

	for (int i = 0; i <= row; i++)
		for (int j = 0; j <= column; j++)
			map[i][j] = 0;

	int quit = sum - bomb;
	int x, y;
	if (CreateMap(map, row, column, bomb)) {
		
		PrintfMap(map, row, column);
		while(quit > 0){
			cin >> x >> y;
			if(map[x][y] == -1){
			cout << "YOU'RE DEAD";
			return 0;
			}
			
			else{
			system("CLS");
			if (check(map,x,y) == 0) spill(map, x, y, row, column);
            else map[x][y] = check(map,x,y);
            PrintfMap(map, row, column);
			}
			
			
			
			
		}


	}
	return 0;
}

