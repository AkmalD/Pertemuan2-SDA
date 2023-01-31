#include <stdio.h> 
#include <string.h> 
#define PANJANG 20 			//Di inisialisasi bahwa nilai panjang adalah 20

int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/ 
	char nama1[PANJANG] = "DEWI SARTIKA"; 			//nama1 merupakan variabel komposit array betipe char dengan jumlah elemen Panjang(20) dan berisi string "DEWI SARTIKA"
	char nama2[PANJANG] = "SULTAN HASANUDDIN"; 		//nama2 merupakan variabel komposit array betipe char dengan jumlah elemen Panjang(20) dan berisi string "SULTAN HASANUDDIN"
	char namaX[PANJANG]; 							//namaX merupakan variabel komposit array betipe char dengan jumlah elemen Panjang(20)
	
	puts("Nama semula : "); 						//puts digunakan untuk mencetak suatu teks dengan menambahkan line baru pada akhir suatu teks
	printf("Nama 1 --> %s\n", nama1); 				//Mencetak Nama1 sebelum ditukar, %s digunakan untuk mencetak tipe data string
	printf("Nama 2 --> %s\n", nama2); 				//Mencetak Nama2 sebelum ditukar, %s digunakan untuk mencetak tipe data string
	
	/* Pertukaran string */ 
	strcpy(namaX, nama1); 							//strcpy merupakan sintaks untuk mengcopy isi teks dari suatu variabel, disini isi teks dari array nama1 dicopy dan disimpan kedalam array namaX, sehingga array namaX berisi "DEWI SARTIKA"
	strcpy(nama1, nama2);  							//isi dari array nama2 dicopy dan ditempatkan ke array nama1, sehingga array nama1 berisi "SULTAN HASANUDDIN"
	strcpy(nama2, namaX); 							//isi dari array namaX dicopy dan ditempatkan ke array nama2, sehingga array nama2 berisi "DEWI SARTIKA"
	
	puts("Nama sekarang : "); 
	printf("Nama 1 --> %s\n", nama1); 
	printf("Nama 2 --> %s\n", nama2);
	
	return 0;
}

