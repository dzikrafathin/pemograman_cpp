#include <iostream>
using namespace std;

int main() {
	int awal, akhir;
	cout << "Nilai awal : ";
	cin >> awal;
	cout << "Nilai akhir : ";
	cin >> akhir;
	if (awal > akhir) {
		for (awal;awal>=akhir;awal--) {
			for (int i=0;i<awal;i++) {
				cout << awal;
			}
			cout << endl;
		}
	} else {
		for (awal;awal<=akhir;awal++) {
			for (int i=0;i<awal;i++) {
				cout << awal;
			}
			cout << endl;
		}
	}
}
