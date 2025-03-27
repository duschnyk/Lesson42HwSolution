#include "util.h"

int main() {
	int array[BUF];
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
	

	//level(a)#2
	normal_init(array, size, -100, 100);
	cout << "Vector: " << convert(array, size) << endl;

	cout << "Product of even array indexes = " 
		<< get_product_of_even_indexses(array, size) << endl;
	
	return 0;
}