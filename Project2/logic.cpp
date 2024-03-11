#include <iostream>

using namespace std;

void matrix_init(int** matrix, int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = (i + 1) * (j + 1);
		}
	}
}