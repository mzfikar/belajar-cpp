#include <iostream>
#include <conio.h>
using namespace std;

int pilihan;
float a,b,c;
char ulang='y';

void menu();
void baca_angka();
string nama(int pilihan);
string simbol(int pilihan);
float operasi(int pilihan);
void tampil_hasil(float a,float b);
float penjumlahan(float a, float b);
float pengurangan(float a, float b);
float perkalian(float a, float b);
float pembagian(float a, float b);

int main(){

	do {

		menu();
		cout << "\nMasukkan pilihan : ";
		cin >> pilihan;
		
		if (pilihan <= 4 && pilihan != 0){
			baca_angka();
			tampil_hasil(a,b);
		} else {
			cout << "\nPilihan salah!\n";
		}
		
		cout << "\nUlang ? (y/t) : ";
		cin >> ulang;
		cout << "\n";
		
	} while (ulang == 'y');
	
	cout << "Terima Kasih!";
	getch();
	return 0;
}

void menu(){
	cout << "Kalkulator Sederhana\n";
	cout << "Pilihan Menu :\n";
	cout << "1. Penjumlahan (+)\n";
	cout << "2. Pengurangan (-)\n";
	cout << "3. Perkalian (*)\n";
	cout << "4. Pembagian (/)\n";
}

void baca_angka(){
	cout << "Masukkan angka pertama : ";
	cin >> a;
	cout << "Masukkan angka kedua : ";
	cin >> b;
	cout << "\n";
}

float penjumlahan(float a, float b){
	c = a + b;
	return c;
}

float pengurangan(float a, float b){
	c = a - b;
	return c;
}

float perkalian(float a, float b){
	c = a * b;
	return c;
}

float pembagian(float a, float b){
	c = a / b;
	return c;
}

float operasi(int pilihan){
	float hasil;
	
	switch (pilihan){
		case 1: hasil = penjumlahan(a,b); break;
		case 2: hasil = pengurangan(a,b); break;
		case 3: hasil = perkalian(a,b); break;
		case 4: hasil = pembagian(a,b); break;
		return hasil;
	}
}

string nama(int pilihan){
	string kata;
	
	switch (pilihan){
		case 1: kata = "penjumlahan"; break;
		case 2: kata = "pengurangan"; break;
		case 3: kata = "perkalian"; break;
		case 4: kata = "pembagian"; break;
		return kata;
	}
}

string simbol(int pilihan){
	string symbol;
	
	switch (pilihan){
		case 1: symbol = " + "; break;
		case 2: symbol = " - "; break;
		case 3: symbol = " * "; break;
		case 4: symbol = " / "; break;
		return symbol;
	}
}

void tampil_hasil(float a, float b){
	
	cout << "Hasil " << nama(pilihan) << " dari " << a << simbol(pilihan) << b << " adalah : " << operasi(pilihan) << "\n";
}
