#include <iostream>
using namespace std;
int main(){
	
	int a , b ;
	
	cout<<"Enter two integers : " << endl;
	cin >> a >> b;
	
	int sum = a + b;
	
	
	if (a==b){
		cout<<sum*3<<endl;
	}
	
	else {
		cout<<sum<<endl;
	}
	
	return 0;
}
