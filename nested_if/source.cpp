#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int pilih;
    awal:cout << "\n\n1. Deret aritmatik, 2. Deret Geometri : ";
    cin >> pilih;
    if (pilih == 1) {
        int a, b, n, res;
        cout << "Masukan nilai awal : ";
        cin >> a;
        cout << "Masukan nilai beda : ";
        cin >> b;
        cout << "Masukan jumlah suku : ";
        cin >> n;
        cout << "\n\n1. Deret, 2. Jumlah : ";
        cin >> pilih;
        if (pilih == 1) {
            cout << "Deretnya adalah : ";
            for (int i=1;i<=n;i++) {
                res = a + (i - 1) * b;
                if (i == n) {
                    cout << res;
                } else {
                    cout << res << ", ";
                }
            }
            cout << "\n\n";
        } else {
            res = 0;
            cout << "Jumlahnya adalah : ";
            for (int i=1;i<=n;i++) {
                res += a + (i - 1) * b;
            }
            cout << res << "\n\n";
        }
    } else if (pilih == 2) {
        int a, r, n, res;
        cout << "Masukan nilai awal : ";
        cin >> a;
        cout << "Masukan nilai rasio : ";
        cin >> r;
        cout << "Masukan jumlah suku : ";
        cin >> n;
        cout << "\n\n1.Deret, 2.Jumlah : ";
        cin >> pilih;
        if (pilih == 1) {
            cout << "Deretnya adalah : ";
            for (int i=0;i<=n;i++) {
                res = a * pow(r,i);
                if (i == n) {
                    cout << res;
                } else {
                    cout << res << ", ";
                }
            }
            cout << "\n\n";
        } else {
            res = 0;
            cout << "Jumlahnya adalah : ";
            for (int i=1;i<=n;i++) {
                res += a * pow(r,i);
            }
            cout << res << "\n\n";
        }
    } else {
        cout << "\n\ninput invalid\n\n";
        goto awal;
    }
}