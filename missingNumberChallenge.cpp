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
    int n, num, minRange, maxRange;
    vector<int> arr;

    cout << "Enter the number of elements in the array: ";
    while (true) {
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Invalid input. Please enter a positive integer: ";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    cout << "Enter the numbers in the array: " << endl;
    for (int i = 0; i < n; i++) {
        while (true) {
            cin >> num;
            if (cin.fail()) {
                cout << "Invalid input. Please enter an integer: ";
                cin.clear();
                cin.ignore(1000, '\n');
            } else {
                arr.push_back(num);
                break;
            }
        }
    }

    cout << "Enter the minimum range: ";
    while (true) {
        cin >> minRange;
        if (cin.fail()) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    cout << "Enter the maximum range: ";
    while (true) {
        cin >> maxRange;
        if (cin.fail() || maxRange < minRange) {
            cout << "Invalid input. Maximum range must be greater than or equal to minimum range. Please try again: ";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    findMissingNumbers(arr, minRange, maxRange);

    return 0;
}
