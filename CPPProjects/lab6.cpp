


/*
This Program contains function definitions that can be used to calculate several properties of an array of items given the array and its size,
*/
#include <iostream>;
#include <string>;
using namespace std;

int calc_average(int array[], int size)
{
	int total = 0, average = 0;
	for (int i = 0; i < size; i++){ total += total; }
	average = total / size;
	return average;
}

void print_items(int array[], int size)
{
	for (int i = 0; i < size; i++){ cout << array[i] << endl; }
}

int find_max(int array[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
		if (array[i]>max){ max = array[i]; }
	return max;
}

int find_min(int array[], int size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
		if (array[i] < min){ min = array[i]; }
	return min;
}

int main()
{
	int numbers[20]; //create an array of size 20
	int container;
	int size;
	for (int i = 0; i < 20; i++) //loop to add numbers into the "numbers" array.
	{
		cout << "Enter a positive number" << endl;
		cin >> container;
		if (container >= 0){//if the number is positive it will be added into the numbers array
			numbers[i] = container;
		}
		else { size = i;  return; } //else break out of the for loop
		if (i == 20){ size = 20; }
	}
	print_items(numbers, size);
	cout << "Minimum: " << find_min(numbers, size) << endl;
	cout << "Maxium: " << find_max(numbers, size) << endl;
	cout << "Average: " << calc_average(numbers, size) << endl;



	return;
};