#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMissingNumbers(vector<int> arr, int minRange, int maxRange) {
    sort(arr.begin(), arr.end());
    
    cout << "Missing numbers: ";
    bool found = false;
    for (int i = minRange; i <= maxRange; i++) {
        if (!binary_search(arr.begin(), arr.end(), i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
  

    return 0;
}
