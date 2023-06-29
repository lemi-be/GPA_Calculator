#include <iostream>
#include <cstdlib>
#include "main2.cpp"


void Display() {
	char ret;
	int navigator;
	cout << "\t WELCOME TO GPA CALCULATOR \n";
	cout << endl;
	cout << "\t\t [1] Calculator \n";
	cout << "\t\t [2] Help \n";
	cout << "\t\t [*] Enter Correct number to navigate: ";
	cin >> navigator;
	switch(navigator) {
		case 1:
			cout << endl;
			cout << endl;
			cout << endl;
			g.input();
			g.disp();
			cout << endl;
			cout << "\n\t\t press [r or R] to return";
			cin >> ret;
			if (ret = "r" || "R") {
				Display();
			}
			break;
		case 2:
			cout << endl;
			cout << endl;
			cout << endl;
			g.help();
			cout << endl;
			cout << "\n\t\t press [r or R] to return";
			cin >> ret;
			if (ret = "r" || "R") {
				Display();
			}
			break;
		case 3:
			return;
		default:
			cout<<"\a";
	}

}
