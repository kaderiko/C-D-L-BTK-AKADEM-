#include <stdio.h>
#include <stdlib.h>

/*malloc():  Memory Allocation (Bellek Tahsisi) 
Y���n (heap) �zerinde dinamik olarak bir bellek blo�u tahsis etmek i�in kullan�l�r. 
Blok boyutu kullan�c� taraf�ndan bayt cinsinden belirtilir.
Fonksiyon, blo�un ba�lang�c�na i�aret eden bir g�sterici d�ner. Bellek tahsisi ba�ar�s�z olursa NULL d�ner.
Tahsis edilen bellek, rastgele de�erler i�erir. */

/*calloc(): Contiguous Allocation (Birbirine Biti�ik Tahsis) 
bir dizi eleman i�in bellek tahsis etmek i�in kullan�l�r. Tahsis edilen bellek blo�undaki t�m baytlar� s�f�rla ba�lat�r.
Fonksiyon iki arg�man al�r: eleman say�s� ve her bir eleman�n boyutu.
Fonksiyon, tahsis edilen belle�e i�aret eden bir g�sterici d�ner. Bellek tahsisi ba�ar�s�z olursa NULL d�ner.*/


/*realloc(): Reallocate (Yeniden Tahsis) 
tahsis edilmi� bir bellek blo�unu yeniden boyutland�rmak i�in kullan�l�r. 
malloc() veya calloc() ile daha �nce tahsis edilen bellek blo�unun boyutunu art�rabilir veya azaltabilir.
Yeni boyut daha b�y�kse, yeni alan ba�lat�lm�� veya ba�lat�lmam�� olabilir. Daha k���kse, fazla bellek serbest b�rak�l�r.
Fonksiyon, yeniden tahsis edilen belle�e i�aret eden bir g�sterici d�ner. Bellek tahsisi ba�ar�s�z olursa NULL d�ner. */

/*free(): Free (Serbest B�rak) 
 daha �nce malloc(), calloc() veya realloc() ile tahsis edilen belle�i serbest b�rakmak i�in kullan�l�r.
Bu fonksiyon herhangi bir de�er d�nd�rmez. 
free() fonksiyonu �a�r�ld�ktan sonra, belle�e referans vermek i�in kullan�lan g�sterici ge�ersiz hale gelir. */


int main() 
{
	int i, n, *pointer, total=0;
	
	printf("Toplanacak eleman sayisini giriniz: ");
	scanf("%d", &n);
	
	pointer = (int*) malloc(n *sizeof(int));
	
	if(pointer == NULL)
	{
		printf("HATA!!!");
		exit(0);
	}
	
	printf("Toplanacak elemanlari giriniz: ");
	for(i=0; i < n; i++)
	{
		scanf("%d", pointer + i);
		total += *(pointer + i);
	}
	
	printf("Toplam: %d",total );
	
	free(pointer);
	
	
	
	return 0;
}
