#include <iostream>
using namespace std;

int main(){
    int angka1, angka2, angka3;

    //Meminta pengguna memasukkan tiga angka
    std::cout <<"Masukkan angka pertama:";
    std::cin >>angka1;
    std::cout <<"Masukkan angka pertama:";
    std::cin >>angka2;
    std::cout <<"Masukkan angka pertama:";
    std::cin >>angka3;

    //Mencari angka terbesar
    int terbesar=angka1;

    if (angka2>terbesar){
        terbesar=angka2;
    }
    if (angka2>terbesar){
        terbesar=angka3;
    }

    //Menampilkan angka terbesar
    std::cout <<"Angka terbesar di antaraketiganya adalah:" << terbesar << std::endl;

    return 0;
}

