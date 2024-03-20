#include <iostream>
using namespace std;

class Mahasiswa{
	private://jika diganti private maka akan error karna akses pada class nya private
		string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " "<< Mhs.npm << endl;

}
