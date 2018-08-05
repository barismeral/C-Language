#include <stdio.h>
#include <stdlib.h>
int main()
{                               // Bu Program Barýþ Meral Tarafýndan Yazýlmýþtýr.
	int sayi1,sayi2,toplam,fark,carpim;
	float bolum;
	char secim[6];
	printf("\tBu Program Girilen Iki Sayiyi Hesaplar\n\n\n");
	printf("Devam Etmek Istiyormusunuz?\nEVET[E],HAYIR[H]\n");
	scanf("%s",secim);
	if (strcmp(secim,"hayir")==0)
	{
		printf("by");
	}
   else{
   	
	  printf("1. Sayiyi Giriniz:");
	    scanf("%d",&sayi1);
	       printf("2. Sayiyi Giriniz:");
	          scanf("%d",&sayi2);
	     
	
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / (float)sayi2;
	          
			  printf("Girilen Sayilarin Toplami : %d\n\n",toplam);
			  printf("Girilen Sayilarin Farki : %d\n\n",fark);
			  printf("Girilen Sayilarin Carpimi : %d\n\n",carpim);
			  printf("Girilen Sayilarin Bolumu : %.2f\n\n",bolum);
			  
	 system("pause");
	             return 0;
}
	
}
