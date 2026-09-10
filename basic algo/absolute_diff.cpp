#include <iostream>
using namespace std;

//Absolute difference between n & 51

int main (){
	
	int n ;
	
	const int x = 51 ;
	
	cout << "Enter any number : " << endl;
	cin >> n;
	
	if (n > x){
		
		cout << (n - x)*3 << endl ;
		
	}
	
	else {
		
		cout << (x - n) << endl ;
		
	}
	
	return 0;
	
}
