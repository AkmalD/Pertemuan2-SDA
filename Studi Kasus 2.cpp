#include <stdio.h>
int main()
{
	float *pu; float nu;
	int u = 1234; pu = &u;		//Terjadi error karena variabel pu bertipe float diisi alamat dari variabel u bertipe integer
	//Seharusnya variabel u bertipe float, supaya pointer pu dapat diisi alamat dari variabel u
	nu = *pu;
	
	printf("u = %d\n", u); printf("nu = %f\n", nu); 	//%d diubah menjadi %f jika variabel u diubah menjadi tipe data float
	//printf("u = %f\n", u);
	
	return 0;
}
