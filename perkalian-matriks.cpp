//Mengalikan isi 2 matriks
#include <iostream>
#include <conio.h>
using namespace std;

//KAMUS
/*mendeklarasikan variabel global matriks A, B, dan Hasil yang memiliki 
maksimal panjang atau ukuran array baris dan kolom sebanyak 10*/
int M1[10][10]; int NBrs1, NKol1;
int M2[10][10]; int NBrs2, NKol2;
int MHasil[10][10]; int NBrsHsl, NKolHsl;
int i, j, k;

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

//Prosedur untuk melakukan proses perkalian antara Matriks A dan Matriks B
void rumus_perkalian(int NBrs, int NKol, int M[10][10]){
	//Deklarasi dan pengisian MHasil dengan perkalian M1 dan M2
	NBrsHsl = NBrs1; //Untuk Ordo
	NKolHsl = NKol2; //Untuk Ordo
	for (i=0; i<NBrsHsl; i++) {
		for (j=0; j<NKolHsl; j++) {
			MHasil[i][j] = 0;
			for (k=0; k<NKol1; k++) {
				MHasil[i][j] = MHasil[i][j] + (M1[i][k] * M2[k][j]);
			}
		}
	}
}

int main() {
	//ALGORITMA
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
	
	/*Syarat perkalian 2 matriks adalah jumlah kolom Matriks A harus sama dengan
	jumlah baris Matriks B*/
	
	if (NKol1 == NBrs2) { //Jika jumlah kolom Matriks A sudah sama dengan jumlah baris Matriks B maka proses perkalian bisa dilakukan
		//Membaca isi matriks A
		cout << "\n Isi Matriks A\n";
		baca_matriks(NBrs1, NKol1, M1);
		
		//Menampilkan isi Matriks A
		cout << "\n Matriks A : \n";
		tampil_matriks(NBrs1, NKol1, M1);
		
		//Membaca isi Matriks B
		cout << "\n Isi Matriks B\n";
		baca_matriks(NBrs2, NKol2, M2);
		
		//Menampilkan isi Matriks B
		cout << "\n Matriks B : \n";
		tampil_matriks(NBrs2, NKol2, M2);
		
		//Melakukan proses perkalian antara Matriks A dan Matriks B
		rumus_perkalian(NBrsHsl, NKolHsl, MHasil);
	
		//Menampilkam hasil perkalian kedua matriks ke layar
		cout << "\n Hasil perkalian kedua matriks di atas adalah :\n";
		tampil_matriks(NBrsHsl, NKolHsl, MHasil);	
	
	} else { //Tetapi jika jumlah kolom Matriks A tidak sama dengan jumlah baris Matriks B maka proses perkalian tidak dapat dilakukan
		cout << "\n Matriks tidak dapat dikalikan satu sama lain.\n";
	}
	
	getch();
	return 0;
}
