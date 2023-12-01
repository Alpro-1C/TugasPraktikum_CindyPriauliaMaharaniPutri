#include <iostream>
using namespace std;

int main (){
    cout << "Mencari Nilai Tertinggi" << endl;
    int input [10], arr_count, i, max_num; // input [10] = untuk menampung semua angka

    cout << "input jumlah element array: ";
    cin >> arr_count;
    cout << "input " << arr_count << " angka: " ;
    cout << endl;

    for (i = 0; i << arr_count; i++) { // setiap angka yang diinput disimpan didalam array
    cin >> input[i];
    }

    cout << endl;
    max_num = input[0];
    for (i = 0; i < arr_count; i++) { //Proses mencari nilai tertinggi
    if(input[i] > max_num){
        max_num = input[i];
        }
    }
    cout << "Angka Tertinggi: " << max_num; // Hasil nilai angka tertinggi dari semua element array
    cout << endl;
     return 0;
}

