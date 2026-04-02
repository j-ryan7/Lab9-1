#include<iostream>
#include<random>
using namespace std;

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int>distrib(1000, 9999);

	int random = distrib(gen);

	const int RANGE = 9000;
	const int ARRAYSIZE = 10;
	int numbers[ARRAYSIZE];
	int numbersCount[RANGE];

	for (int x = 0; x < ARRAYSIZE; x++) {
		numbers[x] = distrib(gen);
	}
	cout << "Ten Random Integers: ";
	for (int y = 0; y < ARRAYSIZE; y++) {
		cout << numbers[y] << "  ";
	}
	cout << endl;
	cout << "Even Indexed Elements: ";
	for (int z = 0; z < ARRAYSIZE; z++) {
		if (z % 2 == 0) {
			cout << numbers[z] << "  ";
		}
	}
	cout << endl;
	cout << "Even-Valued Elements: ";
	for (int i = 0; i < ARRAYSIZE; i++) {
		if (numbers[i] % 2 == 0) {
			cout << numbers[i] << "  ";
		}
	}
	cout << endl;
	cout << "Elements in Reverse Order: ";
	for (int j = 1; j <= ARRAYSIZE; j++) {
		cout << numbers[(ARRAYSIZE - j)] << "  ";
	}
	cout << endl;
	/*
	cout << "First and Last Element: ";
	for (int k = 0; k < ARRAYSIZE; k++) {
		if (k == 0) {
			cout << numbers[k] << "  ";
		}
		else if (k == (ARRAYSIZE - 1)) {
			cout << numbers[k] << "  ";
		}
	}
	*/
	return 0;
}