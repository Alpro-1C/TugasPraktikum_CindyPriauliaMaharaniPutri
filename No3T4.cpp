#include <iostream>

int main (){
    int n, a=0, b=1, c;

    std::cout << "Masukkan jumlah elemen dalam deret Fibonacci: ";
    std::cin >> n;

    std::cout << "Deret Fibonacci: ";

    //Menampilkan dua angka pertama dari deret Fibonacci (0 dan 1)
    std::cout << a << " " << b << " ";

    //Menampilkan elemen-elemen berikutnya dalam deret Fibonacci
    for (int i = 2; i < n; i++) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    std::cout << std::endl;

    return 0;

}
