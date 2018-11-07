#include <iostream>
using namespace std;

int main() {
    for (int i=1;i<=6;i++) {
        for (int j=i;j<=6;j++) {
            cout << " ";
        }
        for (int k=1;k<=i;k++) {
            cout << "* ";
        }
        cout << endl;
    }
}
