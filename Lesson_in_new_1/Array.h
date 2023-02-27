#pragma once
#include <iostream>
class Array
{
	int size;
	int* array;

public:
	explicit Array(int = 10);
	Array(const Array& );     // ����������� �����������
	~Array();                 // ����������
	int getSize() const;      // ���������� ������ ������� 
	int getValue(int) const;  //  ���������� ������� ������� �� �������
	void setValue(int, int);  // �������� ������� ������� � �������

	void display() const;  // ����� ������� �� �����
	void setSize(int);        // ��������� ������� �������
	void sortArray();         // ���������� �������
	int getMaxElem();         // ���������� ���� ���� � �������
	int getMinElem();         // ���������� ��� ���� � �������
private:
	int getElem(bool);        //��� ���� � ��� ��������
};

