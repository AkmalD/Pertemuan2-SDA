#include <stdio.h>
int main()
{ 
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/ 
	int var_x = 273; 		//Inisialisasi nilai dari var_x, var_x diisi nilai 273
	int *ptr1; 				/* ptr1 adl pointer yang menunjuk ke objek bertipe integer (Boleh disebut pointer integer saja) */
	
	int **ptr2; 			/* ptr2 adl pointer yang menunjuk ke pointer yang menunjuk ke objek bertipe integer (Boleh disebut : pointer menunjuk ke pointer integer saja) */
	
	ptr1 = &var_x; 			//Pointer ptr1 diisi alamat dari variabel var_x, setelah ini baru dapat disebut bahwa pointer ptr1 menunjuk alamat var_x
	ptr2 = &ptr1; 			//Pointer ptr2 diisi alamat dari pointer ptr1 yang berisi alamat dari var_x, sehingga secara tidak langsung pointer ptr2 berisi alamat dari var_x juga
	
	/* Mengakses nilai var_x melalui ptr1 dan ptr2 */ 
	printf("Nilai var_x = %d\n", *ptr1);
	printf("Nilai var_x = %d\n", **ptr2); //**(nama_variabel) merupakan notasi untuk pointer yang menunjuk pointer
	return 0;
}

