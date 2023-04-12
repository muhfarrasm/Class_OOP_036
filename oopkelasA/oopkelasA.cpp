#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;

public: 
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "\nNama : " << nama << endl;
	}
};

class Matakuliah { //commit 5
private:		//commit 6
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();
};
