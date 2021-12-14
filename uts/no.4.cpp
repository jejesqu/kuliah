#include<iostream>
#include<string>

using namespace std;

class nama{
	private :
		string nama1;
		string nama2;
		string nama3;
	
	public :
		void setnama(){
			string fn,mn,ln;
			nama1 = fn;
			nama2 = mn;
			nama3 = ln;
			
			cout<<"Masukan First Name  = ";cin>>nama1;
			cin.ignore();
			
			cout<<"Masukan Middle Name   = ";cin>>nama2;
			cin.ignore();
			
			cout<<"Masukan Last Name = ";cin>>nama3;
			cin.ignore();
		}
		string getnama1(){
			return nama1;
		}
		string getnama2(){
			return nama2;
		}
		string getnama3(){
			return nama3;
		}
};

int main(){
	int pilih;
	nama t;
	menu:
		cout<<"0. Keluar"<<endl;
		cout<<"1. Input "<<endl;
		cout<<"Masukan Pilihan Anda = ";cin>>pilih;
		
	if (pilih == 1){
		t.setnama();
		cout<<"First Name  = "<<t.getnama1()<<endl;
		cout<<"Middle Name  = "<<t.getnama2()<<endl;
		cout<<"Last Name = "<<t.getnama3()<<endl;
		
	}
	if (pilih == 0){
		
		cout<<"Thanks";
	}		
}
