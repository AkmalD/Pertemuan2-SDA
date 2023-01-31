#include <stdio.h>
int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/ 
	char *nama1 = "DEWI SARTIKA"; 				//nama1 merupakan variabel pointer yang akan menunjuk alamat sebuah string didalam memory, yaitu "DEWI SARTIKA"
	char *nama2 = "SULTAN HASANUDDIN"; 			//nama2 merupakan variabel pointer yang akan menunjuk alamat sebuah string didalam memory, yaitu "SULTAN HASANUDDIN"
	char *namaX; 								//namaX merupakan variabel pointer yang akan menunjuk alamat sebuah variabel pada memory, data yang akan ditunjuk namaX berupa karakter/string
	
	puts("Nama semula : "); 					//Mencetak nama semula
	printf("Nama 1 --> %s\n", nama1); 
	printf("Nama 2 --> %s\n", nama2);
	
	/* Penukaran string yang ditunjuk oleh pointer nama1 dan nama2 */ 
	namaX = nama1; 								//Pointer namaX diisi alamat dari variabel nama1 yang berisi string "DEWI SARTIKA", setelah ini baru dapat dikatakan bahwa pointer namaX mennunjuk pada nama1
	nama1 = nama2; 								//Pointer nama1 diisi alamat dari variabel nama2 yang berisi string "SULTAN HASANUDDIN", setelah ini baru dapat dikatakan bahwa pointer nama1 mennunjuk pada nama2
	nama2 = namaX; 								//Pointer nama2 diisi alamat dari variabel namaX yang berisi string "DEWI SARTIKA", setelah ini baru dapat dikatakan bahwa pointer nama2 mennunjuk pada namaX
	
	puts("Nama sekarang : "); 					//Mencetak nama setelah ditukar
	printf("Nama 1 --> %s\n", nama1); 
	printf("Nama 2 --> %s\n", nama2);
	
	return 0;
}

