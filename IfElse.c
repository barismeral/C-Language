#include<stdio.h>
int main()
{
	int yas; // Ya� de�i�keni tan�mlad�k
	printf("Yasinizi Girin : "); // kullan�c�dan ya��n� istedik
	scanf("%d",&yas); // girilen say�y� kay�t ettik
	 if(yas>0 && yas<=3) // e�er yas 0 dan b�y�k 3 ve 3 ten k���kse 
	 {
	 	printf("Yas %d  Bebek",yas); // ya��n� ve kar��l���n� yazd�rd�k
	 }
	else if(yas>3 && yas<=9)         // "
	{
		printf("Yas %d Cocuk",yas);   //"
	}
	else if(yas>9 && yas<=17)
	{
		printf("Yas %d Genc",yas);
	}
	else if(yas>17 && yas<=25)
	{
		printf("Yas %d Yetiskin",yas);   //""
	}
	else if(yas>25 && yas<=40)
	{
		printf("Yas %d Orta Yas",yas);
	}
	else if(yas>40 && yas<=60)
	{
		printf("Yas %d Yasli",yas);
	}
	else if(yas>60 && yas<=80)
	{
		printf("Yas %d Ihitiyar",yas);
	}
	else if (yas>80 && yas<=100)
	{
		printf("Yas %d Ahiretlik",yas);
	}
	else   // en son 100 den fazla bir say� girildi�inde yanl�� olarak i�lem g�rd�r�p
	{
		printf("Yas %d Yanlis Girdi",yas); // kullan�c�ya bildirdik
	}
}
