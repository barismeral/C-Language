#include <stdio.h>
int main()
{
	// GoTo �rne�i
	char user[10]="BARIS"; // charecter t�r�nde bir user de�i�keni tan�mlad�k ve BARIS adl� ismi atad�k.
tekrar:	printf("\nProgramcinin Adini Giriniz : "); // kullan�c�dan cevab� istedik
	scanf("%s",user); // cevab� al�p user e atad�k
	
	if(strcmp(user,"BARIS")==0) // e�er kullan�c�n� girdi�i cevap BARIS sa
	{
		printf("Dogru!!!\n"); // Onaylad�k
	}
	
	else  // e�er yanlissa
	{
		printf("Yanlis!!!\n");// onaylamay�p
		 goto tekrar; // goto komutu kullanarak sorunun ba��na geri g�nderdik goto tekrar yaz�p tekrar� yinelemek istedi�imiz kodun �n�ne yerle�tirdik.
	}
	
	}
    
