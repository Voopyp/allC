﻿#include <iostream>
using namespace std;

//function declaration
double getAverage(int* arr, int size);



int main()
{
	//an int array with 5 elements.
	int balance[5] = { 10, 20, 30, 40, 50 };
	double avg;

	// pass pointer to the array as an argument.
	avg = getAverage(balance, 5);


	//output the return value
	cout << "Average value is: " << avg << endl;

	return 0;

}

double getAverage(int* arr, int size)
{
	int i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i) {
		sum += arr[i];

	}

	avg = double(sum) / size;

	return avg;
}

