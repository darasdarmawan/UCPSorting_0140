// UCPSorting_140.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Bagian A
// 1. Caranya dengan membagi data yang sudah terurut, dan yang belum terurut, dan selection sort. Dan setiap data yang akan dipindahkan ditaro disebelah kanan.
// contohnya : Arr 70(0), 80(1), 30(2), 10(3), 20(4), lalu dibagi menjadi dua yaitu terdapat 70(0) : sorted list, dan  80(1), 30(2), 10(3), 20(4) : unsorted list
// lalu ulang langkah 2,3,4,5 dari 1 ke n-1.
// 2. Caranya dengan discan data nya, dibandingkan, dan swapping , (lakukan dengan cara berulang), lalu diurutkan data dari yang terkecil, dan mempertimbangkan angkanya terlebih dahulu sebelum diurutkan.
// contohnya : Arr 105(0), 120(1), 10(2), 200(3), 20(4), lalu cari data yang paling kecil dan pindahkan ke paling depan, lalu bandingkan lagi secara berulang hingga pass nya dari 1 ke n-1
// 3. Caranya adalah dengan melakukan : Menganalisis (Algoritma Pengurutan), Menentukan jumlah data untuk tempat penyimpanan, dan melakukan upaya programm

#include <iostream>
using namespace std;
int dara[40];
int n;

void input() {
	while (true) {
		cout << "Masukan banyak elemen pada dara : ";
		cin >> n;
		if (n <= 40)
			break;
		else {
			cout << "\nDara dapat mempunyai maksimal 40 elemen.\n";
		}
	}
	cout << endl;
	cout << "=======================================" << endl;
	cout << "Masukan Elemen Dara" << endl;
	cout << "=======================================" << endl;
	
	for (int j = 0; j < n-1; j++) {
		cout << "Data ke-" << (j + 1) << ": ";
		cin >> dara[j];
	}
}

void selectionSort() {
	int minindex, j, i;
	do {
		for (int i = 0; j <= n - 1 - minindex; i++) {
			if (dara[i] > dara[j + 1]) {
				int temp;
				temp = dara[i];
				dara[i] = dara[i + 1];
				dara[i + 1] = temp;

			}
			
		}
		minindex = minindex + 1;
	} while (minindex <= n - 1);

}
void display() {
	cout << endl;
	cout << "===================" << endl;
	cout << "Element Dara yang telah tersusun" << endl;
	cout << "===================" << endl;
	for (int i = 0; i < n; i++) {
		cout << dara[i] << endl;
	}
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();
	selectionSort();
	display();
	system("pause");

	return 0;
}



