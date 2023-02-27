#pragma once
#include <iostream>

using namespace std;
class Account
{
private:
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum) : rate{Rate} {
		sum = Sum;
	}
	double getRate() const {
		return rate;
	}
	double getIncome() const {
		return sum * rate / 100;
	}
	double getSum() const {
		return sum;
	}
	double setSum() {
		sum += getIncome();
		return sum;
	}
};

