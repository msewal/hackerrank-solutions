#include <iostream>

using namespace std;
void updateValues(int *x, int *y) {
    
    int sum = *x+*y;
    int diff = abs(*x-*y);
    
    *x = sum;
    *y = diff;
}

int main() {
    int x, y;
    cin >> x >> y;
    updateValues(&x, &y);
    
    cout << x << endl;
    cout <<y << endl;

    return 0;
}
