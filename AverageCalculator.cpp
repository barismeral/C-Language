#include <stdio.h>  // printf & scanf gibi temel giriþ cýkýþ fonksiyonlarý kullanmayý saðlar..
#include <stdlib.h>   // system fonksiyonunu kullanýr..
int main() // program burdan baþlar geriye deðer döndürmez void dir.
{
	             // program yazýmý barýþ mnerale aittir.. 
	printf("Merhaba !  Bu program Ogrencilerin Not Ortalamalarini Hesaplar... \nsonlandirmak Icin -1 sayisini giriniz\n");  // yazýlým baþlýðý
	int ogrenci_notu,ortalama=0,toplam=0,sayac=0;  // deðiþkenleri tanýmladýk (öðrenci notlarýný saklayacaðýmýz deðiþken),(notlarýn bolumunden kalan sayý),(ogrenci notunu toplayacaðýmýz deðiþken)
	
	 for ( int j=1; ;  )  // döngü 1 den baþlar 3 oluncaya kadar döner..
	 {
	 if (ogrenci_notu == -1) break;
	 	printf("%d. Ogrencinin Notunu Giriniz : ",j++);//  not ister (i) öðrencileri temsil eder...
	 	scanf("%d",&ogrenci_notu);  //(ogrenci_notu) deðiþkeni her 3 kere girilen sayýyý kaydeder...
	 sayac++;
                toplam+=ogrenci_notu;  // ogrencý notlarýný tek tek toplam adlý deðiþkene kaydeder 1'er 1'er kayýt olur örn.95+95+95 toplamda 3 girilen sayý tutulur...
	 	 		      
	 	     
	 }
	                 ortalama = toplam/sayac;    // girilen ogrenci notlarý toplam da kayýt edildikten sonra 3'e bölünüp cýkan sayý ortalama adlý deðiþkene aktarýlýr...
   	          printf("girilen ogrenci sayisi = %d Ogrencilerin Not Ortalamasi = %d'dir...\n\n",sayac,ortalama); // printf yardýmý ile cýkan sonuc ekrana yazdýrýlýr %d ortalamayý temsil eder..
	          
	          
	system("pause");   // yazýlým pc deki açýldýktan hemen sonra kapanmaz kullanýcýdan komuty bekler bu kod yazýlmasa idi yazýlým çalýþýp iþlem yapmadan kapanacaktý..
	     return 0;  // boþ deðer gönderdik yazýlmasa da olur
	
	
}
