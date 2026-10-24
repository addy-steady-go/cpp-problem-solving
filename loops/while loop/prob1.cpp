# include <iostream>
# include <string> 

using namespace std;

int main() {
    int n, x = 0; // Declare variables n and x, initialize x to 0
    cout << "\n\n Check whether a given number is an Ugly number:\n"; // Display message for user
    cout << "----------------------------------------------------\n";
    cout << "Input an integer number: "; // Prompt the user to input an integer number
    cin >> n; // Read user input into variable n

    if (n <= 0) {  
        cout <<"Input a correct number."; // If input is less than or equal to 0, display an error message
    }

    while (n != 1) { // Loop until n becomes 1
        if (n % 5 == 0) {  
            n /= 5; // If n is divisible by 5, divide n by 5
        } else if (n % 3 == 0) {  
            n /= 3; // If n is divisible by 3, divide n by 3
        } else if (n % 2 == 0) {  
            n /= 2; // If n is divisible by 2, divide n by 2
        } else {  
            cout <<"It is not an Ugly number."<<endl; // If none of the above conditions are met, it's not an ugly number
            x = 1; // Set x to 1 to indicate it's not an ugly number
            break; 
        }  
    } 

    if (x == 0) { 
        cout <<"It is an Ugly number."<<endl; // If x is still 0, it's an ugly number
    }
    return 0; 
}
