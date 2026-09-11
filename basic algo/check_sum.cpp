#include <iostream>
using namespace std;

//Check 30 or Sum 30

int main () {
	
	int a , b;
	cout << "Enter two numbers : " << endl ;
	cin >> a >> b ;
	
	if((a==30) || (b==30) || (a + b == 30) ){      //Using multiple OR statements to include all conditions.
		cout << 1 << endl;
	}
	
	else{
		cout << 0 << endl;
	}
	
	return 0;
	
}
