#include "util.h"

void normal_init(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}

void module_init(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = array[i] < 0 ? -array[i] : array[i];

	}
}

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";

	}

	return s;

}

void fool_proof(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		array[i] < 0 ? -array[i] : array[i];

	}
}





void bubble_sort(int* array, int size, bool type) {
	for (int j = 0; j < size - 1; j++)
	{
		bool flag = true;

		for (int i = 0; i < size - 1 - j; i++)
		{
			if (type ? array[i] < array[i + 1] : array[i] > array[i + 1]) {
				flag = false;
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
		if (flag) {
			break;
		}
	}
}