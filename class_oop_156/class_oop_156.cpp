#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama=" << nama;
	}
};

class matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputmk() {

		cout << "\nMasukan jumlah sks= ";
		cin >> sks;
		cout << "\nMasukan kode mk= ";
		cin >> kode;
		cout << "\nMasukan Nama mk= ";
		cin >> nama mk;
	}