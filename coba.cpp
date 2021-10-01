#include <iostream>
using namespace std;

int main(){
    double panjang, lebar, hasilLuas;

    cout << "Menghitung Luas Persegi Panjang" << endl;
    cout << "================================================" << endl;
    cout << "Panjang            : "; cin >> panjang;
    cout << "Lebar              : "; cin >> lebar;

    hasilLuas = panjang*lebar;
    
    cout << "Ukuran Luas        : " << hasilLuas << endl;
    return 0;
}
