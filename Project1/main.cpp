#include <iostream>

using namespace std;

int richest_car_showroom(int size, int* price, int* carNum);
int richest_car_showroom_index(int size, int* price, int* carNum);
void user_init(int* carNum, int* carPrice, int size);

int main() {
	int size;
	do
	{
		cout << "Input amount of car showrooms: ";
		cin >> size;
	} while (size < 1);

	int* carNum = new int[size];
	int* carPrice = new int[size];

	user_init(carNum, carPrice, size);

	cout << "The richest carshop has " << richest_car_showroom(size, carPrice, carNum) << "$";
	cout << "\nIt's carshop " << richest_car_showroom_index(size, carPrice, carNum) + 1;

	delete[] carNum;
	delete[] carPrice;

	return 0;
}
