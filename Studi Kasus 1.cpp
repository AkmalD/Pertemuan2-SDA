#include <stdio.h>

int main() 
{ 
 int x, y; 		//x dan y merupakan variabel tunggal bertipe integer
 int *px; 		//px merupakan pointer yang akan menunjuk alamat sebuah variabel pada memory, Data yang akan ditunjuk pointer px berupa integer
 x = 87; 		//variabel x di isi nilai 87
 px = &x; 		/*
 					- px diisi dengan alamat dari variabel x, setelah ini barulah dapat dikatakan bahwa px menunjuk ke variabel x. 
 					- jika line 8 dihilangkan, maka tidak akan keluar output (Dev-C++), maka output: Nilai yang ditunjuk px= 17744 dan Nilai Y= 17744 (Visual Studio Code)
				*/
 y = *px; 		//y diisi nilai dari variabel yang ditunjuk oleh pointer px
	 printf("Alamat x = %p\n", &x); 	//%p digunakan untuk mencetak data bertipe pointer
	 printf("Alamat y = %p\n", &y); 	//Ditambahkan perintah untuk menampilkan alamat dari variabel y, hasilnya alamatnya berbeda dengan variabel x
	 printf("Isi px = %d\n", x); 
	 printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	 printf("Nilai y = %d\n", y); 
return 0; 
}
