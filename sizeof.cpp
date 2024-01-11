#include <iostream>
using namespace std;

void main() {
	int jumlah_array;
	int angka[] = { 1,2,3,4,55,6,7,48,29,11 };
	jumlah_array = sizeof(angka) / sizeof(*angka);
	cout << jumlah_array;

}