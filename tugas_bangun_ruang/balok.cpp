#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int panjang, lebar, tinggi, pilihan, hasil;
    string msg;
    cout << "Bangun Ruang Balok\n\n";
    cout << "Dibuat Oleh Veliana Nur Safitri\n\n";
    awal:cout << "ketik 1 untuk luas alas, 2 volume\n";
    cout << "Pilihan anda : ";
    cin >> pilihan;
    if (pilihan == 1){
        cout << "\n\nMenghitung luas alas balok\n\n";
        cout << "Masukan panjang";
        cin >> panjang;
        cout << "Masukan lebar";
        cin >> lebar;
        cout << "Masukan tinggi";
        cin >> tinggi;
        hasil = (2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi);
        msg = "Luas alas";
    } else if (pilihan == 2){
        cout << "\n\nMenghitung volume\n\n";
        cout << "Masukan panjang :";
        cin >> panjang;
        cout << "Masukan lebar :";
        cin >> lebar;
        cout << "Masukan tinggi :";
        cin >> tinggi;
        hasil = panjang * lebar * tinggi;
        msg = "Volume";
    } else {
        cout << "\n\n!!!!!! INPUT TIDAK VALID !!!!!!!!\n\n";
        goto awal;
    }
    cout << "\n\n=====Hasil Akhir=====\n\n";
    cout << msg << "balok : " << hasil << "\n\n";
}