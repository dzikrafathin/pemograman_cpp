#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int panjang_sisi_a, panjang_sisi_b, panjang_sisi_c, tinggi_prisma, tinggi_segitiga, alas_segitiga, pilihan, hasil;
string msg;
cout << "Bangun Ruang Prisma Segitiga\n\n";
cout << "\n\nOleh Hilyaturrizqiyah\n\n";
awal:cout << "ketik 1 untuk Luas Prisma Segitiga, 2 Volume Prisma Segitiga\n";
cout << "Pilihan anda : ";
cin >> pilihan;
 if (pilihan == 1){
     cout << "\n\nMenghitung Luas Prisma Segitiga\n\n";
     cout << "Masukan Panjang Sisi A :";
     cin >> panjang_sisi_a;
     cout << "Masukan Panjang Sisi B :";
     cin >> panjang_sisi_b;
     cout << "Masukan Panjang Sisi C :";
     cin >> panjang_sisi_c;
     cout << "Masukan Tinggi Prisma :";
     cin >> tinggi_prisma;
     cout << "Masukan Alas Segitiga :";
     cin >> alas_segitiga;
     cout << "Masukan Tinggi Segitiga :";
     cin >> tinggi_segitiga;
     hasil = ((panjang_sisi_a+panjang_sisi_b+panjang_sisi_c)*tinggi_prisma)+(alas_segitiga*tinggi_segitiga);
     msg = "Luas Prisma Segitiga";

 } else if (pilihan == 2){
     cout << "\n\nMenghitung Volume Prisma Segitiga\n\n";
     cout << "Masukan Alas Segitiga :";
     cin >> alas_segitiga;
     cout << "Masukan Tinggi Segitiga :";
     cin >> tinggi_segitiga;
     cout << "Masukan Tinggi Prisma :";
     cin >> tinggi_prisma;
     hasil=(alas_segitiga*tinggi_segitiga*tinggi_prisma)/2;
     msg = "Volume Prisma Segitiga";
	
 }
cout << "\n\n=====Hasil Akhir=====\n\n";
cout << msg << "Limas Segiempat : " << hasil << "\n\n";
}

