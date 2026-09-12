#include<iostream>
using namespace std;
int main(){
	
	//Within 10 of 100 or 200
	
	int a;
	
	cout << "Enter an integer : " << endl;
	cin >> a;
	
	if(((100-a) <= 10 )|| ((200-a) <= 10)){
		
		cout << 1 << endl;
	}
	
	else{
		
		cout << 0 << endl;
	}
	
	return 0;
}
