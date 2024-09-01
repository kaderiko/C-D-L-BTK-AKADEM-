#include <stdio.h>
#include <stdlib.h>
#define VERI_BOYUTU 1000


int main() 
{
	// Veri boyutunu depolayan karakter dizisi
	char veri[VERI_BOYUTU];
	
	//File pointer to hold reference to our file
	FILE *fPtr;
	
	//Dosyay� w (write) modunda a�.
	//"data/file1. txt� dosyan�n g�zergah�.
	fPtr = fopen("dosya1.txt", "w+");
	
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
	
	fclose(fPtr);
	
	return 0;
}
