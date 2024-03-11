#include <iostream>

using namespace std;

int richest_car_showroom(int size, int* price, int* carNum) {

	int max = price[0] * carNum[0];

	for (int i = 1; i < size; i++)
	{
		if (max < carNum[i] * price[i])
		{
			max = carNum[i] * price[i];
		}
	}
	return max;
}

int richest_car_showroom_index(int size, int* price, int* carNum) {

	int max = price[0] * carNum[0];
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (max < carNum[i] * price[i])
		{
			max = carNum[i] * price[i];
			index = i;
		}
	}
	return index;
}