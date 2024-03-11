#include <iostream>

using namespace std;

void matrix_init(int** matrix, int size);
string convert_matrix_string(int** matrix, int size);

int main() {
	int size;
	do
	{
		cout << "Input table size: ";
		cin >> size;
	} while (size < 1);

	int** lines = new int* [size];
	for (int i = 0; i < size; i++)
	{
		lines[i] = new int[size];
	}

	matrix_init(lines, size);
	cout << convert_matrix_string(lines, size);

	for (int i = 0; i < size; i++)
	{
		delete[] lines[i];
	}
	delete[] lines;

	return 0;
}