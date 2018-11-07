#include <iostream>
using namespace std;

int main() {
    int i, n;
    double data = 0;
    double rata;
    cout << "Masukan jumlah data (n) : ";
    cin >> n;
    for (i=1;i<=n;i++) {
        int inputx;
        cout << "Data ke " << i << ": ";
        cin >> inputx;
        data += inputx;
    }
    rata = data/n;
    cout << "Jumlah data adalah : " << data << endl;
    cout << "Rata rata data adalah : " << rata << endl;
}