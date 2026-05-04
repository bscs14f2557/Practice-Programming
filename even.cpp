#include<iostream>
using namespace std;
class Even {
private: 
	int number;

public:

	void setnumber(int n) {
		number = n;
	}

	void checkeven() {
		if (number % 2 == 0) {
			cout << number << " is even." << endl;
		}
		else
			cout << number << " is odd." << endl;
	}
};
int main()
{
	int num;
	Even obj;
	cout << "Enter a number : ";
	cin >> num;
	obj.setnumber(num);
	obj.checkeven();
	return 0;
}