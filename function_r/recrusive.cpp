#include <iostream>
using namespace std;

int factorial(int n) {
    if (n==1) {
        return n;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    cout << factorial(5);
    /*
        return 5 * 4 * 3 * 2 * 1
    */
}