#include <iostream>
using namespace std;

//Sum of first 10 natural numbers.

int main () {
	
	int sum = 0;
	
	cout << "The natural numbers are : " ;
	
	for (int i = 1 ; i <= 10 ; i++){
		
		cout << i << " ";
		
		sum = sum + i;
	}
	
	cout << "\nThe sum of first 10 natural numbers is : " << sum << endl;
	
	return 0;
	
}
