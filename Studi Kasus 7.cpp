#include <stdio.h>
int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
	char *pkota = "BANDUNG"; 	//variabel pkota sebagai variabel pointer yang menunjuk ke data bertipe char dan menempatkan konstanta “BANDUNG” dalam suatu alamat di memori
	 puts(pkota);				//pkota menunjuk konstanta string BANDUNG, puts digunakan untuk menulis baris atau string ke output dengan menambahkan baris baru pada akhir string
	return 0;
}
//Perbedaan dengan char Kota[]= "BANDUNG", Sebab pkota adalah pointer (menyatakan alamat) yang dengan mudah dapat diatur agar menunjuk ke  string lain (bukan string “BANDUNG”), sedangkan kota adalah array (array menyatakan  alamat yang konstan, tak dapat diubah)
