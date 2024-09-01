#include <stdio.h>
#include <stdlib.h>
//#define VERI_BOYUTU 1000


int main() 
{
/*	// Veri boyutunu depolayan karakter dizisi
	char veri[VERI_BOYUTU];
	
	
	//File pointer to hold reference to our file
	FILE *fPtr;
	
	//Dosyay� w (write) modunda a�.
	//"data/file2. txt� dosyan�n g�zergah�.
	fPtr = fopen("dosya2.txt", "w+");
	
	
	//fopen(), e�er ba�ar�s�z ise NULL d�ner.

	if(fPtr == NULL)
	{
		//Dosya olu�turulamad��� i�in programdan ��k.
		printf("Dosya olusturulamadi. \n");
		exit(EXIT_FAILURE);
	}
	
	
	//Dosyaya kaydedilecek olan girdileri kullan�c�dan al
	printf("Dosyaya kaydedilecek olan girdiyi al");
	fgets(veri, VERI_BOYUTU, stdin);

	//Veriyi dosyaya yaz
	fputs(veri, fPtr);
	
	fclose(fPtr); */
	
	
	
	FILE *fPtr;
	char character;
	
	fPtr = fopen("dosya2.txt", "r");
	
	
	//fopen(), e�er ba�ar�s�z ise NULL d�ner */
	if(fPtr == NULL)
	{
		//Dosya okunamad��� i�in programdan ��k */
	printf("Dosya okunmadi. \n");
	printf("Dosyan�n ilgili konumda olup olmadigini ve de erisim yetkiniz olup olmadigini kontrol edin");
	exit(EXIT_FAILURE);
	}
	
	
	printf("Dosya basariyla acildi; icerigi okunuyor. \n \n");
	
	do
	{
		//Dosyadan bir karakter oku.
	character = fgetc(fPtr);
	
	//Dosyadan okudu�un karakteri konsola yazd�r */
	putchar(character);
	}
	while(character != EOF);	//Bunu, EOF (End Of File) karakterine denk gelmedi�in s�rece yap.
	
	//Dosyayla isimiz bitti; kendisine baska uygulamalarin da erisebilmesi i�in serbest birak.
	fclose(fPtr);

	
	return 0;
}
