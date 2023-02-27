

#include <iostream>
#include <windows.h>
#include "Date.h"
#include "Account.h"
#include "Array.h"

using namespace std;

//void display(const Array& array) {
//	for (int i{ 0 }; i < array.getSize(); i++) {
//
//	}
//	cout << endl;
//}
//void displayDate(Date d) {
//	cout << d.day << "." << d.month << "." << d.year << endl;
//}
Date baseDate() {
	return 2023;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*const float* arr;

	const Date d;
	d.setDay(45);
	cout << d.getDay();
	Date d1{15,3,2023};
	int a = d1.getDay();

	const int g{45};*/

	/*Account account1(5, 2000);
	const Account account2(8, 5000);
	account1.getRate();
	account2.getRate();
	account1.getSum();
	account2.getSum();
	account1.getIncome();
	account2.getIncome();
	account1.setSum();*/
	/*displayDate(2020);
	Date date = 2010;
	Date date2023 = baseDate();
	displayDate(date);
	displayDate(date2023);*/

	//cout << "Dinamic integ array" << endl;
	//int size{ 4 };
	//Array array{ size };
	//for (int i = 0; i < size; i++) {
	//	array.setValue(i, size - i);
	//}
	//display(array);
	//cout << endl;
	//display(3); // Error
	//Array array1 = 3; //error

	Array arr1{ 5 };
	for (int i = 0; i < 5; i++) {
		arr1.setValue(i, i * 5);
	}
	arr1.setValue(rand() % 5, 9);

	Array arr2{arr1};
	arr2.display();
	arr1.setSize(10);
	arr1.display();
}

