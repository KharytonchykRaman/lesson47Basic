#include <iostream>

using namespace std;

void user_init(int* carNum, int* carPrice, int size) {

	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Input amount of cars in " << i + 1 << " carshop: ";
			cin >> carNum[i];
		} while (carNum[i] < 1);
		do
		{
			cout << "Input car price in " << i + 1 << " carshop: ";
			cin >> carPrice[i];
		} while (carPrice[i] < 1);
	}
}

