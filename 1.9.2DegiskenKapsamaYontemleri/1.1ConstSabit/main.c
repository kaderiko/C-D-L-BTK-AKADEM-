#include <stdio.h>
#include <stdlib.h>


//constant: sabit
//define: Tan�mlamak --> Kullanc�ya �nceden uyar� mahiyetinde bilgi verir ya da �n ko�ul verir.
//undef: define �n kapsam�n� kald�rmam�z� sa�lar. define ile tekrardan bir de�er atayabiliriz sonra.

int main() 
{
	const int minute = 60;
	const float PI = 3.14;
	
	printf("Saatteki dakika sayisi: %d \n", minute);
	printf("PI sayisi: %.2f \n", PI);
	
	//PI = PI + 5 dersek hata al�r�z.
	
	return 0;
}
