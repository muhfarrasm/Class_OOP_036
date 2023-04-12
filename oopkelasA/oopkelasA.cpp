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

public:		//commit 7
	void InputMK();
	void TampilMK();
};

void Matakuliah::InputMK() { // 8
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah: ";
	cin >> namamk;
	cout << "Masukkan SKS Mata Kuliah : ";
	cin >> sks;
}


void Matakuliah::TampilMK() {//9
	cout << "Kode mata kuliah : " << kode << endl;
	cout << "Nama Mata Kuliah : " << namamk << endl;
	cout << "SKS mata kuliah : " << sks << endl;
}