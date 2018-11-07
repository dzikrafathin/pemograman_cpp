#include <iostream>
using namespace std;

int main() {
    int awal,akhir,pilih;
    cout << "Nilai awal : ";
    cin >> awal;
    cout << "Nilai akhir : ";
    cin >> akhir;
    cout << "1.Ganjil/2.genap? ";
    cin >> pilih;
    for (awal;awal<=akhir;awal++) {
        if (pilih == 2) {
            if (awal % 2 != 0) {
                continue;
            } 
            cout << awal << endl;
        } else {
            if (awal % 2 == 0) {
                continue;
            } 
            cout << awal << endl;
        }
    }
}