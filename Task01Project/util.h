#pragma once
#include <iostream>
#include <string>
#define BUF 100

using namespace std;

int sum_of_the_array_elements_located_between_the_maximum_and_minimum_absolute_elements(int* array,
	int size);
void module_init(int* array, int size, int a, int b);
void fool_proof(int* array, int size);
string convert(int* array, int size);
int get_max_and_min_element_index(int* array, int size, bool type);
int get_product_of_even_indexses(int* array, int size);
void normal_init(int* array, int size, int a, int b);