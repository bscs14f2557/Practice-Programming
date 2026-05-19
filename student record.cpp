#include<iostream>
using namespace std;
class Student {
	string name;
	float marks;

public:
	void input() {
		cout << "Enter Student's name : ";
		cin >> name;
		cout << "Enter marks of Maths : ";
		cin >> marks;
	}
	void display() {
		
		cout << "\tName\t\t\Marks\t" << endl;
		cout << "\t" << name << "\t\t" << marks << endl;
	}
};
int main() {
	Student s1, s2;
	cout << "For student 1 " << endl;
	s1.input();
	cout << "                                  " << endl;
	cout << "For student 2 " << endl;
	s2.input();
	cout << "                                  " << endl;
	cout << "\t\t\Students Data\t\t\"<< endl;
	cout << "------------------------------------------" << endl;
	cout << "                                  " << endl;
	cout << "                                  " << endl;
	s1.display();
	cout << "                                  " << endl;
	s2.display();
	return 0;


}