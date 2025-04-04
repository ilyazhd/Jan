#include <iostream>
#include "header.h"

int main() {

	setlocale(LC_ALL, "RUS");
	const int32_t MAX_SIZE{ 100 };
	int32_t size{};
	int32_t choose{};//переменная для выбора типа массива
	int32_t* sDynamicArray = nullptr;
	double* dDynamicArray = nullptr;
	int32_t fillChoose{};//переменная для выбора заполнения массива
	int32_t leftBoard{};//левая граница 
	int32_t rightBoard{};//правая граница 

	std::cout << "ВАРИАНТ 3 \n";
	std::cout << "какой мамсив вы хотите использовать?\n";
	std::cout << "[1] статический\n";
	std::cout << "[2] динамический\n";
	std::cin >> choose;

	try {
		switch (choose)
		{
		case 1:
			std::cout << "введите размер вашего массива от 1 до 100:\n";
			InputSizeOfArray(size);
			int32_t array[MAX_SIZE];
			std::cout << "как вы хотите заполнить массив?\n";
			std::cout << "[1] вручную\n";
			std::cout << "[2] рандомом\n";
			std::cin >> fillChoose;
			switch (fillChoose)
			{
			case 1:
				InputStaticArray(array, size);
				break;
			case 2:
				std::cout << "введите границы случайных чисел:\n";
				std::cout << "левая граница: ";
				std::cin >> leftBoard;
				std::cout << "правая граница: ";
				std::cin >> rightBoard;
				if (leftBoard > rightBoard) {
					std::swap(leftBoard, rightBoard);
				}
				FillStaticArrayWhithRandomNumbers(array, size, leftBoard, rightBoard);
				PrintArray(array,size);
				break;
			default:
				throw "incorrect choose!";
				break;
			}
			std::cout << "минимальный элемент по модулю: " << array[FindMinModElementOfArray(array, size)] << "\n";
			if (!IsZeroInArray(array,size)) {
				std::cout << "нуля в массиве нет!\n";
			}
			else {
				std::cout << "сумма элементов после последнего нуля" << SumElementsAfterLastZeroElement(array, size) << "\n";
			}

			std::cout << "измененный массив: \n";
			ChangeStaticArray(array, size);
			PrintArray(array,size);

			break;
		case 2:
			std::cout << "введите размер вашего массива от 1 до 100:\n";
			InputSizeOfArray(size);
			sDynamicArray = new int32_t[size];
			std::cout << "как вы хотите заполнить массив?\n";
			std::cout << "[1] вручную\n";
			std::cout << "[2] рандомом\n";
			std::cin >> fillChoose;
			switch (fillChoose)
			{
			case 1:
				InputDynamicArray(sDynamicArray, size);
				break;
			case 2:
				std::cout << "введите границы случайных чисел:\n";
				std::cout << "левая граница: ";
				std::cin >> leftBoard;
				std::cout << "правая граница: ";
				std::cin >> rightBoard;
				if (leftBoard > rightBoard) {
					std::swap(leftBoard, rightBoard);
				}
				FillDynamicArrayWhithRandomNumbers(sDynamicArray, size, leftBoard, rightBoard);
				PrintArray(sDynamicArray, size);
				break;
			default:
				throw "incorrect choose!";
				break;
			}
			std::cout << "минимальный элемент по модулю: " << sDynamicArray[FindMinModElementOfArray(sDynamicArray, size)] << "\n";
			if (!IsZeroInArray(sDynamicArray, size)) {
				std::cout << "нуля в массиве нет!\n";
			}
			else {
				std::cout << "сумма элементов после последнего нуля" << SumElementsAfterLastZeroElement(sDynamicArray, size) << "\n";
			}

			std::cout << "измененный массив: \n";
			ChangeDynamicArray(sDynamicArray, size);
			PrintArray(sDynamicArray, size);
			delete[] sDynamicArray;
			break;
		default:
			std::cout << "Некорректный выбор." << std::endl;
			break;
		}
	}
	catch (const char* e) {
		std::cout << e << std::endl;
	}
	std::cout << '\n';



	std::cout << "ВАРИАНТ 23 \n";
	std::cout << "какой вещественный массив вы хотите использовать?\n";
	std::cout << "[1] статический\n";
	std::cout << "[2] динамический\n";
	std::cin >> choose;

	try {
		switch (choose)
		{
		case 1:
			std::cout << "введите размер вашего массива от 1 до 100:\n";
			InputSizeOfArray(size);
			double array[MAX_SIZE];
			std::cout << "как вы хотите заполнить массив?\n";
			std::cout << "[1] вручную\n";
			std::cout << "[2] рандомом\n";
			std::cin >> fillChoose;
			switch (fillChoose)
			{
			case 1:
				InputStaticArray(array, size);
				break;
			case 2:
				std::cout << "введите границы случайных чисел:\n";
				std::cout << "левая граница: ";
				std::cin >> leftBoard;
				std::cout << "правая граница: ";
				std::cin >> rightBoard;
				if (leftBoard > rightBoard) {
					std::swap(leftBoard, rightBoard);
				}
				FillStaticArrayWhithRandomNumbers(array, size, leftBoard, rightBoard);
				PrintArray(array, size);
				break;
			default:
				throw "incorrect choose!";
				break;
			}
			
			std::cout << "различных элементов массива: " << VariousElementsOfArray(array, size) << "\n";

			std::cout << "произведение всех элементов массива да его минимального элемента: ";
			std::cout << MultiplicationElementsBeforeMinModElement(array, size) << "\n";

			std::cout << "измененный массив: \n";
			ChangeDoubleStaticArray(array, size);
			PrintArray(array, size);
			break;
		case 2:
			std::cout << "введите размер вашего массива от 1 до 100:\n";
			InputSizeOfArray(size);
			dDynamicArray = new double[size];
			std::cout << "как вы хотите заполнить массив?\n";
			std::cout << "[1] вручную\n";
			std::cout << "[2] рандомом\n";
			std::cin >> fillChoose;
			switch (fillChoose)
			{
			case 1:
				InputDynamicArray(dDynamicArray, size);
				break;
			case 2:
				std::cout << "введите границы случайных чисел:\n";
				std::cout << "левая граница: ";
				std::cin >> leftBoard;
				std::cout << "правая граница: ";
				std::cin >> rightBoard;
				if (leftBoard > rightBoard) {
					std::swap(leftBoard, rightBoard);
				}
				FillDynamicArrayWhithRandomNumbers(dDynamicArray, size, leftBoard, rightBoard);
				PrintArray(dDynamicArray, size);
				break;
			default:
				throw "incorrect choose!";
				break;
			}
			
			std::cout << "различных элементов массива: " << VariousElementsOfArray(dDynamicArray, size) << "\n";

			std::cout << "произведение всех элементов массива да его минимального элемента: ";
			std::cout << MultiplicationElementsBeforeMinModElement(dDynamicArray, size) << "\n";

			std::cout << "измененный массив: \n";
			ChangeDoubleDynamicArray(dDynamicArray, size);
			PrintArray(dDynamicArray, size);

			delete[] dDynamicArray;
			break;
		default:
			std::cout << "Некорректный выбор." << std::endl;
			break;
		}
	}
	catch (const char* e) {
		std::cout << e << std::endl;
	}

	return 0;
}
