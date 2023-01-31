/*
Tujuan Program: Untuk menampilkan seluruh isi dari array menggunakan pointer
*/

#include <stdio.h>
int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
	static int tgl_lahir[] = {18, 6, 1989}; 	//static int merupakan variabel statik akan tetap berada di memori saat program sedang berjalan. Ketika sebuah variabel dideklarasikan sebagai statis, ruang untuk itu akan dialokasikan untuk seumur hidup program. Jika tidak diinisialisasi maka isi dari static int adalah 0
	int *ptgl;	 								//Merupakan variabel pointer yang akan menunjuk alamat suatu variabel didalam memory, data yang akan ditunjuk ptgl bertipe integer
	int i; 										//Variabel tunggal bertipe integer, digunakan untuk looping
	ptgl = tgl_lahir; 							//ptgl diisi oleh alamat dari array tgl_lahir elemen ke 0
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); 			//Mencetak nilai yang ditunjuk oleh pointer ptgl yaitu isi dari array tgl_lahir indeks ke 0
	for (i=0; i<3; i++){ 											//Perulangan supaya bisa menampilkan seluruh isi array
		printf("Nilai dari tgl_lahir[%d] = %d\n", i, *(ptgl+i)); 	//Menampilkan nilai semua indeks array dimulai dari indeks ke 0 hingga ke 2, alamat yang ditunjuk oleh pointer ptgl ditambah dengan variabel i, sehingga bisa menampilkan seluruh isi array
	}
	return 0;
}

