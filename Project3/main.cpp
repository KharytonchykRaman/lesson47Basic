#include <iostream>

using namespace std;

void matrix_init_rnd(int** matrix, int width, int length, int min, int max);
string convert_matrix_string(int** matrix, int wigth, int length);
bool same_value_matrix(int** matrix, int width, int length);

int main() {
	int width;
	do
	{
		cout << "Input matrix width: ";
		cin >> width;
	} while (width < 1);

	int length;
	do
	{
		cout << "Input matrix length: ";
		cin >> length;
	} while (length < 1);

	int** matrix = new int* [width];
	for (int i = 0; i < width; i++)
	{
		matrix[i] = new int[length];
	}

	matrix_init_rnd(matrix, width, length, 1, 10);
	cout << convert_matrix_string(matrix, width, length);

	string msg = same_value_matrix(matrix, width, length) ? "" : " no";

	cout << "Matrix has" << msg << " identical numbers";

	for (int i = 0; i < width; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}