#include <iostream>
using namespace std;

//Maximum SubArray Sum

int main () {
	int currSum = 0 , maxSum = INT_MIN;
	
	int arr [] = {3,-4,5,4,-1,7,-8};
	
	for (int i = 0; i < 7; i++) {
		currSum += arr[i];
		maxSum = max(currSum , maxSum);
		
		if (currSum < 0) {
			currSum = 0;
		}
	}
	cout << maxSum;
	
	return 0;
}
