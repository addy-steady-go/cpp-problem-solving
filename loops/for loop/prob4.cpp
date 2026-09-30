#include <iostream>
using namespace std;

int main () {
	
	int num1 , factorial = 1;
	
	cout << "Enter any number : " << endl;
	cin >> num1;
	
	cout << "The factorial of the number is " << endl;
	
	for (int i = 1; i <= num1; i++) {
		factorial = factorial * i;
	}
	
	cout << factorial << endl;
	
	return 0;
}
