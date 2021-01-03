//Program mencari jumlah dan rata-rata nilai array

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n;
	int nilai[n];
	int jumlah = 0;
	float rata2 = 0;
	
	cout << "Masukkan banyaknya elemen array : ";
	cin >> n;
	cout << endl;
	
	//Mengisi array
	for (int i = 0; i < n; i++){
		cout << "Masukkan elemen ke " << i << " : ";
		cin >> nilai[i];
	}
	
	cout << endl;
	
	//Menampilkan array
	for (int i = 0; i < n; i++){
		cout << "Elemen ke " << i << " = " << nilai[i] << "\n";
		//proses menghitung jumlah setiap elemen
		jumlah = jumlah + nilai[i];
	}
	
	cout << "\nJumlah seluruh elemen adalah " << jumlah << "\n";
	rata2 = (float)jumlah / n;
	cout << "Rata-ratanya adalah " << rata2 << "\n";
	
	getch();
	return 0;
}
