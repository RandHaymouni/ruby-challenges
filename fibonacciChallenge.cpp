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
    

    return 0;
}
