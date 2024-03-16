#include <iostream>

using namespace std;

bool same_value_matrix(int** matrix, int width, int length) {

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			for (int q = i; q < width; q++)
			{
				for (int k = j+1; k < length; k++)
				{
					if (matrix[i][j] == matrix[q][k])
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}