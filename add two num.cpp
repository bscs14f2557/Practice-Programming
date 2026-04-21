#include <iostream>
using namespace std;

class Add {
public:
    int num1 = 5, num2 = 10;

    void showSum() {
        cout << "Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
    }
};

int main() {
    Add object;
    object.showSum();
}