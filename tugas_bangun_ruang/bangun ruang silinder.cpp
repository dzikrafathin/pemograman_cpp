#include <iostream>
#include <math.h>
#define PHI 3.14
using namespace std;
int main ()
{
	int rusuk, tinggi, pilih, hasil;
	cout << "\n\nBANGUN RUANG TABUNG\n\n";
	cout << "\n\nDIBUAT OLEH AKHMAD AZHARI NUR\n\n";
	awal:cout << "masukan 1 buat luas selimut, 2 luas permukaan, 3 luas volume : ";
	cin >> pilih;
	if (pilih == 1) {
		cout << "\n\nluas selimut\n\n";
		cout << "masukan rusuk : ";
		cin >> rusuk;
		cout << "masukan tinggi : ";
		cin >> tinggi;
		hasil = 2*PHI*rusuk*tinggi;
	
	 } else if (pilih == 2) {
	 	cout << "\n\nluas permukaan\n\n";
	 	cout << "masukan rusuk : ";
	 	cin >> rusuk;
	 	cout << "masukan tinggi : ";
	 	cin >> tinggi;
	 	hasil = (2*PHI*rusuk*tinggi)+(2*PHI*pow (rusuk,2));
	 	
	 } else if (pilih == 3) {
	 	cout << "\n\nluas volume\n\n";
	 	cout << "masukan rusuk : ";
	 	cin >> rusuk;
	 	cout << "masukan tinggi : ";
	 	cin >> tinggi;
	 	hasil = PHI*pow(rusuk,2)*tinggi;
	 } else {
	 	cout << "\n\nINPUT TIDAK VALID\n\n";
	 	goto awal;
	 }
	 cout << "\n\n=====Hasil Akhir=====\n\n";
	 cout << "silinder : " << hasil << "\n\n";
}
