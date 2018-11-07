#include <iostream>
using namespace std;

int main() {
    int nilai;
    string grade, predikat;
    awal:cout << "Masukan angka nilai : ";
    cin >> nilai;
    if (nilai >= 0 && nilai <= 100) {
        if (nilai <= 59) {
            grade = 'E';
            predikat = "Kecewa";
        } else if (nilai <= 69) {
            grade = 'D';
            predikat = "Kurang";
        } else if (nilai <= 79) {
            grade = 'C';
            predikat = "Cukup";
        } else if (nilai <= 89) {
            grade = 'B';
            predikat = "Memuaskan";
        } else {
            grade = 'A';
            predikat = "Sangat Memuaskan";
        }
    } else {
        cout << "\n\nINVALID INPUT\n\n";
        goto awal;
    }
    cout << "\nTerbilang huruf : " << grade << "\n\n";
    cout << "Kalimat : " << predikat << endl;
}