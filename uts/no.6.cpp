#include<iostream>

using namespace std;

class matematika{
	private :
		float angka1;
		float angka2;
		float hasil;
		char operasi;
	
	public :
		
		void setaritmatika(float a,float b){
			angka1  = a;
			angka2  = b;
		}
		
		void tambah(){
			cout<<"Masukkan angka 1 = ";cin>>angka1;
	    	cout<<"Masukkan angka 2 = ";cin>>angka2;
			hasil = angka1 + angka2;
			cout<<"Hasil Penjumlahan = "<<hasil<<endl;
		}
		void kurang(){
			cout<<"Masukkan angka 1 = ";cin>>angka1;
	    	cout<<"Masukkan angka 2 = ";cin>>angka2;
			hasil = angka1 - angka2;
			cout<<"Hasil Pengurangan = "<<hasil<<endl;
		}
		void kali(){
			cout<<"Masukkan angka 1 = ";cin>>angka1;
	    	cout<<"Masukkan angka 2 = ";cin>>angka2;
			hasil = angka1 * angka2;
			cout<<"Hasil Perkalian = "<<hasil<<endl;
		}
		void bagi(){
			cout<<"Masukkan angka 1 = ";cin>>angka1;
	    	cout<<"Masukkan angka 2 = ";cin>>angka2;
			hasil = angka1 / angka2;
			cout<<"Hasil Pembagian = "<<hasil<<endl;
		}
		
		float getangka1(){
			return angka1;
		}
		float getangka2(){
			return angka2;
		}
		float gethasil(){
			return hasil;
		}
};

int main(){
	int i;
	char y;
	matematika t;
	

	menu:
		cout<<"\n";
		cout<<" 0.keluar"<<endl;
		cout<<" 1.Tambah"<<endl;
		cout<<" 2.Kurang"<<endl;
		cout<<" 3.Kali  "<<endl;
		cout<<" 4.Bagi"<<endl;
		cout<<"Pilih = ";cin>>i;
	
	if(i == 1){
		t.tambah();
		cout<<"Ingin memilih menu lain (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;	
		}
		else if(y == 'y'){
			cout<<" Thanks ";
		}	
	}
	else if(i == 2){
		t.kurang();
		cout<<"Ingin memilih menu lain (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;
		}
		else if(y == 'n'){
			cout<<" Thanks ";
		}	
	}
	else if(i == 3){
		t.kali();
		cout<<"Ingin memilih menu lain (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			cout<<" Thanks ";
		}	
	}
	else if(i == 4){
		t.bagi();
		cout<<"Ingin memilih menu lain (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			cout<<" Thanks ";
		}	
	}
	else if(i == 0){
		cout<<"Thanks ";
	}
	
}
