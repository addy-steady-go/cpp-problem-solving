#include <iostream>
using namespace std;

int main () {
	
	int n , sum = 0;
	cout << "Enter any number : " << endl;
	cin >> n;
	
	cout << "The natural numbers upto " << n << " terms are : " << endl;
	
	for(int i = 1; i <= n; i++) {
		
		sum = sum + i;
		cout << i << " " ;
	}
	
	cout << "\nThe sum of these natural number is " << sum << endl;
	
	return 0;
}
