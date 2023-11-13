#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas tertentu: ";
    cin >> batas;

    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGanjil++;
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGenap++;
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            jumlahPrima++;
        }
    }
    std::cout << std::endl;

    std::cout << "Jumlah Bilangan Ganjil: " << jumlahGanjil << std::endl;
    std::cout << "Jumlah Bilangan Genap: " << jumlahGenap << std::endl;
    std::cout << "Jumlah Bilangan Prima: " << jumlahPrima << std::endl;

    return 0;
}
