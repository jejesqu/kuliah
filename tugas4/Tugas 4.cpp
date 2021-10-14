#include <iostream>

using namespace std;

class usia{
	private:
		int tahunsekarang, tahunlahir;
		
	public:
		void assign(int umursekarang, int umurlahir){
			tahunsekarang = umursekarang;
			tahunlahir = umurlahir;
		}
		
	int umur(){
		return tahunsekarang - tahunlahir;
	}
};

int main(){
	usia obj;
	obj.assign (2021,1990);
	cout<<"Berarti usia kalian sekarang adalah "<<obj.umur()<< " tahun "<<endl;
	
	return 0;
}
