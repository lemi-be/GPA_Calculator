#include <iostream>
#include <fstream>
using namespace std;

class SGrade{
	int Id;
	int CrHrs;
	char CourseN[10];
	int URgrade;
	int Nofsubject;
	int sum[];
	public:
		fstream f;
		void gradingSY(){
			int A = 1004;//grading ssystem
		}
		
		
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
				cout << "What is your grade for the course" << endl;
				cin >> URgrade;
				cout << "enter credit hour of the course " << endl;
				cin >> CrHrs;
				f << "Course Name: " << CourseN <<  "\tGrade: " << URgrade <<  "\tCredit Hour: " <<CrHrs << endl;
				sum = CrHrs + Grade;
				 
			}
		f.close();	
		}
		else{
    		std::cout << "Error opening file";
		}
}
	void calculation(){ // this is not finished re run to know whats wrong 
		int added=0;
		f.open("data.txt", ios::in);
		if(f.is_open()){
			for(int i=0; i < Nofsubject; i++){
				added = added + CrHrs ;
			}
			
		}
		cout << added;
	}
	
}; SGrade g;


int main(){
	g.input();
	g.calculation();
	return 0;
}
