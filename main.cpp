#include <iostream>
#include <fstream>
using namespace std;

class SGrade{
	int Id;
	int CrHrs;
	char CourseN[10];
	int Nofsubject;
	public:
		fstream f;
		void input(){
		f.open("data.txt", ios::in | ios::out | ios::app);
		if(f.is_open()){	
			cout << "Please Enter your Id: ";
			cin >> Id;
			cout << "How many courses do you take? ";
			cin >> Nofsubject;
			f << "ID: " << Id << endl;
			for (int i=0; i < Nofsubject; i++){
				cout << "enter first three Letter of the " << i+1 <<" course" << endl;
				cin >> CourseN;
				cout << "enter credit hour of the course " << endl;
				cin >> CrHrs;
				f << "Course Name: " << CourseN << "\tCredit Hour: " <<CrHrs << endl;
			}
		f.close();	
		}
		else{
    		std::cout << "Error opening file";
		}
}
	
	
}; SGrade g;

int main(){
	g.input();
	return 0;
}
