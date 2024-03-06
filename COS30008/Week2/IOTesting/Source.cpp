
#pragma once

#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;



int main() {
	int input = 0;
	float temp;
	menu menu;
	test lMath;
	do {
		menu.printMenu();
		cin >> input;
		switch (input) {
		case 1: case 2: case 3: case 4:
			cout << "Please enter 2 numbers" << endl;
			
			cin >> temp; lMath.setNum1(temp);
			cin >> temp; lMath.setNum2(temp);
			temp = 0;
			cout << lMath.getSum(input) << endl;
			break;
		case -1:
			cout << "Goodbye!" << endl;
			break;
		default: 
			cout << "Invalid input, please try again!" << endl; 
			break;
		}
	} while (input != -1);
	

	return 0;
}
