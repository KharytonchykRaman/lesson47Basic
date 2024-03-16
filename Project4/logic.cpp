#include <iostream>

using namespace std;

int max_sum_line(int** matrix, int width, int length) {
	
	int maxSum = 0;
	int maxSumIndex = 0;

	for (int i = 0; i < width; i++)
	{
		int sum = 0;
		for (int j = 0; j < length; j++)
		{
			sum += matrix[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			maxSumIndex = i;
		}
	}
	return maxSumIndex;
}
