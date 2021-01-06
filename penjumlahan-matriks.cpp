//Menjumlahkan isi 2 matriks
#include <iostream>
#include <conio.h>
using namespace std;

//KAMUS
/*mendeklarasikan variabel global matriks A, B, dan Hasil yang memiliki 
maksimal panjang atau ukuran array baris dan kolom sebanyak 10*/
int M1[10][10]; int NBrs1, NKol1;
int M2[10][10]; int NBrs2, NKol2;
int MHasil[10][10]; int NBrsHsl, NKolHsl;
int i, j;

//Prosedur untuk membaca matriks
void baca_matriks(int NBrs, int NKol, int M[10][10]){
	for (i=0; i<NBrs; i++) {
		for (j=0; j<NKol; j++) {
			cout << " Elemen ke-[" << i << ", " << j << "] = ";
			cin >> M[i][j];
		}
	}
} 

//Prosedur untuk menampilkan isi matriks
void tampil_matriks(int NBrs, int NKol, int M[10][10]){
	for (i=0; i<NBrs; i++) {
	cout << " [ ";
		for (j=0; j<NKol; j++) {
		cout << M[i][j] << " ";
		}
		cout << "]\n"; //ganti baris
	}
}

//Prosedur untuk melakukan proses penjumlahan antara Matriks A dan Matriks B
void rumus_penjumlahan(int NBrs, int NKol, int M[10][10]){
	//Deklarasi dan pengisian MHasil
	NBrsHsl = NBrs1;
	NKolHsl = NKol1;
	for (i=0; i<NBrsHsl; i++) {
		for (j=0; j<NKolHsl; j++) {
			MHasil[i][j] = M1[i][j] + M2[i][j]; //penjumlahan
		}
	}
}

int main() {
	//ALGORITMA
	cout << "==================== Kalkukator Penjumlahan 2 Matriks ====================\n\n";
	
	//Membaca isi Matriks A (M1)
	cout << " Matriks A\n";
	cout << " Masukkan baris = ";
	cin >> NBrs1;
	cout << " Masukkan kolom = ";
	cin >> NKol1;

	//Membaca isi Matriks B (M2)
	cout << "\n Matriks B\n";
	cout << " Masukkan baris = ";
	cin >> NBrs2;
	cout << " Masukkan kolom = ";
	cin >> NKol2;
	
	if (NBrs1 == NBrs2 && NKol1 == NKol2) {
		//Membaca isi matriks A
		cout << "\n Isi Matriks A\n";
		baca_matriks(NBrs1, NKol1, M1);

		//Menampilkan isi Matriks A
		tampil_matriks(NBrs1, NKol1, M1);
		
		//Membaca isi Matriks B
		cout << "\n Isi Matriks B\n";
		baca_matriks(NBrs2, NKol2, M2);
		
		//Menampilkan isi Matriks B
		tampil_matriks(NBrs2, NKol2, M2);
		
		//Melakukan proses penjumlahan antara Matriks A dan Matriks B
		rumus_penjumlahan(NBrsHsl, NKolHsl, MHasil);
	
		//Menampilkam hasil penjumlahan kedua matriks ke layar
		cout << "\n Hasil penjumlahan kedua matriks di atas adalah :\n";
		tampil_matriks(NBrsHsl, NKolHsl, MHasil);	
	
	} else {
		cout << "\n Matriks tidak dapat dijumlahkan satu sama lain.\n";
	}
	
	getch();
	return 0;
}
