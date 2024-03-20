#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string b){
			this->nama=nama;
			npm=b;
		}
};

int main(){
	Mahasiswa Mhs("Samsul", "11235");
	
	cout << "Nama: "<< Mhs.nama << endl;
	cout << "Npm: " << Mhs.npm;
}
