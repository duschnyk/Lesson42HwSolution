#include "util.h"
#include "logic.h"

int main() {
	int array[BUF]{2, 3, 1, 4, 0, 3, 4, 5, 3, 4, 5, 0, 5, 6};
	int size;

	cout << "input size: ";
	cin >> size;
	
	////level(a)#1
	// module_init(array, size, -100, 100);	
	//cout << "Vector: " << convert(array, size) << endl;
	// 
	//cout << "Sum: "
	//	<< sum_of_the_array_elements_located_between_the_maximum_and_minimum_absolute_elements
	//	(array, size) << endl;
	

	////level(a)#2
	//normal_init(array, size, -100, 100);
	//cout << "Vector: " << convert(array, size) << endl;

	//cout << "Product of even array indexes = " 
	//	<< get_product_of_even_indexses(array, size) << endl;


	////level(a)#3
	//normal_init(array, size, -100, 100);
	//cout << "Vector: " << convert(array, size) << endl;
	//cout << "Sum of even elements: " << get_sum_of_even_elements(array, size) << endl;


	////level(a)#4
	//normal_init(array, size, -100, 100);
	//cout << "Vector: " << convert(array, size) << endl;
	//cout << "Sum of odd elements: " << get_sum_of_odd_elements(array, size) << endl;


	////level(b)#1
	//normal_init(array, size, -100, 100);
	//cout << "Vector: " << convert(array, size) << endl;
	//bubble_sort(array, size, true);
	//cout << "Vector after sorting: " << convert(array, size) << endl;


	//level(b)#2	
	cout << "Vector: " << convert(array, size) << endl;
	cout << "sum of vector elements between first and last zeroes: " 
		<< get_sum_between_indexses(array, size) << endl;

	return 0;
}