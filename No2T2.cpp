#include <iostream>
using namespace std;

int main(){
int A, B;

cout << "Bebek Pak Tatang:" ;
cin>> A;

cout << "Dibagikan Kepada Temannya:" ;
cin>> B;

int JumlahBebekYangAkanDibagikan = A/B;
int SisaBebek = A%B;

cout << "Jumlah Bebek Yang Akan Dibagikan Kepada Teman Temannya:" << JumlahBebekYangAkanDibagikan << endl;
cout << "Jumlah Sisa Bebek:" << SisaBebek ;

return 0;
}
