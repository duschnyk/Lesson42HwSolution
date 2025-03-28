#include "logic.h"

//task#1
int get_max_and_min_element_index(int* array, int size, bool type) {
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		bool condition = type ? array[i] > array[index] : array[i] < array[index];

		if (condition) {
			index = i;
		}
	}
	return index;
}

int sum_of_the_array_elements_located_between_the_maximum_and_minimum_absolute_elements(int* array,
	int size) {
	int max = get_max_and_min_element_index(array, size, true); //max index

	int min = get_max_and_min_element_index(array, size, false); //min index

	int product = 1;

	if (max > min) {
		int t = max;
		max = min;
		min = t;
	}

	for (int i = max + 1; i < min; i++)
	{
		product += array[i];
	}

	return product;
}
//task#2
int get_product_of_even_indexses(int* array, int size) {
	int product = 1;
	for (int i = 2; i < size; i++)
	{
		if (i % 2 == 0) {
			product *= array[i];
		}
	}
	return product;
}

int get_sum_of_even_elements(int* array, int size) {
	int suumma = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0) {
			suumma += array[i];
		}
	}
	return suumma;
}

int get_sum_of_odd_elements(int* array, int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 != 0) {
			sum += array[i];
		}
	}
	return sum;
}

//task02b

int get_first_zero_index(int* array, int size) {
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0) {
			return i;
		}
	}
	return -1;
}

int get_last_zero_index(int* array, int size) {
	
	for (int i = size - 1; i >= 0; i--)
	{
		if (array[i] == 0) {
			return i;
		}
	}
	return -1;
}

int get_sum_between_indexses(int* array, int size) {
	int sum = 0;

	int first_zero_index = get_first_zero_index(array, size);

	int last_zero_index = get_last_zero_index(array, size);

	for (int i = first_zero_index + 1; i < last_zero_index; i++)
	{
		sum += array[i];
	}
	return sum;
}