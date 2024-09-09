#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive number of terms." << endl;
        return;
    }

    int a = 0, b = 1, next;
    cout << "Fibonacci Sequence: " << a;
    
    if (n > 1) {
        cout << ", " << b;
    }

    for (int i = 3; i <= n; i++) {
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of terms for the Fibonacci sequence: ";
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
    generateFibonacci(n);

    return 0;
}
