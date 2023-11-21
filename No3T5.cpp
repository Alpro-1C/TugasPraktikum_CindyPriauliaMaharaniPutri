#include <iostream>
using namespace std;

// Fungsi untuk menentukan apakah suatu angka termasuk dalam deret Fibonacci atau tidak
bool isFibonacci(int x) {
    int a = 0, b = 1, c;
    while (a <= x) {
        if (a == x) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int n, a = 0, b = 1, c;

    cout << "Masukkan jumlah elemen dalam deret Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    // Menampilkan dua angka pertama dari deret Fibonacci (0 dan 1)
    cout << a << " " << b << " ";

    // Menampilkan elemen-elemen berikutnya dalam deret Fibonacci
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;

    // Meminta pengguna memasukkan angka untuk diperiksa
    int cek;
    cout << "Masukkan angka untuk diperiksa apakah termasuk dalam deret Fibonacci: ";
    cin >> cek;

    // Memanggil fungsi untuk mengecek apakah angka termasuk dalam deret Fibonacci
    if (isFibonacci(cek)) {
        cout << cek << " termasuk dalam deret Fibonacci.\n";
    } else {
        cout << cek << " tidak termasuk dalam deret Fibonacci.\n";
    }

    return 0;
}
