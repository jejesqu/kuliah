#include<iostream>

using namespace std;

class waktu{
	private:
		int jam;
		int menit;
		int detik;
		
	public:
		waktu(){
			waktu::jam=0;
			waktu::menit=0;
			waktu::detik=0;
		}
		
		void setwaktu(int j, int m, int d){
			if ((j>=0 && j<23) && (m>=0 && m<=59) && (d>=0 && d<=59)){
				jam = j;
				menit = m;
				detik = d;
			} else {
				cout<<"format waktu salah"<<endl;
			}
		}

		int getjam(){
			return jam;
		}
		int getmenit(){
			return menit;
		}
		int getdetik(){
			return detik;
		}
};
	
int main(){
	int a,b,c;
	cout<<"Masukkan jam = ";
	cin>>a;
	cout<<"Masukkan menit = ";
	cin>>b;
	cout<<"Masukkan detik = ";
	cin>>c;
	
	waktu w;
	w.setwaktu(a,b,c) ;
	cout<<w.getjam()<<" : "<<w.getmenit()<<" : "<<w.getdetik()<<endl;
	
	return 0;
}


