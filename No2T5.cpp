#include <iostream>
using namespace std;

// Fungsi untuk menggambar pola segitiga
void segitiga(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        // Membuat spasi sebelum karakter bintang
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Menampilkan karakter bintang (*)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Memanggil fungsi untuk menggambar pola segitiga
   segitiga(tinggi);

    return 0;
}
