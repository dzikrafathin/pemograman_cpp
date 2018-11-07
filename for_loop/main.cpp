#include <iostream>
using namespace std;

int main() {
	int awal, akhir;
	cout << "Nilai awal : ";
	cin >> awal;
	cout << "Nilai akhir : ";
	cin >> akhir;
	for (int i=awal;i>=akhir;i--) {
		for (int j=awal;j>=i;j--) {
			cout << "*";
		}

		for (int k=i;k>=akhir;k--) {
			cout << i;
		}
		for (int k=(i-1);k>=akhir;k--) {
			cout << i;
		}
		for (int j=awal;j>=i;j--) {
			cout << "*";
		}

		cout << endl;
	}
}
