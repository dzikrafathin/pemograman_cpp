#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float alas, tinggi_limas, tinggi_segitiga, pilih, hasil;
	cout << "\n\nBANGUN RUANG LIMAS SEGITIGA\n\n";
	cout << "\n\nDIBUAT OLEH AKHMAD AZHARI NUR\n\n";
	awal:cout << "masukan 1 buat luas limas segitiga, 2 volume limas segitiga : ";
	cin >> pilih;
	if (pilih == 1) {
		cout << "luas limas segitiga\n\n";
		cout << "masukan tinggi_limas : ";
		cin >> tinggi_limas;
		cout << "masukan alas : ";
		cin >> alas;
		tinggi_segitiga = pow(pow(alas/2,2)+pow(tinggi_limas,2),1/2);
		hasil = 4*((alas*tinggi_segitiga)/2);
	} else if (pilih == 2) {
		cout << "\n\nvolume limas segitiga\n\n";
		cout << "masukan alas : ";
		cin >> alas;
		cout << "masukan tinggi segitiga : ";
		cin >> tinggi_segitiga;
		cout << "masukan tinggi limas : ";
		cin >> tinggi_limas;
		hasil = (alas*tinggi_segitiga*tinggi_limas)/2;
	} else {
	 	cout << "\n\nINPUT TIDAK VALID\n\n";
	 	goto awal;
	 }
	 cout << "\n\n=====Hasil Akhir=====\n\n";
	 cout << "limas_segitiga : " << hasil << "\n\n";
}
