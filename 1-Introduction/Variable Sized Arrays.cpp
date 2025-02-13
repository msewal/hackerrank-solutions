#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
  
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        int k; 
        cin >> k;  
        arr[i].resize(k); 
      
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];}
    }
    
    for (int query = 0; query < q; query++) {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;}

    return 0;
}
