#include <iostream>
using namespace std;

int main (){
int FirstValue = 10;
int SecondValue = 8;

//tukar nilai kedua variabel menggunakan temp (variabel tambahan)

int temp = FirstValue;
FirstValue = SecondValue;
SecondValue = temp;

//output penukaran kedua variabel dengan temp
cout <<"First Value:"<< FirstValue << endl;
cout <<"Second Value:"<< SecondValue << endl <<endl;


int NilaiPertama = 10;
int NilaiKedua = 8;

//tukar value kedua variabel tanpa temp (variabel tambahan)

NilaiPertama = NilaiPertama + NilaiKedua;
NilaiKedua = NilaiPertama - NilaiKedua;
NilaiPertama = NilaiPertama - NilaiKedua;

//output penukaran kedua variabel tanpa temp

cout <<"Nilai Pertama:"<< NilaiPertama << endl;
cout <<"Nilai Kedua:"<< NilaiKedua << endl <<endl;

}
