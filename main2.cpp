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
		void disp() {
			GPA = totalGr/totalCrHr;
			cout << "Total Credit: " << totalCrHr<< endl;
			cout << "Total Grade: " << totalGr<< endl;
			cout << "GPA: " << GPA;
		}
		void help() {
			cout << "GPA Calculator - Help" << endl;
			cout << "---------------------" << endl;
			cout << "To use the GPA Calculator, follow these steps:" << endl;
			cout << "1. Enter the student's ID." << endl;
			cout << "2. Enter the number of courses taken." << endl;
			cout << "3. For each course, enter the course name, credit hour, and grade." << endl;
			cout << "4. The program will calculate the GPA based on the entered information." << endl;
			cout << endl;
			cout << "Grade System:" << endl;
			cout << "--------------" << endl;
			cout << "Use the following grades when entering course grades:" << endl;
			cout << "- A+, A, A-, B+, B, B-, C+, C, C-, D, F" << endl;
			cout << "The corresponding grade points will be used for GPA calculation." << endl;
			cout << endl;
			cout << "Note: Only enter the exact grade as shown above. The input is case-sensitive." << endl;
		}


};
SGrade g;





