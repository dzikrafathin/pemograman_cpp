#include <iostream>
#include <string>
using namespace std;

struct data_mhs {
    string nama;
    string nim;
    string kelas;
    int nilai_uts;
    int nilai_uas;
    float rata_rata() {
        return ((float)nilai_uts+(float)nilai_uas)/2;
    }
};

int main()
{
/*
    Nama
    nim
    kelas
    nilai_uts
    nilai_uas
    rata-rata
*/
    return 0;
}
