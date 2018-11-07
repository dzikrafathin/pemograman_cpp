#include <iostream>
using namespace std;

int factorial(int n) {
    int res = n;
    for (int i=(n-1);i>0;i--) {
        res *= i;
    }
    return res;
}

int main() {
    cout << factorial(5);
    /*
        n = 5
        res = 5
        i = 4
        res = 5 * 4
        res = 20
        i = 3
        res = 20 * 3
    */
}