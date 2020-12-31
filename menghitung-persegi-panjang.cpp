//Program Empat Persegi Panjang

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int pilihan;
float panjang, lebar, hasil;

// Deklarasi Prosedur
void menu();
void baca_dimensi();
void hitung_luas();
void hitung_keliling();
void hitung_diagonal();
void tampil_hasil();

// Program Utama
int main(){
	
	pilihan = 0;
	
	do{
		menu();
		cout << "\nMasukkan pilihan Anda : ";
		cin >> pilihan;
		
		if (pilihan < 4){
			baca_dimensi();
		} 
		switch (pilihan){
			case 1:
				hitung_luas();
				break;
			case 2:
				hitung_keliling();
				break;
			case 3:
				hitung_diagonal();
				break;
			case 4:
				cout << "\nSelesai, sampai jumpa\n";
				getch();
				return 0;
			default:
				cout << "\nPilihan salah, Ulangi\n";
		}
		
		if (pilihan < 4){
			tampil_hasil();
		}
	} while (pilihan = 4);
}

// Definisi Prosedur

// Prosedur Menampilkan Menu Program
void menu(){
	cout << "\nMenu program empat persegi panjang\n";
	cout << "1. Menghitung Luas\n";
	cout << "2. Menghitung Keliling\n";
	cout << "3. Menghitung Diagonal\n";
	cout << "4. Keluar dari Program\n";
}

// Prosedur Membaca Dimensi Persegi Panjang
void baca_dimensi(){
	cout << "Masukkan Panjang : ";
	cin >> panjang;
	cout << "Masukkan Lebar : ";
	cin >> lebar;
}

// Prosedur Menghitung Luas Empat Persegi Panjang
void hitung_luas(){
	float luas;
	
	luas = panjang*lebar;
	hasil = luas;
}

// Prosedur Menghitung Keliling Empat Persegi Panjang
void hitung_keliling(){
	float keliling;
	
	keliling = 2*(panjang + lebar);
	hasil = keliling;
}

// Prosedur Menghitung Diagonal Empat Persegi Panjang
void hitung_diagonal(){
	float diagonal;
	
	diagonal = sqrt(panjang*panjang+lebar*lebar);
	hasil = diagonal;
}

// Prosedur Menampilkan Hasil dari Program Ini
void tampil_hasil(){
	cout << "Hasil = " << hasil << "\n";
}
