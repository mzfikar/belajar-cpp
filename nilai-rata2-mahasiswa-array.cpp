#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n;
	int hi[n]; 
	int jumlah = 0;
	float rata2 = 0;
	
	cout << "====================== Kalkulator Perhitungan Nilai Rata-Rata Mahasiswa ======================\n\n";
	
	cout << "Masukkan banyaknya mahasiswa : ";
	cin >> n;
	cout << endl;
	
	//mengisi array
	if (n >= 1 && n <= 100){
		for(int i = 1; i <= n; i++){
			cout << "Masukkan nilai mahasiswa " << i << " : ";
	        cin >> hi[i];
	        //proses menghitung jumlah setiap elemen
	        jumlah = jumlah + hi[i];
	    }
	}
	rata2 = (float) jumlah / n;
	
	int jumlah_lulus = 0;
	
	for (int i = 1; i <= n; i++){
	    if (hi[i] >= 1 && hi[i] <= 100){
		    if(hi[i] >= rata2){
		        jumlah_lulus += 1;
		    }
	    }
	}
	
	if (n >= 1 && n <= 100){
		cout << "\nRata-rata nilai mahasiswa adalah : " << rata2 << "\n";
		cout << "Jumlah mahasiswa yang lulus : " << jumlah_lulus << "\n";
	}else {
		cout << "\nMasukkan salah!\n";
	}
	
	getch();
	return 0;
}
