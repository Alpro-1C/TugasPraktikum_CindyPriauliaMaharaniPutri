#include <iostream>
#include <vector>
using namespace std;

bool Prima(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void bilangan(int batas) {
    int bilanganGanjil = 0, bilanganGenap = 0, bilanganPrima = 0;
    vector<int> factors;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        bilanganGanjil++;
    }
        cout << "\n";

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2) {
        cout << i << " ";
        bilanganGenap++;
    }
        cout << "\n";

    cout << "Bilangan Prima: ";
        for (int i = 2; i <= batas; i++) {
        if (Prima(i)) {
            cout << i << " ";
            bilanganPrima++;
        }

        if (i % 2 != 0) {
            factors.clear();
            cout << "Faktor dari " << i << ": ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    factors.push_back(j);
                }
            }
            for (int factor : factors) {
                cout << factor << " ";
            }

        }
    }


    cout << "\nJumlah Bilangan Ganjil: " << bilanganGanjil << endl;
    cout << "Jumlah Bilangan Genap: " << bilanganGenap << endl;
    cout << "Jumlah Bilangan Prima: " << bilanganPrima << endl;
}

int main() {
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    bilangan(batas);

    return 0;
}

