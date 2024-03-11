#include <iostream>
#include <string>

using namespace std;

string convert_matrix_string(int** matrix, int size) {

	string msg = "";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			msg += to_string(matrix[i][j]) + "\t";
		}
		msg += "\n";
	}

	return msg;
}