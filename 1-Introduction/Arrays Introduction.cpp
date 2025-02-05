#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int array[number];
    
    if (number < 1 || number > 1000) {
        cout << "Number must be between 1 and 1000." << endl;
        return 1;}

   
    for (int i = 0; i < number; i++) {
        cin >> array[i];
        if (array[i] < 1 || array[i] > 10000) {
            cout << "numbers must be between 1 and 10000." << endl;
            return 1;
        }
    }

    for (int i = number - 1; i >= 0; i--) {
        cout << array[i];
        
        if (i > 0) cout << " "; 
    }
    
    return 0;
}
