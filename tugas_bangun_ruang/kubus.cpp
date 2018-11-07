#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int sisi, rusuk, pilihan, hasil;
   string msg;
   cout << "Bangun Ruang Kubus\n\n";
   cout << "Dibuat Oleh Verliana Nur Safitri\n\n";
   awal:cout << "ketik 1 untuk luas alas, 2 volume\n";
   cout << "Pilihan anda : ";
   cin >> pilihan;
   if (pilihan == 1){
       cout << "\n\nMenghitung luas alas kubus\n\n";
       cout << "Masukan sisi : ";
       cin >> sisi;
       cout << "Masukan rusuk : ";
       cin >> rusuk;
       hasil = 6*pow(rusuk,2);
       msg = "luas alas";

   }else if (pilihan == 2){
       cout << "\n\nMenghitung volume\n\n";
       cout << "Masukan sisi : ";
       cin >> sisi;
       cout << "Masukan rusuk : ";
       cin >> rusuk;
       hasil = pow(rusuk,3);
       msg = "volume";
   } else {
       cout << "\n\n!!!!!!!! INPUT TIDAK VALID !!!!!!!!!!\n\n";
       goto awal;
   }
    cout << "\n\n=====Hasil Akhir=====\n\n";
    cout << msg << "kubus : " << hasil << "\n\n";
    
}
