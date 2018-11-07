#include <iostream>
using namespace std;

int main() {
    int a=5;
    while (a>=1) {
        int c=a;
        while (c>=1) {
            cout << a;
            c--;
        }
        cout << endl;
        a--;
    }
}