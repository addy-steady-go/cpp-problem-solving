#include <iostream>
using namespace std;

//Removing duplicates from array.

int main () {
	 int arr []= {1,1,2,2,2,3,3};
	 
	 int i = 0;
	 for (int j = 1; j < 7; j++) {
	 	if(arr[i] != arr[j]){
	 		arr[i+1] = arr[j];
	 		i++;
		 }
	 }
	 cout << (i + 1);
}
