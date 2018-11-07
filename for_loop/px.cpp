#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float total = 0;
    float rata;
    cout << "Banyaknya data :"; 
    cin >> n;
    for (i=1;i<=n;i++) {
        float data;
        cout << "Masukan data ke " << i;
        cin >> data;
        total += data;
    }
    rata = total/n;
    cout << "Total : " << total << endl;
    cout << "Rata-rata : " << rata << endl;
    return 0;
}
