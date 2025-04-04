#ifndef HEADER_H
#define HEADER_H

void InputSizeOfArray(int32_t&);

template <typename T>
void PrintArray(T* array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << "\n";
}


template <typename T>
void InputStaticArray(T* array, int32_t size) {//заполнение массива вручную
	for (size_t i = 0; i < size; ++i) {
		std::cin >> array[i];
	}
}

template <typename T>
void FillStaticArrayWhithRandomNumbers(T* array, int32_t size, int32_t leftBoard, int32_t rightBoard) {
	srand(time(NULL));
	for (size_t i = 0; i < size; ++i) {
		array[i] = rand() % (rightBoard - leftBoard + 1) + leftBoard;
	}
}


template <typename T>
void InputDynamicArray(T*& array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cin >> array[i];
	}
}

template <typename T>
void FillDynamicArrayWhithRandomNumbers(T*& array, int32_t size, int32_t leftBoard, int32_t rightBoard) {
	srand(time(NULL));
	for (size_t i = 0; i < size; ++i) {
		array[i] = rand() % (rightBoard - leftBoard + 1) + leftBoard;
	}
}

template <typename T>
int32_t FindMinModElementOfArray(T* array, int32_t size) {
	int32_t minElement = std::abs(array[0]);
	int32_t indexMinElement{};
	for (size_t i = 1; i < size; ++i) {
		if (std::abs(array[i]) < minElement) {
			minElement = std::abs(array[i]);
			indexMinElement = i;
		}
	}
	return indexMinElement;
}//ищет индекс минимального элемента в массиве

int64_t SumElementsAfterLastZeroElement(int32_t*, int32_t);// находит сумму елемнентов после последнего нуля(В3)
bool IsZeroInArray(int32_t*, int32_t);//проверяет есть ли ноль в массиве(В3)

void ChangeStaticArray(int32_t*, int32_t);//преобразовывает статический массвив(В3)
void ChangeDynamicArray(int32_t*&, int32_t);//преобразовывает динамический массвив(В3)


bool IsVariusElement(double*, int32_t);//проверяет является ли элемент различным по сравнению с другими
int32_t VariousElementsOfArray(double*, int32_t);//находит количество различных элементов в массиве

double MultiplicationElementsBeforeMinModElement(double*, int32_t);//считает произведение всех элементов массива да нулевого

void ChangeDoubleStaticArray(double*, int32_t);
void ChangeDoubleDynamicArray(double*&, int32_t);


#endif 
