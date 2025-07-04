#include <iostream>
#include <cmath>
using namespace std;

int main() {
        double BilanganBulat;
        cout << "Masukkan Bilangan Bulat: ";
         cin >> BilanganBulat;


        if(BilanganBulat >= 1 && BilanganBulat <= 9) {
            cout << "Bilangan Bulat " << BilanganBulat << " adalah SATUAN";
        }
        else if (BilanganBulat >= 10 && BilanganBulat <= 99) {
            cout << "Bilangan Bulat " << BilanganBulat << " adalah PULUHAN";
        }
        else if (BilanganBulat >= 100 && BilanganBulat <= 999) {
            cout << "Bilangan Bulat " << BilanganBulat << " adalah RATUSAN";
        }
        else if (BilanganBulat >= 1000 && BilanganBulat <= 9999) {
            cout << "Bilangan Bulat " << BilanganBulat << " adalah RIBUAN";
        }
        else if (BilanganBulat >= 10000 && BilanganBulat <= 99999) {
            cout << "Bilangan Bulat " << BilanganBulat << " adalah PULUH RIBUAN";
        }
        else {
            cout << "MASUKKAN BILANGAN ANGKA!";
        }


        return 0;
}