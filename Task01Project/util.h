#pragma once
#include <iostream>
#include <string>
#define BUF 100

using namespace std;

void module_init(int* array, int size, int a, int b);
void fool_proof(int* array, int size);
string convert(int* array, int size);
void normal_init(int* array, int size, int a, int b);
void bubble_sort(int* array, int size, bool type);