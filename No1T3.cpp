#include <iostream>
using namespace std;

int main (){
    int score;

    //Masukkan nilai score
    std::cout <<"Masukkan nilai score:";
    std::cin >> score;

    if(score >=90) {
        std::cout <<"Selamat! Anda mendapatkan nilai A." << std::endl;
    } else if (score>=80&& score<=89){
        std::cout <<"Anda mendapatkan nilai B." <<std::endl;
    } else if (score>=70&& score<=79){
        std::cout <<"Anda mendapatkan nilai C." <<std::endl;
    }else if (score>=60&& score<=69){
        std::cout <<"Anda mendapatkan nilai D." <<std::endl;
    }else {
        std::cout <<"Anda mendapatkan nilai E." <<std::endl;
    }

    return 0;
}

