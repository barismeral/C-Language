#include <stdio.h>
int main()
{
	// break �rne�i*
		int sayi,i; 
	printf("Kaca Kadar Sayilsin? :");// ka�ta d�ng�n�n bitece�ini sorduk
	scanf("%d",&sayi); // cevab� al�p sayi de�i�kenine atad�k
	  for(i=1; i>0;) // d�ng� ba�latt�k
	  {
	  	if(i==sayi) break; // e�er girilen sayi d�ng� say�s�na e�it olursa break ile d�ng�y� k�rd�k
	  	printf("%d\n",i++); // girilen say�ya kadar d�ng� d�nd� ve say�lar� 1'er artt�rd�k
	  }
	  
	printf("%d Dongu Sonu!",sayi); // d�ng� bitti�ini bildirdik girilen sayi ile beraber.
    ////////////-----------------//////////// 
    
               // continue �rne�i
               // tek say�lar� bulup yazd�rmak
        int d;
           for( d= 0; d < 10; d++ ) { //d�ng�y� ba�latt�k 10 oluncaya kadar devam edecek 
		
	         if( d%2 == 0 ) //e�er i yani d�ng� say�s� her seferinde 2 ye b�l�n�p kalan say� 0 ise �ift say�d�r.
			 continue; //continue kullanarak devam et dedik ve tek say�lar� bulup yazd�r
	          	printf("%d\n",d);// tek say�lar� yazd�rma
	}
















}



