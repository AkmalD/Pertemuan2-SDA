#include <stdio.h>
int main()
{
	int z, s, *pz, *ps; 		//pz dan ps merupakan variabel bertipe pointer yang akan menunjuk alamat sebuah variabel pada memory, data yang akan ditunjuk pz dan ps bertipe integer
	
	z = 20;
	s = 30;
	
	pz = &z; ps = &s;			//pz diisi alamat dari variabel z dan ps diisi alamat dari variabel s, setelah ini baru dapat dikatakan bahwa pointer pz menunjuk ke variabel z dan pointer ps menunjuk ke variabel s
	*pz = *pz + *ps;			// pointer pz diisi oleh penjumlahan pointer pz dan pointer ps, dimana pointer pz menunjuk nilai dari variabel z dan ps menunjuk nilail dari variabel s
	
	printf("z = %d, s = %d\n", z , s); 
	return 0;
}
