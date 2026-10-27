#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0 && n % 7 == 0) {
        cout << n << " is a multiple of both 3 and 7.";
    } else {
        cout << n << " is not a multiple of both 3 and 7.";
    }

    return 0;
}
