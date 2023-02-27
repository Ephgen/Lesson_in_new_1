#include "Array.h"

Array::Array(int size) {
	Array::size = size;
	array = new int[size];
}
Array::Array(const Array& arr) : Array(arr.size) {
	for (int i = 0; i < size; i++) {
		array[i] = arr.array[i];
	}
}
Array::~Array() {
	delete[]array;
}

int Array::getSize() const {
	return size;
}

int Array::getValue(int index) const {
	return array[index];
}

void Array::setValue(int index, int value) {
	array[index] = value;
}

void Array::display() const {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
void Array::setSize(int s) {
	int* temp = new int[s];
	for (int i = 0; i < ((s < size) ? size : s); i++) {
		temp[i] = array[i];
	}
	delete[]array;
	size = s;
	array = temp;
}
void Array::sortArray() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[j + 1])
				std::swap(array[j], array[j + 1]);
		}
	}
}
int Array::getMaxElem() {
	
	return getElem(true);
}
int Array::getMinElem() {
	
	return getElem(false);
}

int Array::getElem(bool flag) {
	int m = array[0];
	for (int i = 0; i < size; i++) {
		if ((flag) ? m > array[i] : m < array[i]) m = array[i];
	}
	return m;
}
