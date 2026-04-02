#include<iostream>
#include<random>
using namespace std;

int main() {
	random_device rd;						//These 3 lines at the start of int main allow for random number generation
	mt19937 gen(rd());
	uniform_int_distribution<int>distrib(1000, 9999);			//There's a range from 1000 to 9999, as 4 digit numbers were requested

	int random = distrib(gen);			//this sets a number equal to the random number generated I think, so it always has a place to store the randomly generated numbers

	const int ARRAYSIZE = 10;		//This sets the size of the arrays, also referenced in for loops
	int numbers[ARRAYSIZE];			//This initializes the array

	for (int x = 0; x < ARRAYSIZE; x++) {		//This runs through each element of the array and assigns it to a randomly generated 4 digit number
		numbers[x] = distrib(gen);
	}
	cout << "Ten Random Integers: ";			//This tells the user that this line has 10 random integers
	for (int y = 0; y < ARRAYSIZE; y++) {
		cout << numbers[y] << "  ";			//This outputs each element in the array with space in between
	}
	cout << endl;
	cout << "Even Indexed Elements: ";		//This tells the user that this line is even indexed elements
	for (int z = 0; z < ARRAYSIZE; z++) {
		if (z % 2 == 0) {					//If dividing the element number by 2 leaves no remainder, then it's even, and we cout it
			cout << numbers[z] << "  ";
		}
	}
	cout << endl;
	cout << "Even-Valued Elements: ";		//This tells the user that this line is even elements
	for (int i = 0; i < ARRAYSIZE; i++) {		
		if (numbers[i] % 2 == 0) {			//If dividing the element by 2 leaves no remainder, then it's even, and we cout it
			cout << numbers[i] << "  ";
		}
	}
	cout << endl;
	cout << "Elements in Reverse Order: ";		//This tells the user that this line is the elements in reverse order
	for (int j = 1; j <= ARRAYSIZE; j++) {
		cout << numbers[(ARRAYSIZE - j)] << "  ";		//Rather than counting up, this subtracts by one more each time, outputting element 9, then 8, then 7, and so on
	}
	cout << endl;
	cout << "First and Last Element: ";			//This tells the user that this line is only the first and last elements
	for (int k = 0; k < ARRAYSIZE; k++) {
		if (k == 0) {						//If k is zero, then we cout numbers[0], the first element. 
			cout << numbers[k] << "  ";
		}
		else if (k == (ARRAYSIZE - 1)) {	//Since k will never equal the array size in this case, it checks if k is equal to arraysize-1. If that's true, its the
			cout << numbers[k] << "  ";		//last element in the array, so it outputs it
		}
	}
	
	return 0;
}