#include<iostream>
using namespace std;

int main(){		
	//ini adalah deklarasi fungsi main pada pemrograman ini
	//tipe data yang digunakan adalah int
	//variabel yang digunakan ada 3
	//disini saya ingin mengurangi umur kakak dan umur kalian
		
	int ukakak, ukalian, berartiusiakaliansekarangadalah;
	
	//menampilkan value
	cout<< "usia kakak  : "; cin>> ukakak;	//memasukkan ukakak 35
	cout<< "usia kalian : ";cin>> ukalian;	//memasukan ukalian 14
	
	//menjalankan var ukakak dikurang var ukalian
	berartiusiakaliansekarangadalah = ukakak-ukalian;
	
	//menampilkan output setelah dikurangi dengan umur kakak
	cout<< "berarti usia kalian sekarang adalah : " << berartiusiakaliansekarangadalah << endl;
	
	return 0;
}
