#include <iostream>
#include <string> 

using namespace std;

int main() {
    int n;
    cin >> n;

    string number[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        cout << number[n] << endl;
    } else if (n > 9) {
        cout << "Greater than 9" << endl;
    } else {
        cout << "Invalid number" << endl;
    }

    return 0;
}

