#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int len;
    cout << "LENGTH OF ARRAY : ";
    cin >> len;
    int my_arr[len];
    for (int i=0;i<len;i++) {
        cout << "ENTER VALUE OF INDEX <int> " << i  << ": ";
        cin >> my_arr[i];
    }
    for (int i=0;i<len;i++) {
        cout << "VAL OF INDEX " << i << ": " << my_arr[i] << endl;
    }
    return 0;
}
