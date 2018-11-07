#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int panjang_limas, tinggi_limas, tinggi_segitiga, luas_segitiga, luas_segiempat, pilihan, hasil;
string msg;
cout << "Bangun Ruang Limas Segiempat\n\n";
awal:cout << "ketik 1 untuk Luas Alas, 2 Luas Limas Segiempat, 3 Volume Limas Segiempat\n";
cout << "Pilihan anda : ";
cin >> pilihan;
if (pilihan == 1){
    cout << "\n\nMenghitung Luas Alas\n\n";
    cout << "Masukan panjang :";
    cin >> panjang_limas;
    hasil = pow(panjang_limas,2);
    msg = "Luas Alas";
 } else if (pilihan == 2){
    cout << "\n\nMenghitung Luas Limas Segiempat\n\n";
    cout << "Masukan panjang :";
    cin >> panjang_limas;
    cout << "Masukan tinggi :";
    cin >> tinggi_limas;
    tinggi_segitiga = pow(pow(panjang_limas/2,2)+pow(tinggi_limas,2),1/2);
    luas_segitiga=(panjang_limas*tinggi_segitiga)/2;
    luas_segiempat=pow(panjang_limas,2);
    hasil=(4*luas_segitiga)+luas_segiempat;
    msg = "Luas Limas Segiempat";
} else if(pilihan==3){
 	cout << "\n\nMenghitung Volume Limas Segiempat\n\n";
 	cout << "Masukan Panjang Alas Limas :";
 	cin >> panjang_limas;
 	cout << "Masukan Tinggi Limas :";
 	cin >> tinggi_limas;
 	hasil=(pow(panjang_limas,2)*tinggi_limas)/3;
}
cout << "\n\n=====Hasil Akhir=====\n\n";
cout << msg << "Limas Segiempat : " << hasil << "\n\n";
}

