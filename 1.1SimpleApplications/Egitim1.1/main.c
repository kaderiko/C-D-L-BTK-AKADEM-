#include <stdio.h>
#include <stdlib.h>

//Dennis Ritche taraf�ndan geli�tirildi. Orjinal kullan�m amac� UNIX i�letim sisteminin geli�tirilmesi.
//Algoritma: bir i�in nas�l yap�laca��n� tarif eden ad�mlar k�mesi
/* Ondal�kl� veya Kesirli Say� (float, double),
Tamsay� (integer, int),
Boolean (bool, boolean),
Numaraland�r�lm�� Tip (enum) */

int main(int argc, char *argv[])  //Ana program
{

int sayi1, sayi2;
int toplam, fark, carpim, mod;
float bolme;

printf("Lutfen iki sayi giriniz ");
scanf("%d %d", &sayi1, &sayi2);

printf("Sayilarin Toplami %d \n", sayi1 + sayi2);
//scanf(); girdi almay� sa�lar.

printf("Sayilarin Farki %d \n", sayi1 - sayi2);

printf("Sayilarin Carpimi %d \n", sayi1 * sayi2);

printf("Sayilarin Modu: %d \n", sayi1 % sayi2);

	return 0; //return 1 demek ve ba�ar�l� bir �ekilde tamamland���nda program 0'� g�sterecek diyor.
}
