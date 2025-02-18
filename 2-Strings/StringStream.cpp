#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> splitNumbers(string str) {
    
    vector<int> numbers;
    stringstream ss(str);
    int num;
    char comma;
    
    while (ss >> num) {
        numbers.push_back(num);
        ss >> comma;  }
    return numbers;   }

int main() {
    string str;
    cin >> str;
    vector<int> numbers = splitNumbers(str);
    
    for (int num : numbers) {
        cout << num << "\n";}
    
    return 0;
}
