#include <iostream>

using namespace std;
int main() {
    int pilihan;
    std::cout <<"Pilih bentuk: \n";
    std::cout <<"1. Persegi\n";
    std::cout <<"2. Persegi Panjang\n";
    std::cout <<"3. Aegitiga \n";
    std::cout <<"Masukkan pilihan (1/2/3):";

switch (pilihan){
case 1:/*kode menghitung luas persegi panjang*/
    cout<< "Masukkan nilai panjang:";
    cin>>p;
    cout<< "Masukkan nilai lebar:";
    cin>>l;
    Luas = p*l;
    cout<< "Luas Persegi panjang tersebut adalah:"<<Luas;
    break;

case 2:/*kode menghitung luas persegi*/
    cout<< "Masukkan nilai sisi ";
    cin>>s;
    Luas = s*s;
    cout<<"Luas persegi tersebut adalah:"<<Luas;
    break;

case 3:/*kode menghitung luas segitiga*/
    cout<< "Masukkan nilai alas:";
    cin>>a;
    cout<< "Masukkan nilai tinggi:";
    cin>>t;
    Luas = 0.5*(a*t);
    cout<< "Luas segitiga tersebut adalah:"<<Luas;

    break;
default:
   cout<< "Menu yang anda masukkan tidak tersedia"<<endl;
    break;
}
return 0;
}

