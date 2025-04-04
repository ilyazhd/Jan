#include <iostream>
#include "header.h"
#include <algorithm>


void InputSizeOfArray(int32_t& size) {
	std::cin >> size;
	if (size < 1 || size>100) {
		throw "Incorrect size!\n";
	}
}


bool IsZeroInArray(int32_t* array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		if (array[i] == 0) {
			return true;
		}
	}
	return false;
}

int64_t SumElementsAfterLastZeroElement(int32_t* array, int32_t size) {
	int64_t sum{};
	for (int32_t i = size-1; i >-1; --i) {
		if (array[i] == 0) {
			return sum;
		}
		else {
			sum += array[i];
		}
		
	}
	return -1;
}

void ChangeStaticArray(int32_t* array, int32_t size) {
	int32_t evenIndex = 0;

	for (size_t i = 0; i < size; ++i) {
		if (array[i] % 2 == 0) {
			std::swap(array[evenIndex], array[i]);
			++evenIndex;
		}
	}
}
void ChangeDynamicArray(int32_t*& array, int32_t size) {
	int32_t evenIndex = 0;

	for (size_t i = 0; i < size; ++i) {
		if (array[i] % 2 == 0) {
			std::swap(array[evenIndex], array[i]);
			++evenIndex;
		}
	}
}


bool IsVariusElement(double* array, int32_t index) {
	for (int32_t i = 0; i < index; ++i) {
		if (array[i] == array[index]) {
			return false;
		}
	}
	return true;
}
int32_t VariousElementsOfArray(double* array, int32_t size) {
	int32_t variousElements{1};
	for (size_t i = 1; i < size; ++i) {
		if (IsVariusElement(array, i)) {
			++variousElements;
		}
	}
	return variousElements;
}

double MultiplicationElementsBeforeMinModElement(double* array,int32_t size) {
	double composition{ 1 };
	int32_t indexMinModElement = FindMinModElementOfArray(array, size);
	if (indexMinModElement == 0) {
		return 0;
	}
	for (size_t i = 0; i < indexMinModElement; ++i) {
		composition *= array[i];
	}
	return composition;
}

void ChangeDoubleStaticArray(double* array, int32_t size) {
	int32_t counterNegative{0};

	for (size_t i = 0; i < size; ++i) {
		if (array[i] < 0) {
			std::swap(array[i], array[counterNegative]);
			++counterNegative;
		}
	}
}
void ChangeDoubleDynamicArray(double*& array, int32_t size) {
	int32_t counterNegative{ 0 };

	for (size_t i = 0; i < size; ++i) {
		if (array[i] < 0) {
			std::swap(array[i], array[counterNegative]);
			++counterNegative;
		}
	}
	
}
