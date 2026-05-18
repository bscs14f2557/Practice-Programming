#include<iostream>
using namespace std;
class Calculator {
	int a, b;
public:
	Calculator() {
		cout << "Enter a number : ";
		cin >> a;

		cout << "Enter other number : ";
		cin >> b;
	}

	void add() {
		int sum = a + b;
		cout <<a<< " + " <<b<<" : " << sum << endl;
	}

	void sub() {
		int minus = a - b;
		cout << a << " - " << b << " : " << minus << endl;
		
	}

	void mul() {
		int mul = a * b;
		cout << a << " * " << b << " : " << mul << endl;

	}

	void div() {
		int div = a / b;
		if (b == 0) {
			cout << "invalid " << endl;
		}else 
		cout << a << " / " << b << " : " << div << endl;

	}


	
};
int main() {
	Calculator obj;
	string o;
	cout << "/t/t Simple Calculator /t/t" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "                                                            " << endl;
	cout << "Enter operator : ";
	cin >> o;
	if (o == "+") {
		//cout << "Sum of " << c1 << " and " << c2 << " is : " << obj.add << endl;
		obj.add();
	}
	else if (o == "-") {
		//cout << "Difference of " << c1 << " and " << c2 << " is : " << obj.sub << endl;
		obj.sub();
	}
	else if (o == "*") {
		obj.mul();
	}
	else if (o == "/") {
		obj.div();
	}
	return 0;
}