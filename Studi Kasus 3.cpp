#include <stdio.h>
int main()
{
	float d, *pd; 							//pd merupakan variabel bertipe pointer yang akan menunjuk alamat pada sebuah variabel di memory, data yang akan ditunjuk pointer pd berupa float
	d = 54.5;
	printf("Isi d semula = %g\n", d); 		//%g unutuk mencetak data bertipe desimal tetapi digit 0 yang tidak diperlukan tidak akan ditampilkan
	
	pd = &d;								//variabel pd diisi oleh alamat dari variabel d, setelah ini baru dapat dikatakan bahwa pointer pd menujuk ke variabel d
	*pd = *pd + 10;
	
	printf("Isi d kini = %g\n", d); 		//%g unutuk mencetak data bertipe desimal tetapi digit 0 yang tidak diperlukan tidak akan ditampilkan, yang di print tetap merujuk pada variabel d karena nilai yang ditunjuk oleh pointer pd adalah nilai d itu sendiri
	return 0; 
}

