#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	string nilai[20];
	int posisi[20];
	int i, n, banyak = 0;
	string nama;
	bool ketemu;

	cout << "Masukkan banyaknya nama = ";
	cin >> n;
	cout << "\n";

	//Membaca elemen Array
  	for (i = 1; i <= n; i++) {
    	cout << "Masukkan nama ke-" << i << " = ";
    	cin >> nilai[i];
  	}

  	//Mencetak elemen Array
  	cout << "\nDeretan nama = ";
  	for (i = 1; i <= n; i++) {
    	cout << nilai[i] << " ";
  	}
	
	cout << "\n";
  	cout << "\nMasukkan nama yang akan dicari = ";
  	cin >> nama;

  	//Melakukan Pencarian
  	for (i = 1; i <= n; i++) {
    	if (nilai[i] == nama) {
      		ketemu = true;
      		posisi[banyak] = i;
      		banyak++;
    	}
  	}
  	if (ketemu) {
  		cout << "\nNama " << nama << " ditemukan sebanyak " << banyak;
		cout << "\nPada posisi ke : ";
		for (i = 0; i < banyak; i++) {
	    	cout << posisi[i] << " ";
		}
  	}
  	else {
    	cout << "\nNama " << nama << " tidak ditemukan\n";
    }
    
  getch();
  return 0;
}
