#pragma once
#include <iostream>
class Array
{
	int size;
	int* array;

public:
	explicit Array(int = 10);
	Array(const Array& );     // конструктор копирования
	~Array();                 // деструктор
	int getSize() const;      // возвращает размер массива 
	int getValue(int) const;  //  возвращает элемент массива по индексу
	void setValue(int, int);  // заменяет элемент массива п индексу

	void display() const;  // вывод массива на экран
	void setSize(int);        // изменение размера массива
	void sortArray();         // сортировка миссива
	int getMaxElem();         // возвращиет макс элем в массиве
	int getMinElem();         // возвращиет мин элем в массиве
private:
	int getElem(bool);        //для макс и мин значений
};

