#include<iostream>
using namespace std;

class Student {
public:
	string name, roll;


	void show() {
		cout << "Name : " << name << endl;
		cout << "Roll No. : " << roll << endl;
	}
};
int main()
{
	Student s1;
	s1.name="Ali";
	s1.roll = "14A";
	s1.show();
	return 0;
}