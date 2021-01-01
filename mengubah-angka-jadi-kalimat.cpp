//Program Angka Dalam Kalimat

#include <iostream>
#include <conio.h>

using namespace std;

int angka, sisa, d1, d2, d3, d4;
string angka1, angka2, angka3, angka4;

// Deklarasi Fungsi
string digit (int d);

// Program Utama
int main(){
	cout << "Masukkan sebuah angka (maks 4 digit) : ";
	cin >> angka;
	
	// Memisahkan digit angka dalam urutan d4,d3,d2,d1
	d4 = angka/1000;
	sisa = angka%1000;
	d3 = sisa/100;
	sisa = sisa%100;
	d2 = sisa/10;
	sisa = sisa%10;
	d1 = sisa;
	
	// Menterjemahkan digit
	if (d4 > 1){
		angka4 = digit(d4) + "ribu ";
	} else if (d4 == 1){
		angka4 = "seribu ";
	} else {
		angka4 = "";
	}
	
	if (d3 > 1){
		angka3 = digit(d3) + "ratus ";
	} else if (d3 == 1){
		angka3 = "seratus ";
	} else {
		angka3 = "";
	}

	if (d2 > 1){
		angka2 = digit(d2) + "puluh ";
		if (d1 == 0){
		angka1 = "";
		} else {
		angka1 = digit(d1);
		}
	} else if (d2 == 1){
		if (d1 == 0){
			angka2 = "sepuluh ";
			angka1 = "";
		} else if (d1 == 1){
			angka2 = "sebelas ";
			angka1 = "";
		} else {
			angka2 = digit(d1) + "belas ";
			angka1 = "";
		}
	} else {
		angka2 = "";
		if (d1 == 0){
		angka1 = "";
		} else {
		angka1 = digit(d1);
		}
	}
	
	cout << angka << " = " << angka4+angka3+angka2+angka1 << "\n";
	getch();
	return 0; 
}

// Menterjemahkan Digit ke Dalam Satu Kata
string digit (int d){
	string kata;
	
	switch(d){
		case 1:
			kata = "satu ";
			break;
		case 2:
			kata = "dua ";
			break;
		case 3:
			kata = "tiga ";
			break;
		case 4:
			kata = "empat ";
			break;
		case 5:
			kata = "lima ";
			break;
		case 6:
			kata = "enam ";
			break;
		case 7:
			kata = "tujuh ";
			break;
		case 8:
			kata = "delapan ";
			break;
		case 9:
			kata = "sembilan ";
			break;
	}
	
	return kata;
}
