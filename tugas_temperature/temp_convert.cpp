#include <iostream>
using namespace std;
int cal_celcius();
int cal_reamur();

int main() {
    int pilih;
    cout << "\n\n======Aplikasi Konversi Suhu======\n\n";
    cout << "Oleh Dzikra Fathin\n\n";
    const char *menu_awal =
        "1. Celcius\n"
        "2. Reamur\n"
        ;
    awal:cout << menu_awal;
    cout << "Pilih salah satu pilihan 1 dan 2 : ";
    cin >> pilih;
    if (pilih == 1) {
        cal_celcius();
    } else if (pilih == 2) {
        cal_reamur();
    } else {
        cout << "\n\nINVALID INPUT\n\n";
        goto awal;
    }
}
int cal_celcius() {
    int celcius, hasil, pilih;
    string msg;
    cout << "\n\nMenghitung Celcius\n\n";
    awal:cout << "Tekan 1 untuk ke Reamur, 2 untuk Kelvin, 3 untuk Farenheit : ";
    cin >> pilih;
    cout << "Masukan nilai Celcius : ";
    cin >> celcius;
    if (pilih == 1) {
        hasil = (4 * celcius)/5;
        msg = " Reamur ";
    } else if (pilih == 2) {
        hasil = celcius + 273;
        msg = " Kelvin ";
    } else if (pilih == 3) {
        hasil = (9/5) * celcius + 32;
        msg = " Farenheit";
    } else {
        cout << "\n\nINVALID INPUT\n\n";
        goto awal;
    }
    cout << celcius << " celcius sama dengan " << hasil << msg << "\n\n";
}
int cal_reamur() {
    int reamur, hasil, pilih;
    string msg;
    cout << "\n\nMenghitung Reamur\n\n";
    awal:cout << "Tekan 1 untuk ke Celcius, 2 untuk Kelvin, 3 untuk Farenheit : ";
    cin >> pilih;
    cout << "Masukan nilai Reamur : ";
    cin >> reamur;
    if (pilih == 1) {
        hasil = (5 * reamur)/4;
        msg = " Celcius ";
    } else if (pilih == 2) {
        hasil = (5 * reamur + 273)/4;
        msg = " Kelvin ";
    } else if (pilih == 3) {
        hasil = (9 * reamur + 32)/4;
        msg = " Farenheit";
    } else {
        cout << "\n\nINVALID INPUT\n\n";
        goto awal;
    }
    cout << reamur << " reamur sama dengan " << hasil << msg << "\n\n";
}