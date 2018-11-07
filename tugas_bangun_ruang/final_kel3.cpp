#include <iostream>
#include <math.h>
using namespace std;
#define PHI 3.14
int hitung_kubus();
int hitung_balok();
int hitung_limassegiempat();
int hitung_prismasegitiga();
int hitung_limassegitiga();
int hitung_tabung();
int hitung_bola();
int hitung_kerucut();
int deret_aritmatika();
int main()
{
    int pilih;
    string nama;
    const char *menu_awal = 
        "1. Kubus\n"
        "2. Balok\n"
        "3. Limas Segiempat\n"
        "4. Prisma Segitiga\n"
        "5. Limas Segitiga\n"
        "6. Tabung\n"
        "7. Kerucut\n"
        "8. Bola\n"
        "9. Deret Aritmatika\n"
        ;
    cout << "Selamat datang di aplikasi penghitung luas dan volume bangun ruang" << endl;
    cout << "Siapa nama anda : ";
    cin >> nama;
    menu_awal:cout << menu_awal;
    cout << "Hallo " << nama << " Silakan pilih salah satu bangun ruang yang ingin dihitung : ";
    cin >> pilih;
    switch(pilih) {
        case 1 :
            hitung_kubus();
            break;
        case 2 :
            hitung_balok();
            break;
        case 3 :
            hitung_limassegiempat();
            break;
        case 4 :
            hitung_prismasegitiga();
	    break;
        case 5 :
            hitung_limassegitiga();
            break;
        case 6 :
            hitung_tabung();
            break;
        case 7 :
            hitung_kerucut();
            break;
        case 8 :
            hitung_bola();
            break;
        case 9 :
            deret_aritmatika();
            break;
        default :
            cout << "\n\n!!!!!!!!! Masukan tidak valid !!!!!!!!\n\n" << endl;
            goto menu_awal;
    }
    cout << "Ketik 1 untuk kembali ke menu awal, ketik 2 untuk keluar : ";
    cin >> pilih;
    if (pilih == 1)
        goto menu_awal;
    cout << "\nTerima kasih sudah menggunakan aplikasi ini\n";
    return 0;
}
int hitung_kubus() {
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
    } else if (pilihan == 2){
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
int hitung_balok() {
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
int hitung_limassegiempat() {
    int panjang_limas, tinggi_limas, tinggi_segitiga, luas_segitiga, luas_segiempat, pilihan, hasil;
    string msg;
    cout << "Bangun Ruang Limas Segiempat\n\n";
    cout << "\n\nOleh Hilyaturrizqiyah\n\n";
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
int hitung_prismasegitiga() {
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
int hitung_limassegitiga() {
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
int hitung_tabung() {
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
int hitung_kerucut() {
    int selimut, jari_jari, tinggi, pilihan, hasil;
    string msg;
    cout << "\n\n======== BANGUN RUANG KERUCUT ==========\n\n";
    cout << "Oleh Dzikra Fathin \n\n";
    awal:cout << "Ketik 1 untuk luas selimut, 2 untuk luas permukaan, 3 untuk volume\n";
    cout << "Pilihan anda : ";
    cin >> pilihan;
    if (pilihan == 1) {
        cout << "\n\nMenghitung luas selimut kerucut\n\n";
        cout << "Masukan jari-jari : ";
        cin >> jari_jari;
        cout << "\nMasukan tinggi selimut : ";
        cin >> selimut;
        hasil = PHI * jari_jari * selimut;
        msg = "Luas selimut ";
    } else if (pilihan == 2) {
        cout << "\n\nMenghitung luas permukaan kerucut\n\n";
        cout << "Masukan jari-jari : ";
        cin >> jari_jari;
        cout << "\nMasukan tinggi selimut : ";
        cin >> selimut;
        hasil = (PHI * jari_jari * selimut) + (PHI * pow(jari_jari,2));
        msg = "Luas permukaan ";
    } else if (pilihan == 3) {
        cout << "\n\nMenghitung volume kerucut\n\n";
        cout << "Masukan jari-jari : ";
        cin >> jari_jari;
        cout << "\nMasukan tinggi kerucut : ";
        cin >> tinggi;
        hasil = 1/3 * (PHI * pow(jari_jari,2) * tinggi);
    } else {
        cout << "\n\n!!!!!!! Input tidak valid !!!!!!!!!\n\n";
        goto awal;
    }
    cout << "\n\n======== HASIL AKHIR =========\n\n";
    cout << msg << "kerucut : " << hasil << "\n\n";
}

int hitung_bola() {
    int jari_jari, pilihan, hasil;
    string msg;
    cout << "\n\n======== BANGUN RUANG BOLA ========\n\n";
    cout << "Oleh Dzikra Fathin \n\n";
    awal:cout << "Ketik 1 untuk luas atau 2 untuk Volume : ";
    cin >> pilihan;
    if (pilihan == 1) {
        cout << "\n\nMenghitung luas permukaan bola\n\n";
        cout << "Masukan jari-jari : ";
        cin >> jari_jari;
        hasil = 4 * PHI * pow(jari_jari,2);
        msg = "Luas permukaan "; 
    } else if (pilihan == 2) {
        cout << "\n\nMenghitung volume bola\n\n";
        cout << "Masukan jari-jari : ";
        cin >> jari_jari;
        hasil = 4/3 * (PHI * pow(jari_jari,3));
        msg = "Volume ";
    } else {
        cout << "Input tidak valid\n\n";
        goto awal;
    }
    cout << "\n\n======== HASIL AKHIR =========\n\n";
    cout << msg << "bola adalah : " << hasil << "\n\n";
}

int deret_aritmatika() {
    int a, b, n, hasil;
    cout << "\n\n======== DERET ARITMATIKA ==========\n\n";
    cout << "\n\nOleh Dzikra Fathin \n\n";
    cout << "Masukan nilai awal a : ";
    cin >> a;
    cout << "Masukan nilai beda b : ";
    cin >> b;
    cout << "Jumlah deret : ";
    cin >> n;
    cout << "\n\n===== HASIL DERET =====\n\n";
    for (int i=1;i<=n;i++) {
        hasil = a + (i - 1) * b;
        cout << hasil;
        if (i != n) {
            cout << ", ";
        } else {
            cout << "\n\n";
        }
    }
}
