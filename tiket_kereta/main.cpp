#include <iostream>
using namespace std;

int berangkat,kursi, harga, tujuan, kelas;
string nama, tgl_berangkat;

string daftar_stasiun[2] = {"Bogor", "Jatibarang"};
string daftar_kelas[3] = {"Eksekutif", "Ekonomi", "Bisnis"};

int main() {
  cout << "==== APLIKASI PEMESAN TIKET KERETA =====";
  cout << "\n\nMasukan nama : ";
  cin >> nama;
  cout << "Masukan tangal berangkat : ";  
  cin >> tgl_berangkat;
  cout << "Masukan Stasiun Awal (0 = Bogor, 1 = Jatibarang) : ";
  cin >> berangkat;
  cout << "Masukan tujuan (0 = Bogor, 1 = Jatibarang) : ";
  cin >> tujuan;
  if (berangkat == 0 && tujuan == 1){
     cout << "Masukan Kelas (0 = Eksekutif, 1 = Ekonomi, 2 = Bisnis) : ";
     cin >> kelas;
     switch (kelas) {
      case 0:
       harga = 100000;
       break;
      case 1:
       harga = 80000;
       break;
      case 2:
       harga = 90000;
       break;
     }
  }
  if (berangkat == 1 && tujuan == 0){
     cout << "Masukan Kelas (0 = Eksekutif, 1 = Ekonomi, 2 = Bisnis) : ";
     cin >> kelas;
     switch (kelas){
      case 0:
       harga = 150000;
       break;
      case 1:
       harga = 90000;
       break;
      case 2:
       harga = 120000;
       break;
     }
  }
  cout << "Masukan Jumlah Kursi Yang Diterima : ";
  cin >> kursi;
  harga *= kursi;
  cout << "\n\n===== TIKET KERETA ======\n\n";
  cout << "Nama : " << nama << endl;
  cout << "Kelas : " << daftar_kelas[kelas] << endl;
  cout << "Asal/Tujuan : " << daftar_stasiun[berangkat] << " & " << daftar_stasiun[tujuan] << endl;
  cout << "Tgl/Tujuan : " << tgl_berangkat << endl;
  cout << "Harga : " << harga << endl;
}
