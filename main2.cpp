#include <iostream>
#include <cstring>
using namespace std;

class SGrade {
		int Id; // Students Id.
		int CreditH; // Credit Hour.
		char CourseName[15]; // Course Name
		char Grade[2];
		int NofCourse;// how many course do the take
		int sum;// sum of courses
		int totalCrHr;
		int totalGr;
		int GPA;
	public:
	
		void input() {
			cout << "Id:" ;
			cin >> Id;
			cout << "Course Number: ";
			cin >> NofCourse;
			for(int i = 0; i < NofCourse; i++) {
				cout << "Enter course #" << i + 1  << " name: \n";
				cin >> CourseName;
				cout << "" <<CourseName << " Credit Hour: \n";
				cin >> CreditH;
				cout << "Your grade for " << CourseName << ":  \n";
				cin >> Grade;
				totalCrHr += CreditH;
				if (strcmp(Grade, "A+") == 0 || strcmp(Grade, "a+") == 0) {
					sum = 4.00 * CreditH;
				} else if (strcmp(Grade, "A") == 0 || strcmp(Grade, "a") == 0) {
					sum = 4.00 * CreditH;
				} else if (strcmp(Grade, "A-") == 0 || strcmp(Grade, "a-") == 0) {
					sum = 3.75 * CreditH;
				} else if (strcmp(Grade, "B+") == 0 || strcmp(Grade, "b+") == 0) {
					sum = 3.50 * CreditH;
				} else if (strcmp(Grade, "B") == 0 || strcmp(Grade, "b") == 0) {
					sum = 3.00 * CreditH;
				} else if (strcmp(Grade, "B-") == 0 || strcmp(Grade, "b-") == 0) {
					sum = 2.75 * CreditH;
				} else if (strcmp(Grade, "C+") == 0 || strcmp(Grade, "c+") == 0) {
					sum = 2.50 * CreditH;
				} else if (strcmp(Grade, "C") == 0 || strcmp(Grade, "c") == 0) {
					sum = 2.00 * CreditH;
				} else if (strcmp(Grade, "C-") == 0 || strcmp(Grade, "c-") == 0) {
					sum = 1.75 * CreditH;
				} else if (strcmp(Grade, "D") == 0 || strcmp(Grade, "d") == 0) {
					sum = 1.00 * CreditH;
				} else if (strcmp(Grade, "F") == 0 || strcmp(Grade, "f") == 0) {
					sum = 0.00 * CreditH;
				} else if (isdigit(Grade[0])) {
					cout << "enter correct mark. or check out help page!\n";
					return;
						
				}
				totalGr += sum;	
			}
		}
			void disp(){
				GPA = totalGr/totalCrHr;
				cout << "Total Credit: " << totalCrHr<< endl;
				cout << "Total Grade: " << totalGr<< endl;
				cout << "GPA: " << GPA;
			}
			void help(){
				cout << "HOW TO USE GPA CALCULATOR";
				cout << "[1] to use the calculator you have to know the credit hour of the course. \n";
				cout << "[2] your grade have to be inputed using the method of ABCD grading system. \n";
				}

};SGrade g;





