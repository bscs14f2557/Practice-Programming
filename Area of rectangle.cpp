#include<iostream>
using namespace std;
class Rectangle {
	double length, width;

public:
	void input() {
		cout << "Enter length of rectangle : ";
		cin >> length;
		cout << endl;
		cout << "Enter width of rectangle : ";
		cin >> width;
		cout << endl;
	}
	void area() {
		double area = length * width;
		cout << "Area of rectangle of length " << length << " and width " << width << " is : " << area << endl;
	}
};
int main()
{
	Rectangle r1;
	cout << "Taking data from user : " << endl;
	cout << "                                " << endl;
	r1.input();
	cout << "                                " << endl;
	r1.area();
	
}