#include <iostream>
int main (){
    int tinggi;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (int i = 1; i <=tinggi; i++){
        //Membuat spasi sebelum karakter bintang
        for (int j = 1; j<= tinggi - i; j++) {
            std::cout << " ";

        }

        //Menampilkan karakter bintang (*)
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
         std::cout << std::endl;
    }

    return 0;
}

