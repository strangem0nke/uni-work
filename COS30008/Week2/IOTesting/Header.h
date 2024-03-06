
#pragma once
#include <iostream>

using namespace std;

class menu {
public:
	void printMenu() {
		cout << "Simple Calculator: " << endl;
		cout << "1: Add" << endl;
		cout << "2: Subtract" << endl;
		cout << "3: MUltiply" << endl;
		cout << "4: Divide" << endl;
		cout << "-1: End" << endl;
	}
};

class test {
private:
	float num1, num2;
public:
	void setNum1(float num) {
		num1 = num;
	}
	void setNum2(float num) {
		num2 = num;
	}

	float	getNum1() {
		return num1;
	}

	float getNum2() {
		return num2;
	}
	float getSum(int type) {
		switch (type) {
		case 1:
			return num1 + num2;
			break;
		case 2: 
			return num1 - num2;
			break;
		case 3: 
			return num1 * num2;
			break;
		case 4:
			return num1 / num2;
			break;
		case -1:
			return 0;
		default: 
			cout << "Invalid operator. Please try again.";
			return 0;
			break;
		}
	}
};