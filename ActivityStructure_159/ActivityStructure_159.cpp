#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() 
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140159";
	mhs1.nama = "Ghofiq";
	mhs1.alamat = "lampung";
	mhs1.umur = 19;

	cout << "masukkan nim: ";
	cin >> mhs2.nim;
	cout << "masukkan nama: "; 
	cin >> mhs2.nama;
	cout << "masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : "  << mhs1.nim;
	cout << "\nnama : "  << mhs1.nama;
	cout << "\nalamat : "  << mhs1.alamat;
	cout << "\numur : "  << mhs1.umur;

	cout << "\nNim : "  << mhs2.nim;
	cout << "\nnama : "  << mhs2.nama;
	cout << "\nalamat : "  << mhs2.alamat;
	cout << "\numur : "  << mhs2.umur;
}