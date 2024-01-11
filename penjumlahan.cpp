#include <iostream>
using namespace std;

void main() {
	int A[3][3];
	int B[3][3];
	int hasil[3][3];

	//pengisian matrix a
	//i=baris 
	//j=kolom 
	cout << "Masukan matrix A: \n";
	for (int i = 0; i < 3; i++) {
		
		for (int j = 0; j < 3; j++) {
			cout << "A[" << i << "]" << "[" << j << "] = ";
			cin >> A[i][j];
		}
	}

	//memunculkan matrix a
	cout << "Elemen Matrix :" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << A[i][j]<<" ";
		}
		cout << endl;
	}

	cout << "============================\n";

	//pengisian matrix b
	cout << "Masukan matrix B: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "B[" << i << "]" << "[" << j << "] = ";
			cin >> B[i][j];
		}
	}

	//memunculkan matrix b
	cout << "Elemen Matrix :" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	cout << "===========================\n";

	//perhitungan jumlah matrik
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			hasil[i][j] = A[i][j] + B[i][j];
		}
	}

	//penampilkan hasil
	cout << "hasil Penjumlahan nya: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << hasil[i][j] << " ";
		}
		cout << "\n";
	}

	
}