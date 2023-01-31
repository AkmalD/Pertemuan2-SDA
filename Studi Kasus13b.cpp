#include <stdio.h>
#include <stdlib.h> 
/* Kamus Global */
int N; 		/* ukuran efektif */
enum MyType 							//Enum adalah tipe data yang ditentukan pengguna di C. Ini terutama digunakan untuk menetapkan nama ke konstanta integral, nama membuat program mudah dibaca dan dipelihara.
{
	bulat, karakter 					//Atribut dari struct mytype
};

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succI (int *i);	/* suksessor, berupa procedure by ref */ 
void predI (int *i);	/* predesessor */
void succC (char *c);	/* suksessor, berupa procedure by ref */ 
void predC (char *c);	/* predesessor */

/* print tabel yang belum ketahuan typenya */ 
void printtab (int *T, enum MyType Ty);
void printtab1 (char *T, enum MyType Ty);

/* Prosedur dengan parameter sebuah fungsi */
void geser (int *TT, void (*f) (int *));
void geser1 (char *TT, void (*f) (char *));

/* Program Utama */ 
int main()
{
	/* kamus lokal */
	int *MyTabInt; 
	char *MyTabC; 
	int i;
	
	/* program */
	N = 10; 												//N diinisialisasi 10
	MyTabInt = (int *) malloc (N * sizeof(int)); 			//MyTabInt memesan alamat sebanyak N*besar tipe data, disini integer
	MyTabC = (char *) malloc (N * sizeof(char)); 			//MyTabInt memesan alamat sebanyak N*besar tipe data, disini char
	*MyTabInt = 1; 											//MyTabINt diisi nilai 1
	for (i = 0; i < N; i++)
	{
		*(MyTabInt + i) = i; 								//Proses pengisian 
		*(MyTabC + i) = 'Z';
	}
	printf("Isi tabel dalam main sebelum pemanggilan : \n");
	printf("	Tabel integer \n"); 
	printtab ((int *) MyTabInt, bulat); 					//Memanggil modul untuk mencetak tabel integer
	printf("	\nTabel charakter \n"); 
	printtab1 ((char *) MyTabC, karakter); 					//Memanggil modul untuk mencetak tabel char
	printf("\n");
	 
	/* Pakai geser dengan parameter succ */ 
	printf("Geser dengan succ \n");
	geser ((int *) MyTabInt,  *succI); 						//Memanggil modul untuk menggeser nilai integer 1 satuan ke kanan
	geser1 ((char *) MyTabC,  *succC); 						//Memanggil modul untuk menggeser nilai char 1 satuan ke kanan
	printf(" dalam main \n");
	printf("	Tabel integer \n"); 
	printtab ((int *) MyTabInt, bulat); 					//Memanggil modul untuk mencetak tabel integer
	printf("	\nTabel charakter \n"); 
	printtab1 ((char *) MyTabC, karakter); 					//Memanggil modul untuk mencetak tabel char
	printf("\n");
	
	/* Pakai geser dengan parameter pred */ printf("Geser dengan pred \n");
	geser ((int *) MyTabInt,  *predI); 						//Memanggil modul untuk menggeser nilai integer 1 satuan ke kiri
	geser1 ((char *) MyTabC, *predC); 						//Memanggil modul untuk menggeser nilai char 1 satuan ke kiri
	printf(" dalam main \n");
	printf("	Tabel integer \n"); 
	printtab ((int *) MyTabInt, bulat); 					//Memanggil modul untuk mencetak tabel integer
	printf("	\nTabel charakter \n"); 
	printtab1 ((char *) MyTabC, karakter); 					//Memanggil modul untuk mencetak tabel char
	printf("\n");
	return 0;
}

/* Body Function */ 
void succI (int *i)
{
	*i = *i+1; 							//Modul untuk mengubah nilai integer 1 satuan lebih besar
}

void predI (int *i)
{
	*i = *i-1; 							//Modul untuk mengubah nilai integer 1 satuan lebih kecil
}

void succC (char *c)
{
	*c = *c+1; 							//Modul untuk mengubah nilai char 1 satuan lebih besar
}

void predC (char *c)
{
	*c = *c-1; 							//Modul untuk mengubah nilai char 1 satuan lebih kecil
}

void geser (int *TT, void (*f) (int *)) 		//Modul untuk mencetak setelah nilai integer digeser
{
	int i;
	printf(" dalam geser \n"); 
	for (i = 0; i < N; i++)
	{
		f (&TT[i]);
		printf(" %d ", TT[i]);
	}
	printf("\n");
}

void geser1 (char *TT, void (*f) (char *)) 	//Modul untuk mencetak setelah nilai char digeser
{
	int i;
	printf(" dalam geser \n"); 
	for (i = 0; i < N; i++)
	{
		f (&TT[i]);
		printf(" %d ", TT[i]);
	}
	printf("\n");
}
 
void printtab (int *T, enum MyType Ty) 		//Modul untuk mencetak tabel integer
{
	int i;
	for (i = 0; i < N; i ++)
	{
		switch (Ty)
		{
			case bulat : printf("%d ", (int *) *(T + i)); 
						break; 
			case karakter : printf("%c ", (char *) *(T + i)); 
						break;
		}
	}
}

void printtab1 (char *T, enum MyType Ty) 	//Modul untuk mencetak tabel char
{
	int i;
	for (i = 0; i < N; i ++)
	{
		switch (Ty)
		{
			case bulat : printf("%d ", (int *) *(T + i)); 
						break; 
			case karakter : printf("%c ", (char *) *(T + i)); 
						break;
		}
	}
}
